package backend;

import flixel.FlxG;
import flixel.graphics.FlxGraphic;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.system.frontEnds.AssetFrontEnd;
import openfl.display.BitmapData;
import openfl.media.Sound;
import openfl.text.Font;

class ObjectCache<T>
{
	public var data:T;

	public function new(data:T)
	{
		this.data = data;
	}

	public function dealloc()
	{
		return;
	}
}

class CacheImage extends ObjectCache<FlxGraphic>
{
	override function dealloc()
	{
		data.persist = false;

		data.destroy();
	}
}

class CacheSound extends ObjectCache<Sound>
{
	override function dealloc()
	{
		data.close();
	}
}

class AssetManager
{
	public static var graphicCache:Map<String, CacheImage> = [];
	public static var soundCache:Map<String, CacheSound> = [];
	public static var musicCache:Map<String, CacheSound> = [];

	static var registeredFonts:Array<String> = [];

	static var soundExtension:String = 'mp3';

	static var assetManager(get, null):AssetFrontEnd;

	public static function getAssetPath()
		return 'assets';

	public static function getPath(file:String, directory:String)
	{
		return '${getAssetPath()}/$directory/$file';
	}

	static function fileToString(path:String)
		return assetManager.getText(path, false);

	static function getSoundInternal(path:String, soundDirectory:String, cache:Map<String, CacheSound>)
	{
		var finalPath:String = getPath('$path.$soundExtension', soundDirectory);

		var data:CacheSound = null;

		if (cache.exists(path))
			return cache[path].data;

		if (assetManager.exists(finalPath))
		{
			data = new CacheSound(assetManager.getSound(finalPath, false));
			cache.set(path, data);
		}

		return data.data;
	}

	public static function getSound(path:String)
	{
		return getSoundInternal(path, 'sounds', soundCache);
	}

	public static function getMusic(path:String)
	{
		return getSoundInternal(path, 'music', musicCache);
	}

	public static function getJson(path:String, optionalPath:String = '')
	{
		return fileToString(getPath(path + '.json', optionalPath));
	}

	public static function getImage(path:String, ?extension:String = 'png')
	{
		var finalPath:String = getPath('$path.$extension', 'images');

		var data:CacheImage = null;

		if (graphicCache.exists(path))
			return graphicCache[path].data;

		if (assetManager.exists(finalPath))
		{
			data = new CacheImage(FlxGraphic.fromBitmapData(assetManager.getBitmapData(finalPath)));
			graphicCache.set(path, data);
		}

		return data.data;
	}

	public static function registerFont(path:String, ?extension:String = 'ttf')
	{
		var file = assetManager.getFont(getPath('$path.$extension', 'fonts'), false);
		Font.registerFont(file);

		registeredFonts.push(path);
	}

	public static function getFont(path:String, ?extension:String = 'ttf')
	{
		if (!registeredFonts.contains(path))
			registerFont(path, extension);
		return getPath('$path.$extension', 'fonts');
	}

	public static function getAtlas(path:String, ?imageExtension:String = 'png')
	{
		return FlxAtlasFrames.fromSparrow(getImage(path, imageExtension), fileToString(getPath(path + '.xml', 'images')));
	}

	public static function getShader(path:String, ?extension:String = 'glsl')
	{
		return fileToString(getPath('$path.$extension', 'shaders'));
	}

	static function get_assetManager():AssetFrontEnd
	{
		return FlxG.assets;
	}
}
