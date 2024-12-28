// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input_FlxControlInputTypeRaw
#define INCLUDED_flixel_addons_input_FlxControlInputTypeRaw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,input,FlxControlInputTypeRaw)
HX_DECLARE_CLASS3(flixel,addons,input,FlxGamepadInputType)
HX_DECLARE_CLASS3(flixel,addons,input,FlxKeyInputType)
HX_DECLARE_CLASS3(flixel,addons,input,FlxMouseInputType)
HX_DECLARE_CLASS3(flixel,addons,input,FlxVirtualPadInputType)
namespace flixel{
namespace addons{
namespace input{


class FlxControlInputTypeRaw_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxControlInputTypeRaw_obj OBJ_;

	public:
		FlxControlInputTypeRaw_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.input.FlxControlInputTypeRaw",5c,87,52,15); }
		::String __ToString() const { return HX_("FlxControlInputTypeRaw.",1f,ff,5d,5e) + _hx_tag; }

		static ::flixel::addons::input::FlxControlInputTypeRaw Gamepad( ::flixel::addons::input::FlxGamepadInputType type);
		static ::Dynamic Gamepad_dyn();
		static ::flixel::addons::input::FlxControlInputTypeRaw Keyboard( ::flixel::addons::input::FlxKeyInputType type);
		static ::Dynamic Keyboard_dyn();
		static ::flixel::addons::input::FlxControlInputTypeRaw Mouse( ::flixel::addons::input::FlxMouseInputType type);
		static ::Dynamic Mouse_dyn();
		static ::flixel::addons::input::FlxControlInputTypeRaw VirtualPad( ::flixel::addons::input::FlxVirtualPadInputType type);
		static ::Dynamic VirtualPad_dyn();
};

} // end namespace flixel
} // end namespace addons
} // end namespace input

#endif /* INCLUDED_flixel_addons_input_FlxControlInputTypeRaw */ 
