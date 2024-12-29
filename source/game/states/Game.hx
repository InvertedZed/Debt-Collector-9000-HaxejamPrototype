package game.states;

import backend.AssetManager;
import backend.Camera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import game.ingame.Background;
import game.ingame.Enemy;
import game.ingame.Player;

class Game extends FlxState
{
	public var background:Background;
	public var player:Player;

	public var enemyTest:Enemy;

	public var info:FlxText;

	public var ui:Camera;

	public var tired_bar:FlxBar;
	public var health_bar:FlxBar;

	override function create()
	{
		super.create();

		ui = new Camera();
		ui.bgColor = 0x00000000;
		FlxG.cameras.add(ui, false);

		player = new Player();
		player.initPosition();

		background = new Background(2, player);

		enemyTest = new Enemy(STANDARD1);
		enemyTest.x += 300;

		add(background);
		add(player);

		add(enemyTest);

		info = new FlxText();
		info.font = AssetManager.getFont('default');
		info.borderStyle = OUTLINE;
		info.borderSize = 1.5;
		info.borderColor = 0xFF000000;
		info.camera = ui;
		info.size = 50;
		add(info);

		tired_bar = new FlxBar(13 * 4, 3 * 4, TOP_TO_BOTTOM, 10 * 4, 80 * 4);
		tired_bar.setRange(0, 4);
		tired_bar.value = player.hitCooldown;
		tired_bar.createFilledBar(0xff00ff00, 0xff000000, false);
		add(tired_bar);

		health_bar = new FlxBar(3 * 4, 3 * 4, TOP_TO_BOTTOM, 10 * 4, 80 * 4);
		health_bar.setRange(0, 100);
		health_bar.value = player.player_health;
		health_bar.createFilledBar(0xff00ff00, 0xff000000, false);
		add(health_bar);

		FlxG.camera.pixelPerfectRender = true;
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		FlxG.camera.scroll.set(player.x - (FlxG.width / 2) + 64, 0);

		// info.text = 'PLAYER POSITION: ${player.getPosition().toString()}\nHOLD TIMER: ${player.holdTimer}\nCOOLDAEFASG: ${player.hitCooldown}\nThresg: ${player.hitThreshold}';
		if (player.hitCooldown == 0)
		{
			tired_bar.createFilledBar(0xff0000ff, 0xffff0000, false);
			tired_bar.value = player.hitThreshold;
		}
		else
		{
			tired_bar.createFilledBar(0xff0000c0, 0xffc00000, false);
			tired_bar.value = player.hitCooldown;
		}
		tired_bar.x = player.x - (FlxG.width / 2) + 64 + 13 * 4;
		health_bar.x = player.x - (FlxG.width / 2) + 64 + 3 * 4;
	}
}
