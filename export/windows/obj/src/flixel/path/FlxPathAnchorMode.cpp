// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPathAnchorMode
#include <flixel/path/FlxPathAnchorMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace path{

::flixel::path::FlxPathAnchorMode FlxPathAnchorMode_obj::CENTER;

::flixel::path::FlxPathAnchorMode FlxPathAnchorMode_obj::CUSTOM( ::flixel::math::FlxBasePoint offset)
{
	return ::hx::CreateEnum< FlxPathAnchorMode_obj >(HX_("CUSTOM",b1,33,15,f2),3,1)->_hx_init(0,offset);
}

::flixel::path::FlxPathAnchorMode FlxPathAnchorMode_obj::ORIGIN;

::flixel::path::FlxPathAnchorMode FlxPathAnchorMode_obj::TOP_LEFT;

bool FlxPathAnchorMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) { outValue = FlxPathAnchorMode_obj::CENTER; return true; }
	if (inName==HX_("CUSTOM",b1,33,15,f2)) { outValue = FlxPathAnchorMode_obj::CUSTOM_dyn(); return true; }
	if (inName==HX_("ORIGIN",e6,c5,83,fd)) { outValue = FlxPathAnchorMode_obj::ORIGIN; return true; }
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) { outValue = FlxPathAnchorMode_obj::TOP_LEFT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxPathAnchorMode_obj)

int FlxPathAnchorMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 1;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 3;
	if (inName==HX_("ORIGIN",e6,c5,83,fd)) return 2;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPathAnchorMode_obj,CUSTOM,return)

int FlxPathAnchorMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 1;
	if (inName==HX_("ORIGIN",e6,c5,83,fd)) return 0;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxPathAnchorMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return CENTER;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return CUSTOM_dyn();
	if (inName==HX_("ORIGIN",e6,c5,83,fd)) return ORIGIN;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return TOP_LEFT;
	return super::__Field(inName,inCallProp);
}

static ::String FlxPathAnchorMode_obj_sStaticFields[] = {
	HX_("TOP_LEFT",51,e1,bb,7b),
	HX_("CENTER",d5,d1,5d,b8),
	HX_("ORIGIN",e6,c5,83,fd),
	HX_("CUSTOM",b1,33,15,f2),
	::String(null())
};

::hx::Class FlxPathAnchorMode_obj::__mClass;

Dynamic __Create_FlxPathAnchorMode_obj() { return new FlxPathAnchorMode_obj; }

void FlxPathAnchorMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.path.FlxPathAnchorMode",38,59,f0,4e), ::hx::TCanCast< FlxPathAnchorMode_obj >,FlxPathAnchorMode_obj_sStaticFields,0,
	&__Create_FlxPathAnchorMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxPathAnchorMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxPathAnchorMode_obj::__GetStatic;
}

void FlxPathAnchorMode_obj::__boot()
{
CENTER = ::hx::CreateConstEnum< FlxPathAnchorMode_obj >(HX_("CENTER",d5,d1,5d,b8),1);
ORIGIN = ::hx::CreateConstEnum< FlxPathAnchorMode_obj >(HX_("ORIGIN",e6,c5,83,fd),2);
TOP_LEFT = ::hx::CreateConstEnum< FlxPathAnchorMode_obj >(HX_("TOP_LEFT",51,e1,bb,7b),0);
}


} // end namespace flixel
} // end namespace path