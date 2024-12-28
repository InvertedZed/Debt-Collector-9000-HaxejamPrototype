// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_input_FlxControlMappedInput
#include <flixel/addons/input/FlxControlMappedInput.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxMappedInputType
#include <flixel/addons/input/FlxMappedInputType.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxMouseInputType
#include <flixel/addons/input/FlxMouseInputType.h>
#endif
namespace flixel{
namespace addons{
namespace input{

::flixel::addons::input::FlxControlMappedInput FlxControlMappedInput_obj::Gamepad( ::flixel::addons::input::FlxMappedInputType type)
{
	return ::hx::CreateEnum< FlxControlMappedInput_obj >(HX_("Gamepad",81,08,d7,56),1,1)->_hx_init(0,type);
}

::flixel::addons::input::FlxControlMappedInput FlxControlMappedInput_obj::Keyboard( ::flixel::addons::input::FlxMappedInputType type)
{
	return ::hx::CreateEnum< FlxControlMappedInput_obj >(HX_("Keyboard",c7,78,db,41),0,1)->_hx_init(0,type);
}

::flixel::addons::input::FlxControlMappedInput FlxControlMappedInput_obj::Mouse( ::flixel::addons::input::FlxMouseInputType type)
{
	return ::hx::CreateEnum< FlxControlMappedInput_obj >(HX_("Mouse",05,86,92,9f),2,1)->_hx_init(0,type);
}

::flixel::addons::input::FlxControlMappedInput FlxControlMappedInput_obj::VirtualPad( ::flixel::addons::input::FlxMappedInputType type)
{
	return ::hx::CreateEnum< FlxControlMappedInput_obj >(HX_("VirtualPad",28,88,78,57),3,1)->_hx_init(0,type);
}

bool FlxControlMappedInput_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Gamepad",81,08,d7,56)) { outValue = FlxControlMappedInput_obj::Gamepad_dyn(); return true; }
	if (inName==HX_("Keyboard",c7,78,db,41)) { outValue = FlxControlMappedInput_obj::Keyboard_dyn(); return true; }
	if (inName==HX_("Mouse",05,86,92,9f)) { outValue = FlxControlMappedInput_obj::Mouse_dyn(); return true; }
	if (inName==HX_("VirtualPad",28,88,78,57)) { outValue = FlxControlMappedInput_obj::VirtualPad_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxControlMappedInput_obj)

int FlxControlMappedInput_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Gamepad",81,08,d7,56)) return 1;
	if (inName==HX_("Keyboard",c7,78,db,41)) return 0;
	if (inName==HX_("Mouse",05,86,92,9f)) return 2;
	if (inName==HX_("VirtualPad",28,88,78,57)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxControlMappedInput_obj,Gamepad,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxControlMappedInput_obj,Keyboard,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxControlMappedInput_obj,Mouse,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxControlMappedInput_obj,VirtualPad,return)

int FlxControlMappedInput_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Gamepad",81,08,d7,56)) return 1;
	if (inName==HX_("Keyboard",c7,78,db,41)) return 1;
	if (inName==HX_("Mouse",05,86,92,9f)) return 1;
	if (inName==HX_("VirtualPad",28,88,78,57)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val FlxControlMappedInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Gamepad",81,08,d7,56)) return Gamepad_dyn();
	if (inName==HX_("Keyboard",c7,78,db,41)) return Keyboard_dyn();
	if (inName==HX_("Mouse",05,86,92,9f)) return Mouse_dyn();
	if (inName==HX_("VirtualPad",28,88,78,57)) return VirtualPad_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FlxControlMappedInput_obj_sStaticFields[] = {
	HX_("Keyboard",c7,78,db,41),
	HX_("Gamepad",81,08,d7,56),
	HX_("Mouse",05,86,92,9f),
	HX_("VirtualPad",28,88,78,57),
	::String(null())
};

::hx::Class FlxControlMappedInput_obj::__mClass;

Dynamic __Create_FlxControlMappedInput_obj() { return new FlxControlMappedInput_obj; }

void FlxControlMappedInput_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.input.FlxControlMappedInput",5f,fb,99,85), ::hx::TCanCast< FlxControlMappedInput_obj >,FlxControlMappedInput_obj_sStaticFields,0,
	&__Create_FlxControlMappedInput_obj, &__Create,
	&super::__SGetClass(), &CreateFlxControlMappedInput_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxControlMappedInput_obj::__GetStatic;
}

void FlxControlMappedInput_obj::__boot()
{
}


} // end namespace flixel
} // end namespace addons
} // end namespace input