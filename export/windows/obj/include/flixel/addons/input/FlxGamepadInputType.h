// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input_FlxGamepadInputType
#define INCLUDED_flixel_addons_input_FlxGamepadInputType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,input,FlxGamepadInputType)
namespace flixel{
namespace addons{
namespace input{


class FlxGamepadInputType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxGamepadInputType_obj OBJ_;

	public:
		FlxGamepadInputType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.input.FlxGamepadInputType",28,c4,cd,aa); }
		::String __ToString() const { return HX_("FlxGamepadInputType.",19,d7,9d,1c) + _hx_tag; }

		static ::flixel::addons::input::FlxGamepadInputType DPad;
		static inline ::flixel::addons::input::FlxGamepadInputType DPad_dyn() { return DPad; }
		static ::flixel::addons::input::FlxGamepadInputType Face;
		static inline ::flixel::addons::input::FlxGamepadInputType Face_dyn() { return Face; }
		static ::flixel::addons::input::FlxGamepadInputType LeftStickDigital;
		static inline ::flixel::addons::input::FlxGamepadInputType LeftStickDigital_dyn() { return LeftStickDigital; }
		static ::flixel::addons::input::FlxGamepadInputType Lone(int id);
		static ::Dynamic Lone_dyn();
		static ::flixel::addons::input::FlxGamepadInputType Multi(int up,int down, ::Dynamic right, ::Dynamic left);
		static ::Dynamic Multi_dyn();
		static ::flixel::addons::input::FlxGamepadInputType RightStickDigital;
		static inline ::flixel::addons::input::FlxGamepadInputType RightStickDigital_dyn() { return RightStickDigital; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace input

#endif /* INCLUDED_flixel_addons_input_FlxGamepadInputType */ 