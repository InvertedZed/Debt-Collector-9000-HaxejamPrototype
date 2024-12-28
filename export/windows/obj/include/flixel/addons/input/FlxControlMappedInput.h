// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input_FlxControlMappedInput
#define INCLUDED_flixel_addons_input_FlxControlMappedInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,input,FlxControlMappedInput)
HX_DECLARE_CLASS3(flixel,addons,input,FlxMappedInputType)
HX_DECLARE_CLASS3(flixel,addons,input,FlxMouseInputType)
namespace flixel{
namespace addons{
namespace input{


class FlxControlMappedInput_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxControlMappedInput_obj OBJ_;

	public:
		FlxControlMappedInput_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.input.FlxControlMappedInput",5f,fb,99,85); }
		::String __ToString() const { return HX_("FlxControlMappedInput.",c2,5a,7e,46) + _hx_tag; }

		static ::flixel::addons::input::FlxControlMappedInput Gamepad( ::flixel::addons::input::FlxMappedInputType type);
		static ::Dynamic Gamepad_dyn();
		static ::flixel::addons::input::FlxControlMappedInput Keyboard( ::flixel::addons::input::FlxMappedInputType type);
		static ::Dynamic Keyboard_dyn();
		static ::flixel::addons::input::FlxControlMappedInput Mouse( ::flixel::addons::input::FlxMouseInputType type);
		static ::Dynamic Mouse_dyn();
		static ::flixel::addons::input::FlxControlMappedInput VirtualPad( ::flixel::addons::input::FlxMappedInputType type);
		static ::Dynamic VirtualPad_dyn();
};

} // end namespace flixel
} // end namespace addons
} // end namespace input

#endif /* INCLUDED_flixel_addons_input_FlxControlMappedInput */ 