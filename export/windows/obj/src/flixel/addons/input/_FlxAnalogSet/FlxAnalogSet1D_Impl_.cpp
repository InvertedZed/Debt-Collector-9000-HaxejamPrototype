// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_input_FlxAnalogSet
#include <flixel/addons/input/FlxAnalogSet.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxControlAnalog
#include <flixel/addons/input/FlxControlAnalog.h>
#endif
#ifndef INCLUDED_flixel_addons_input__FlxAnalogSet_FlxAnalogSet1D_Impl_
#include <flixel/addons/input/_FlxAnalogSet/FlxAnalogSet1D_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fb720bb3250629bb_24_get_value,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1D_Impl_","get_value",0x9aeb3109,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1D_Impl_.get_value","flixel/addons/input/FlxAnalogSet.hx",24,0x73cae450)
namespace flixel{
namespace addons{
namespace input{
namespace _FlxAnalogSet{

void FlxAnalogSet1D_Impl__obj::__construct() { }

Dynamic FlxAnalogSet1D_Impl__obj::__CreateEmpty() { return new FlxAnalogSet1D_Impl__obj; }

void *FlxAnalogSet1D_Impl__obj::_hx_vtable = 0;

Dynamic FlxAnalogSet1D_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAnalogSet1D_Impl__obj > _hx_result = new FlxAnalogSet1D_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAnalogSet1D_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e02aaf7;
}

Float FlxAnalogSet1D_Impl__obj::get_value( ::flixel::addons::input::FlxAnalogSet this1){
            	HX_STACKFRAME(&_hx_pos_fb720bb3250629bb_24_get_value)
HXDLIN(  24)		return this1->control->get_x();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogSet1D_Impl__obj,get_value,return )


FlxAnalogSet1D_Impl__obj::FlxAnalogSet1D_Impl__obj()
{
}

bool FlxAnalogSet1D_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAnalogSet1D_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAnalogSet1D_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxAnalogSet1D_Impl__obj::__mClass;

static ::String FlxAnalogSet1D_Impl__obj_sStaticFields[] = {
	HX_("get_value",c8,db,61,75),
	::String(null())
};

void FlxAnalogSet1D_Impl__obj::__register()
{
	FlxAnalogSet1D_Impl__obj _hx_dummy;
	FlxAnalogSet1D_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.input._FlxAnalogSet.FlxAnalogSet1D_Impl_",6f,ca,96,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAnalogSet1D_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAnalogSet1D_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAnalogSet1D_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnalogSet1D_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnalogSet1D_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxAnalogSet