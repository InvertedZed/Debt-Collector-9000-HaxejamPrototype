package game.ingame;

import backend.AssetManager;
import backend.GameSprite;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.path.FlxPath;
import game.states.Game;
import haxe.Json;

typedef EnemyAnimation =
{
	var name:String;
	var offset:Array<Int>;
	var fps:Int;
	@:optional var looped:Bool;
}

typedef EnemyJson =
{
	@:optional var name:String;
	var animations:Array<EnemyAnimation>;
}

enum abstract EnemyType(Int) from Int to Int
{
	public var STANDARD1:Int = 1;
	public var STANDARD2:Int = 2;
	public var STANDARD3:Int = 3;
	public var BOSS:Int = 4;
}

class Enemy extends GameSprite
{
	private var enemyData:EnemyJson;
	private var enemyType:EnemyType = STANDARD1;

	public var distanceNeeded:Float = 120;

	private var cooldown:Float = 1;

	public var parent:Game;

	public function new(type:EnemyType = STANDARD1)
	{
		super(0, 0);

		this.enemyType = type;

		frames = AssetManager.getAtlas('gameplay/enemies/enemy${cast (type, Int)}');

		enemyData = Json.parse(AssetManager.getJson('enemies/enemy${cast (type, Int)}', 'data'));

		trace(enemyData);
		for (anim in enemyData.animations)
		{
			addAnimation(anim.name, anim.fps, anim.looped ?? false, FlxPoint.get(anim.offset[0], anim.offset[1]));
		}
		playAnimation('walk', true);

		screenCenter();
		y += 150;

		path = new FlxPath([]);

		if (FlxG.state is Game)
			this.parent = cast FlxG.state;
	}

	public function attack()
	{
		if (animation.name != 'punch')
		{
			trace('hit this fucking idiot');
			animation.play('punch', true);
		}
		cooldown = 1;
	}

	function approach(a:Float, b:Float, amt:Float)
	{
		if (a > b)
			a = Math.max(a - amt, b);
		else
			a = Math.min(a + amt, b);
		return a;
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
		if (cooldown > 0)
		{
			cooldown -= FlxG.elapsed;
			var point:FlxPoint = new FlxPoint();
			if (flipX)
				point.x = 44 * 4;
			else
				point.x = 16 * 4;
			point.y = 0;
			offset = point;

			if (cooldown < 0.5)
			{
				var point:FlxPoint = new FlxPoint();
				point.x = 16 * 4;
				point.y = 0;
				offset = point;
				animation.play('walk', false);
			}
		}
		cooldown = Math.max(0, cooldown);

		if (cooldown == 0)
		{
			var true_player_x = parent.player.x - parent.player.offset.x;
			x = approach(x, true_player_x, elapsed * (45 * 2));
			y = approach(y, parent.player.y - (parent.player.frameHeight / 2), elapsed * (45));

			if ((Math.abs(true_player_x - x) <= distanceNeeded))
				attack();

			flipX = (true_player_x < x);
		}
	}
}
