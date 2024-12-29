package game.ingame;

import backend.AssetManager;
import backend.GameSprite;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.util.FlxSignal;

enum HitType
{
	RIGHT;
	LEFT;
	KICK;
}

class Player extends GameSprite
{
	public var controls:PlayerControls;

	public var speed:Float = 8;

	public var holdTimer:Float = 0;
	public var hitCooldown:Float = 0;
	public var hitThreshold:Float = 0;

	public var player_health:Float = 0;
	public var animationToPlay:String = "idle";

	public var canMove:Bool = true;

	public var onSwing:FlxTypedSignal<HitType->Void> = new FlxTypedSignal<HitType->Void>();

	var internalX:Float = 0;
	var internalY:Float = 0;

	public function new()
	{
		super(0, 0);

		frames = AssetManager.getAtlas('gameplay/player');

		addAnimation('idle', 5, true);
		addAnimation('walk', 5, true);

		for (attackAnim in ['lefthit', 'righthit', 'kick'])
			addAnimation(attackAnim, 10, false, FlxPoint.get(4, 39));

		playAnimation('idle', true);

		controls = new PlayerControls('scheme');

		FlxG.inputs.addInput(controls);
	}

	override public function playAnimation(name:String, forced:Bool = false)
	{
		var point = (offsetMap.get(name) ?? FlxPoint.get()).clone();

		point.x = ((flipX && ((name != 'idle' && name != 'walk'))) ? 42 : 16) * 4;

		offset = point;
		animation.play(name, forced);
	}

	public function initPosition()
	{
		screenCenter();
		y += 150;
		internalX = x;
		internalY = y;
	}

	public function updateMovement()
	{
		canMove = (holdTimer == 0);
		if (holdTimer > 0)
		{
			holdTimer -= FlxG.elapsed;
		}
		holdTimer = Math.max(0, holdTimer);

		if (hitThreshold > 4)
		{
			hitThreshold = 0;
			hitCooldown = 4;
		}
		else
		{
			hitThreshold -= FlxG.elapsed * 1.2;
		}
		hitThreshold = Math.max(0, hitThreshold);

		if (hitCooldown > 0)
		{
			hitCooldown -= FlxG.elapsed;
		}
		hitCooldown = Math.max(0, hitCooldown);

		if (canMove)
		{
			if (controls.pressed.LEFT)
			{
				internalX -= (speed * 26) * FlxG.elapsed;

				if (!controls.pressed.RIGHT)
					flipX = true;
			}
			if (controls.pressed.RIGHT)
			{
				internalX += (speed * 26) * FlxG.elapsed;

				if (!controls.pressed.LEFT)
					flipX = false;
			}
			if (controls.pressed.UP)
				internalY -= (speed * 23) * FlxG.elapsed;
			if (controls.pressed.DOWN)
				internalY += (speed * 23) * FlxG.elapsed;
		}

		animationToPlay = 'idle';
		var shouldPlayGeneralAnim = true;

		if (controls.pressed.UP != controls.pressed.DOWN || controls.pressed.LEFT != controls.pressed.RIGHT)
			animationToPlay = 'walk';

		if (controls.justPressed.any([LEFTHIT, RIGHTHIT, KICK]) && hitCooldown <= 0 && holdTimer <= 0)
		{
			shouldPlayGeneralAnim = false;
			var hitType:HitType = LEFT;

			if (controls.justPressed.LEFTHIT)
			{
				animationToPlay = 'lefthit';
			}
			if (controls.justPressed.RIGHTHIT)
			{
				animationToPlay = 'righthit';
				hitType = RIGHT;
			}
			if (controls.justPressed.KICK)
			{
				animationToPlay = 'kick';
				hitThreshold += 0.5;
				hitType = KICK;
			}

			playAnimation(animationToPlay, true);

			onSwing.dispatch(hitType);

			hitThreshold += 1;

			holdTimer = 0.45;
		}
		else
		{
			if (holdTimer <= 0)
				playAnimation(animationToPlay, false);
		}

		snapMovement();
	}

	public function setX(value:Float)
		x = internalX = value;

	public function setY(value:Float)
		y = internalY = value;

	function snap(m:Float, pixelAmount:Int = 4)
		return (Math.ceil(Math.abs(m) / pixelAmount) * pixelAmount) * (m / Math.abs(m));

	public function snapMovement()
	{
		x = Math.floor(snap(internalX));
		y = Math.floor(snap(internalY));
	}
}
