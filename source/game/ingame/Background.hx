package game.ingame;

import backend.AssetManager;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;

class Background extends FlxTypedGroup<FlxSprite>
{
	public var maxY:Float = 420;
	public var minY:Float = 552;

	var internalPlayer:Player;

	public function new(id:Int, p:Player)
	{
		super();

		this.internalPlayer = p;

		switch (id)
		{
			default: // if you provide an invalid num or smth, this will be default stage, too lazy to softcode smh,......
				var background = new Backdrop(AssetManager.getImage('gameplay/levels/1'), X);
				add(background);
			case 2:
				var background = new Backdrop(AssetManager.getImage('gameplay/levels/2/back'), X);
				background.scrollFactor.x = 0.8;
				add(background);

				var frontground = new Backdrop(AssetManager.getImage('gameplay/levels/2/front'), X);
				add(frontground);
		}
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		internalPlayer.updateMovement();

		if (internalPlayer.y < maxY)
			internalPlayer.setY(maxY);
		if (internalPlayer.y > minY)
			internalPlayer.setY(minY);
	}
}
