// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_input_FlxAnalogDirections2D
#include <flixel/addons/input/FlxAnalogDirections2D.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxAnalogSet
#include <flixel/addons/input/FlxAnalogSet.h>
#endif
#ifndef INCLUDED_flixel_addons_input__FlxAnalogSet_FlxAnalogSet1DBase_Impl_
#include <flixel/addons/input/_FlxAnalogSet/FlxAnalogSet1DBase_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6737a31e8c377c0d_37_get_pressed,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_","get_pressed",0x5266e22b,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_.get_pressed","flixel/addons/input/FlxAnalogSet.hx",37,0x73cae450)
HX_LOCAL_STACK_FRAME(_hx_pos_6737a31e8c377c0d_44_get_justPressed,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_","get_justPressed",0x2fc015df,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_.get_justPressed","flixel/addons/input/FlxAnalogSet.hx",44,0x73cae450)
HX_LOCAL_STACK_FRAME(_hx_pos_6737a31e8c377c0d_51_get_released,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_","get_released",0xce751114,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_.get_released","flixel/addons/input/FlxAnalogSet.hx",51,0x73cae450)
HX_LOCAL_STACK_FRAME(_hx_pos_6737a31e8c377c0d_58_get_justReleased,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_","get_justReleased",0x9f291ae0,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_.get_justReleased","flixel/addons/input/FlxAnalogSet.hx",58,0x73cae450)
HX_LOCAL_STACK_FRAME(_hx_pos_6737a31e8c377c0d_65_get_holdRepeat,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_","get_holdRepeat",0xabea5a11,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_.get_holdRepeat","flixel/addons/input/FlxAnalogSet.hx",65,0x73cae450)
namespace flixel{
namespace addons{
namespace input{
namespace _FlxAnalogSet{

void FlxAnalogSet1DBase_Impl__obj::__construct() { }

Dynamic FlxAnalogSet1DBase_Impl__obj::__CreateEmpty() { return new FlxAnalogSet1DBase_Impl__obj; }

void *FlxAnalogSet1DBase_Impl__obj::_hx_vtable = 0;

Dynamic FlxAnalogSet1DBase_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAnalogSet1DBase_Impl__obj > _hx_result = new FlxAnalogSet1DBase_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAnalogSet1DBase_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7cbdfac8;
}

 ::flixel::addons::input::FlxAnalogDirections2D FlxAnalogSet1DBase_Impl__obj::get_pressed( ::flixel::addons::input::FlxAnalogSet this1){
            	HX_STACKFRAME(&_hx_pos_6737a31e8c377c0d_37_get_pressed)
HXDLIN(  37)		return this1->pressed;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogSet1DBase_Impl__obj,get_pressed,return )

 ::flixel::addons::input::FlxAnalogDirections2D FlxAnalogSet1DBase_Impl__obj::get_justPressed( ::flixel::addons::input::FlxAnalogSet this1){
            	HX_STACKFRAME(&_hx_pos_6737a31e8c377c0d_44_get_justPressed)
HXDLIN(  44)		return this1->justPressed;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogSet1DBase_Impl__obj,get_justPressed,return )

 ::flixel::addons::input::FlxAnalogDirections2D FlxAnalogSet1DBase_Impl__obj::get_released( ::flixel::addons::input::FlxAnalogSet this1){
            	HX_STACKFRAME(&_hx_pos_6737a31e8c377c0d_51_get_released)
HXDLIN(  51)		return this1->released;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogSet1DBase_Impl__obj,get_released,return )

 ::flixel::addons::input::FlxAnalogDirections2D FlxAnalogSet1DBase_Impl__obj::get_justReleased( ::flixel::addons::input::FlxAnalogSet this1){
            	HX_STACKFRAME(&_hx_pos_6737a31e8c377c0d_58_get_justReleased)
HXDLIN(  58)		return this1->justReleased;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogSet1DBase_Impl__obj,get_justReleased,return )

 ::flixel::addons::input::FlxAnalogDirections2D FlxAnalogSet1DBase_Impl__obj::get_holdRepeat( ::flixel::addons::input::FlxAnalogSet this1){
            	HX_STACKFRAME(&_hx_pos_6737a31e8c377c0d_65_get_holdRepeat)
HXDLIN(  65)		return this1->holdRepeat;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogSet1DBase_Impl__obj,get_holdRepeat,return )


FlxAnalogSet1DBase_Impl__obj::FlxAnalogSet1DBase_Impl__obj()
{
}

bool FlxAnalogSet1DBase_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"get_pressed") ) { outValue = get_pressed_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_released") ) { outValue = get_released_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_holdRepeat") ) { outValue = get_holdRepeat_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { outValue = get_justPressed_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { outValue = get_justReleased_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAnalogSet1DBase_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAnalogSet1DBase_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxAnalogSet1DBase_Impl__obj::__mClass;

static ::String FlxAnalogSet1DBase_Impl__obj_sStaticFields[] = {
	HX_("get_pressed",b9,32,e1,bf),
	HX_("get_justPressed",6d,c5,88,b3),
	HX_("get_released",c6,3c,01,2c),
	HX_("get_justReleased",92,07,fa,6a),
	HX_("get_holdRepeat",43,56,9e,a5),
	::String(null())
};

void FlxAnalogSet1DBase_Impl__obj::__register()
{
	FlxAnalogSet1DBase_Impl__obj _hx_dummy;
	FlxAnalogSet1DBase_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.input._FlxAnalogSet.FlxAnalogSet1DBase_Impl_",e0,2c,20,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAnalogSet1DBase_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAnalogSet1DBase_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAnalogSet1DBase_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnalogSet1DBase_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnalogSet1DBase_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxAnalogSet