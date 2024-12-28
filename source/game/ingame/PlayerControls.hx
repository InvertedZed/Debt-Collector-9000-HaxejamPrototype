package game.ingame;

import flixel.addons.input.FlxControls;
import flixel.input.keyboard.FlxKey;

enum ControlEnum
{
	@:inputs([FlxKey.UP, FlxKey.W])
	UP;

	@:inputs([FlxKey.DOWN, FlxKey.S])
	DOWN;

	@:inputs([FlxKey.LEFT, FlxKey.A])
	LEFT;

	@:inputs([FlxKey.RIGHT, FlxKey.D])
	RIGHT;

	@:inputs([FlxKey.Z])
	LEFTHIT;

	@:inputs([FlxKey.X])
	RIGHTHIT;

	@:inputs([FlxKey.C])
	KICK;
}

class PlayerControls extends FlxControls<ControlEnum> {}
