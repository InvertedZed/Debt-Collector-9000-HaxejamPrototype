package backend;

import flixel.FlxCamera;

class Camera extends FlxCamera
{
	override function update(elapsed:Float)
	{
		super.update(elapsed);

		flashSprite.scaleX = flashSprite.scaleY = 2;
		setScale(zoom / 2, zoom / 2);
	}
}
