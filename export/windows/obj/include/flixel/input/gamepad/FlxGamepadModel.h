// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#define INCLUDED_flixel_input_gamepad_FlxGamepadModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadModel)
namespace flixel{
namespace input{
namespace gamepad{


class FlxGamepadModel_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxGamepadModel_obj OBJ_;

	public:
		FlxGamepadModel_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.input.gamepad.FlxGamepadModel",f7,d6,4b,41); }
		::String __ToString() const { return HX_("FlxGamepadModel.",34,1c,0b,ba) + _hx_tag; }

		static ::flixel::input::gamepad::FlxGamepadModel LOGITECH;
		static inline ::flixel::input::gamepad::FlxGamepadModel LOGITECH_dyn() { return LOGITECH; }
		static ::flixel::input::gamepad::FlxGamepadModel MAYFLASH_WII_REMOTE;
		static inline ::flixel::input::gamepad::FlxGamepadModel MAYFLASH_WII_REMOTE_dyn() { return MAYFLASH_WII_REMOTE; }
		static ::flixel::input::gamepad::FlxGamepadModel MFI;
		static inline ::flixel::input::gamepad::FlxGamepadModel MFI_dyn() { return MFI; }
		static ::flixel::input::gamepad::FlxGamepadModel OUYA;
		static inline ::flixel::input::gamepad::FlxGamepadModel OUYA_dyn() { return OUYA; }
		static ::flixel::input::gamepad::FlxGamepadModel PS4;
		static inline ::flixel::input::gamepad::FlxGamepadModel PS4_dyn() { return PS4; }
		static ::flixel::input::gamepad::FlxGamepadModel PSVITA;
		static inline ::flixel::input::gamepad::FlxGamepadModel PSVITA_dyn() { return PSVITA; }
		static ::flixel::input::gamepad::FlxGamepadModel SWITCH_JOYCON_LEFT;
		static inline ::flixel::input::gamepad::FlxGamepadModel SWITCH_JOYCON_LEFT_dyn() { return SWITCH_JOYCON_LEFT; }
		static ::flixel::input::gamepad::FlxGamepadModel SWITCH_JOYCON_RIGHT;
		static inline ::flixel::input::gamepad::FlxGamepadModel SWITCH_JOYCON_RIGHT_dyn() { return SWITCH_JOYCON_RIGHT; }
		static ::flixel::input::gamepad::FlxGamepadModel SWITCH_PRO;
		static inline ::flixel::input::gamepad::FlxGamepadModel SWITCH_PRO_dyn() { return SWITCH_PRO; }
		static ::flixel::input::gamepad::FlxGamepadModel UNKNOWN;
		static inline ::flixel::input::gamepad::FlxGamepadModel UNKNOWN_dyn() { return UNKNOWN; }
		static ::flixel::input::gamepad::FlxGamepadModel WII_REMOTE;
		static inline ::flixel::input::gamepad::FlxGamepadModel WII_REMOTE_dyn() { return WII_REMOTE; }
		static ::flixel::input::gamepad::FlxGamepadModel XINPUT;
		static inline ::flixel::input::gamepad::FlxGamepadModel XINPUT_dyn() { return XINPUT; }
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadModel */ 
