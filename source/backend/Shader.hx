package backend;

import flixel.addons.display.FlxRuntimeShader;

class Shader extends FlxRuntimeShader
{
	public function new(shaderName:String = 'dither')
	{
		var data = AssetManager.getShader(shaderName);
		trace(data);

		super(data);
	}
}
// one
