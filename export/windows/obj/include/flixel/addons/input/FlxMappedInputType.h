// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input_FlxMappedInputType
#define INCLUDED_flixel_addons_input_FlxMappedInputType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,input,FlxMappedInputType)
namespace flixel{
namespace addons{
namespace input{


class FlxMappedInputType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxMappedInputType_obj OBJ_;

	public:
		FlxMappedInputType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.input.FlxMappedInputType",2c,a8,fb,92); }
		::String __ToString() const { return HX_("FlxMappedInputType.",cf,69,05,6a) + _hx_tag; }

		static ::flixel::addons::input::FlxMappedInputType Lone( ::Dynamic id);
		static ::Dynamic Lone_dyn();
		static ::flixel::addons::input::FlxMappedInputType Multi(::cpp::VirtualArray ids);
		static ::Dynamic Multi_dyn();
};

} // end namespace flixel
} // end namespace addons
} // end namespace input

#endif /* INCLUDED_flixel_addons_input_FlxMappedInputType */ 