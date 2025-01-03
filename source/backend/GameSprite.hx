package backend;

import flixel.addons.effects.FlxSkewedSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;

class GameSprite extends FlxSkewedSprite
{
	private var offsetMap:Map<String, FlxPoint> = [];

	var fixOrigin:Bool = true;

	public function new(x:Float = 0, y:Float = 0, ?graphic:FlxGraphicAsset, shouldFixOrigin:Bool = true)
	{
		super(x, y, graphic);

		fixOrigin = shouldFixOrigin;

		antialiasing = false;

		scale.set(4, 4);

		if (fixOrigin)
			origin.set();
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (fixOrigin)
			origin.set();
	}

	public function addAnimation(name:String, fps:Int = 5, looped:Bool = false, position:FlxPoint = null)
	{
		if (position == null)
			position = FlxPoint.get();

		animation.addByPrefix(name, name, fps, looped);

		offsetMap.set(name, position);
	}

	public function playAnimation(name:String, forced:Bool = false)
	{
		var point = (offsetMap.get(name) ?? FlxPoint.get()).clone();

		offset = point;
		animation.play(name, forced);
	}
}
