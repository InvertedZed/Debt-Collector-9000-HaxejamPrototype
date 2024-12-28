package game.states;

import backend.AssetManager;
import backend.Camera;
import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import game.ingame.Background;
import game.ingame.Player;

class TestState extends FlxState
{
	public var background:Background;
	public var player:Player;

	public var info:FlxText;

	public var ui:Camera;

	override function create()
	{
		super.create();

		ui = new Camera();
		ui.bgColor = 0x00000000;
		FlxG.cameras.add(ui, false);

		player = new Player();
		player.initPosition();

		background = new Background(2, player);

		add(background);
		add(player);

		info = new FlxText();
		info.font = AssetManager.getFont('default');
		info.borderStyle = OUTLINE;
		info.borderSize = 1.5;
		info.borderColor = 0xFF000000;
		info.camera = ui;
		info.size = 50;
		add(info);

		FlxG.camera.pixelPerfectRender = true;
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		FlxG.camera.scroll.set(player.x - (FlxG.width / 2) + 64, 0);

		info.text = 'PLAYER POSITION: ${player.getPosition().toString()}\nHOLD TIMER: ${player.holdTimer}\nCOOLDAEFASG: ${player.hitCooldown}\nThresg: ${player.hitThreshold}';
	}
}
