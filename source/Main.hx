package;

import backend.AssetManager;
import backend.helpers.DebugStats;
import flixel.FlxGame;
import flixel.FlxSprite;
import game.states.TestState;
import openfl.display.Sprite;
#if js
import js.Browser;
#end

class Main extends Sprite
{
	public static var debugStats:DebugStats;

	public function new()
	{
		super();

		var frameRate:Int = stage.window.displayMode.refreshRate;

		addChild(new FlxGame(1024, 768, TestState, frameRate, frameRate, true, false));
		addChild(debugStats = new DebugStats(10, 3, 0xFFFFFFFF));

		FlxSprite.defaultAntialiasing = true; // this is for fonts since they look like hot ass without it. fuck you openfl.

		// this is needed.
		@:privateAccess {
			if (!AssetManager.assetManager.exists('assets/images/important.png'))
			{
				#if sys
				Sys.exit(1);
				#else
				#if js
				Browser.window.close();
				#end
				#end
			}
		}
	}
}
