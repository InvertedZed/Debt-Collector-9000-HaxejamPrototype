package game.states;

import backend.AssetManager;
import backend.GameSprite;
import flixel.FlxG;
import flixel.FlxState;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;

class Title extends FlxState
{
	public var coldbrew:GameSprite;
	public var canSelect:Bool = false;

	override function create()
	{
		super.create();

		coldbrew = new GameSprite(0, 0, null, false);
		coldbrew.loadGraphic(AssetManager.getImage('menus/titlescreen'));
		coldbrew.screenCenter();
		coldbrew.alpha = 0.0001;
		add(coldbrew);

		trace('got here!');

		FlxG.sound.playMusic(AssetManager.getMusic('title'), 1, false);

		FlxTween.tween(coldbrew, {alpha: 1}, 3.31, {
			ease: FlxEase.quadIn,
			onComplete: (_) ->
			{
				canSelect = true;

				FlxG.camera.flash(0xFFFFFFFF, 0.5);
			}
		});
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.keys.justPressed.ENTER && canSelect)
		{
			canSelect = false;

			FlxG.camera.flash(0xFFFFFFFF, 0.15);

			FlxG.sound.play(AssetManager.getSound('explosion'));

			if (FlxG.sound.music != null && FlxG.sound.music.playing && FlxG.sound.music.time < Std.int(10.28 * 1000))
				FlxG.sound.music.time = Std.int(10.28 * 1000);

			new FlxTimer().start(2.5, (_) ->
			{
				FlxG.switchState(new Game());
			});
		}
	}
}
