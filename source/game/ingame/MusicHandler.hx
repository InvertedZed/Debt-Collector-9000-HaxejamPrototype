package game.ingame;

import backend.AssetManager;
import flixel.FlxG;

class MusicHandler
{
	public static function playMusic(levelIndex:Int = 1, isBoss:Bool = false)
	{
		FlxG.sound.playMusic(AssetManager.getMusic('levels/${isBoss ? 'bossmusic' : Std.string(levelIndex)}'));
	}
}
