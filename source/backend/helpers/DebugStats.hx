package backend.helpers;

import flixel.FlxG;
import flixel.util.FlxStringUtil;
import openfl.system.System;
import openfl.text.TextField;
import openfl.text.TextFormat;

class DebugStats extends TextField
{
	/**
		The current frame rate, expressed using frames-per-second
	**/
	public var currentFPS(default, null):Int;

	@:noCompletion private var cacheCount:Int;
	@:noCompletion private var currentTime:Float;
	@:noCompletion private var times:Array<Float>;

	public function new(x:Float = 10, y:Float = 10, color:Int = 0x000000)
	{
		super();

		this.x = x;
		this.y = y;

		currentFPS = 0;
		selectable = false;
		mouseEnabled = false;
		autoSize = LEFT;
		defaultTextFormat = new TextFormat("_sans", 12, color);
		text = "FPS: ";

		cacheCount = 0;
		currentTime = 0;
		times = [];
	}

	private override function __enterFrame(deltaTime:Float):Void
	{
		currentTime += deltaTime;
		times.push(currentTime);

		while (times[0] < currentTime - 1000)
		{
			times.shift();
		}

		var currentCount = times.length;
		currentFPS = Math.round((currentCount + cacheCount) / 2);

		if (currentFPS >= FlxG.drawFramerate)
			currentFPS = FlxG.drawFramerate;

		if (currentCount != cacheCount)
		{
			text = '$currentFPS FPS\n';
			text += '${FlxStringUtil.formatBytes(System.totalMemoryNumber)} RAM\n';
			text += 'GAMEJAM ENTRY: UNTITLED';
		}

		cacheCount = currentCount;
	}
}
