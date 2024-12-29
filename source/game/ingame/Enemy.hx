package game.ingame;

import backend.AssetManager;
import backend.GameSprite;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxSignal;
import flixel.util.FlxTimer;
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
	public var BULLET:Int = 5;
}

class Enemy extends GameSprite
{
	private var enemyData:EnemyJson;
	private var enemyType:EnemyType = STANDARD1;

	public var distanceNeeded:Float = 192;

	private var cooldown:Float = 0;

	public var parent:Game;

	public var dead:Bool = false;
	public var yeeted:Bool = false;

	public var enemyHealth:Float = 1;

	public var onFuckingHit:FlxTypedSignal<EnemyType->Void> = new FlxTypedSignal<EnemyType->Void>();

	public function new(x:Float = 0, y:Float = 150, type:EnemyType = STANDARD1)
	{
		super(0, 0);
		screenCenter();
		this.x += x;
		this.y += y;
		this.enemyType = type;

		frames = AssetManager.getAtlas('gameplay/enemies/enemy${cast (type, Int)}');

		enemyData = Json.parse(AssetManager.getJson('enemies/enemy${cast (type, Int)}', 'data'));

		trace(enemyData);
		for (anim in enemyData.animations)
		{
			addAnimation(anim.name, anim.fps, anim.looped ?? false, FlxPoint.get(anim.offset[0], anim.offset[1]));
		}

		animation.play('walk', false);

		if (FlxG.state is Game)
			this.parent = cast FlxG.state;

		parent.player.onSwing.add((hitType) ->
		{
			if (FlxG.pixelPerfectOverlap(parent.player, this, 0))
			{
				trace('just hit the mf');

				enemyHealth -= switch (hitType)
				{
					default:
						0.25;
					case RIGHT:
						0.5;
					case KICK:
						0;
				};

				if (hitType == KICK)
				{
					velocity.x = 120 * 4;
					animation.play('fall', true);
					yeeted = true;
					cooldown = 1;
				}
			}
			if (!dead)
			{
				if (enemyHealth <= 0)
				{
					dead = true;

					FlxG.camera.shake(0.005, 0.3, null, true, X);

					FlxG.sound.play(AssetManager.getSound(enemyType != STANDARD3 ? 'owie' : 'explosion'), 1.2);

					velocity.y = -350;
					acceleration.y = 550;

					if (enemyType != STANDARD3)
						velocity.x = FlxG.random.float(-15, 15);

					animation.play(enemyType != STANDARD3 ? 'fall' : 'kaboosh', true);

					centerOffsets();

					x -= 150;

					new FlxTimer().start(2, (tmr) ->
					{
						kill();

						trace('bye bye');
					});
				}
				else
				{
					trace('yoouch, that shit hurt bro :(');

					FlxG.sound.play(AssetManager.getSound('owie'));

					// super fucking nintendo shit right here
				}
			}
		});
	}

	public function attack()
	{
		var hitAnim:String = enemyType != STANDARD3 ? 'punch' : 'kaboosh';

		if (animation.name != hitAnim)
		{
			trace('hit this fucking idiot');
			animation.play(hitAnim, true);

			onFuckingHit.dispatch(enemyType);
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

		if (!dead)
		{
			switch (enemyType) // undocumented, amazing code, splendid with the sauce... ANIMAL style...... OUTSIDE......... AND AT THE LOCAL KROGER............
			{
				default:
				case 1:
					if (!yeeted)
					{
						distanceNeeded = 192;
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
							var true_player_y = parent.player.y - parent.player.offset.y;
							x = approach(x, true_player_x, elapsed * (45 * 2));
							y = approach(y, true_player_y, elapsed * (45));

							if ((Math.abs(true_player_x - x) <= distanceNeeded))
								attack();

							flipX = (true_player_x < x);
						}
					}
					else
					{
						if (cooldown > 0)
						{
							cooldown -= FlxG.elapsed * 4;
						}
						cooldown = Math.max(0, cooldown);
						if (cooldown == 0)
						{
							yeeted = false;
							velocity.x = 0;
							cooldown = 0;
						}
					}
				case 2:
					distanceNeeded = 576;
					var true_player_x = parent.player.x - parent.player.offset.x;

					if (Math.abs(true_player_x - x) <= distanceNeeded)
					{
						animation.play('shoot', true);
						var point:FlxPoint = new FlxPoint();
						if (flipX)
							point.x = 46 * 4;
						else
							point.x = 16 * 4;
						point.y = 0;
						offset = point;
						new Enemy(x, y, 5);
					}
					else
					{
						x = approach(x, true_player_x + 192, elapsed * (45 * 2));
						// y = approach(y, parent.player.y - (parent.player.frameHeight / 2), elapsed * (45));
						animation.play('walk', false);
						var point:FlxPoint = new FlxPoint();
						if (flipX)
							point.x = 36 * 4;
						else
							point.x = 16 * 4;
						point.y = 0;
						offset = point;
						flipX = (true_player_x < x);
					}
				case 5:
					var true_player_x = parent.player.x - parent.player.offset.x;
					animation.play('bullet', false);
					x = approach(x, true_player_x + 192, elapsed * (78 * 2));
			}
		}
	}
}
