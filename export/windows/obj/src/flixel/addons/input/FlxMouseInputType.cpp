// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_input_FlxMouseInputType
#include <flixel/addons/input/FlxMouseInputType.h>
#endif
namespace flixel{
namespace addons{
namespace input{

::flixel::addons::input::FlxMouseInputType FlxMouseInputType_obj::Button( ::Dynamic id)
{
	return ::hx::CreateEnum< FlxMouseInputType_obj >(HX_("Button",12,d6,74,0e),3,1)->_hx_init(0,id);
}

::flixel::addons::input::FlxMouseInputType FlxMouseInputType_obj::Drag( ::Dynamic id, ::Dynamic axis, ::Dynamic scale, ::Dynamic deadzone, ::Dynamic invert)
{
	return ::hx::CreateEnum< FlxMouseInputType_obj >(HX_("Drag",14,58,49,2d),2,5)->_hx_init(0,id)->_hx_init(1,axis)->_hx_init(2,scale)->_hx_init(3,deadzone)->_hx_init(4,invert);
}

::flixel::addons::input::FlxMouseInputType FlxMouseInputType_obj::Motion( ::Dynamic axis, ::Dynamic scale, ::Dynamic deadzone, ::Dynamic invert)
{
	return ::hx::CreateEnum< FlxMouseInputType_obj >(HX_("Motion",56,fa,f1,ff),1,4)->_hx_init(0,axis)->_hx_init(1,scale)->_hx_init(2,deadzone)->_hx_init(3,invert);
}

::flixel::addons::input::FlxMouseInputType FlxMouseInputType_obj::Position( ::Dynamic axis)
{
	return ::hx::CreateEnum< FlxMouseInputType_obj >(HX_("Position",c9,5c,ac,a4),0,1)->_hx_init(0,axis);
}

::flixel::addons::input::FlxMouseInputType FlxMouseInputType_obj::Wheel( ::Dynamic scale)
{
	return ::hx::CreateEnum< FlxMouseInputType_obj >(HX_("Wheel",7b,a4,e7,5c),4,1)->_hx_init(0,scale);
}

bool FlxMouseInputType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Button",12,d6,74,0e)) { outValue = FlxMouseInputType_obj::Button_dyn(); return true; }
	if (inName==HX_("Drag",14,58,49,2d)) { outValue = FlxMouseInputType_obj::Drag_dyn(); return true; }
	if (inName==HX_("Motion",56,fa,f1,ff)) { outValue = FlxMouseInputType_obj::Motion_dyn(); return true; }
	if (inName==HX_("Position",c9,5c,ac,a4)) { outValue = FlxMouseInputType_obj::Position_dyn(); return true; }
	if (inName==HX_("Wheel",7b,a4,e7,5c)) { outValue = FlxMouseInputType_obj::Wheel_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxMouseInputType_obj)

int FlxMouseInputType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Button",12,d6,74,0e)) return 3;
	if (inName==HX_("Drag",14,58,49,2d)) return 2;
	if (inName==HX_("Motion",56,fa,f1,ff)) return 1;
	if (inName==HX_("Position",c9,5c,ac,a4)) return 0;
	if (inName==HX_("Wheel",7b,a4,e7,5c)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseInputType_obj,Button,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxMouseInputType_obj,Drag,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMouseInputType_obj,Motion,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseInputType_obj,Position,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseInputType_obj,Wheel,return)

int FlxMouseInputType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Button",12,d6,74,0e)) return 1;
	if (inName==HX_("Drag",14,58,49,2d)) return 5;
	if (inName==HX_("Motion",56,fa,f1,ff)) return 4;
	if (inName==HX_("Position",c9,5c,ac,a4)) return 1;
	if (inName==HX_("Wheel",7b,a4,e7,5c)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val FlxMouseInputType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Button",12,d6,74,0e)) return Button_dyn();
	if (inName==HX_("Drag",14,58,49,2d)) return Drag_dyn();
	if (inName==HX_("Motion",56,fa,f1,ff)) return Motion_dyn();
	if (inName==HX_("Position",c9,5c,ac,a4)) return Position_dyn();
	if (inName==HX_("Wheel",7b,a4,e7,5c)) return Wheel_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FlxMouseInputType_obj_sStaticFields[] = {
	HX_("Position",c9,5c,ac,a4),
	HX_("Motion",56,fa,f1,ff),
	HX_("Drag",14,58,49,2d),
	HX_("Button",12,d6,74,0e),
	HX_("Wheel",7b,a4,e7,5c),
	::String(null())
};

::hx::Class FlxMouseInputType_obj::__mClass;

Dynamic __Create_FlxMouseInputType_obj() { return new FlxMouseInputType_obj; }

void FlxMouseInputType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.input.FlxMouseInputType",e4,ba,52,11), ::hx::TCanCast< FlxMouseInputType_obj >,FlxMouseInputType_obj_sStaticFields,0,
	&__Create_FlxMouseInputType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxMouseInputType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxMouseInputType_obj::__GetStatic;
}

void FlxMouseInputType_obj::__boot()
{
}


} // end namespace flixel
} // end namespace addons
} // end namespace input