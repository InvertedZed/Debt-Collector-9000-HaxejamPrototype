package backend;

import flixel.addons.effects.FlxSkewedSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

class GameSprite extends FlxSkewedSprite
{
	public function new(x:Float = 0, y:Float = 0, ?graphic:FlxGraphicAsset)
	{
		super(x, y, graphic);

		antialiasing = false;

		scale.set(4, 4);

		origin.set();
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		origin.set();
	}
}
