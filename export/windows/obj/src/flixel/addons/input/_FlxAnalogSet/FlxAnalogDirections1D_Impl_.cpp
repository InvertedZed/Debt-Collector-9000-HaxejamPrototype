// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxAnalogDirections2D
#include <flixel/addons/input/FlxAnalogDirections2D.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxAnalogSet
#include <flixel/addons/input/FlxAnalogSet.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxRepeatInput
#include <flixel/addons/input/FlxRepeatInput.h>
#endif
#ifndef INCLUDED_flixel_addons_input__FlxAnalogSet_FlxAnalogDirections1D_Impl_
#include <flixel/addons/input/_FlxAnalogSet/FlxAnalogDirections1D_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6205806724955ad6_203_get_up,"flixel.addons.input._FlxAnalogSet.FlxAnalogDirections1D_Impl_","get_up",0x2ada4c85,"flixel.addons.input._FlxAnalogSet.FlxAnalogDirections1D_Impl_.get_up","flixel/addons/input/FlxAnalogSet.hx",203,0x73cae450)
HX_LOCAL_STACK_FRAME(_hx_pos_6205806724955ad6_207_get_down,"flixel.addons.input._FlxAnalogSet.FlxAnalogDirections1D_Impl_","get_down",0x442d3d0c,"flixel.addons.input._FlxAnalogSet.FlxAnalogDirections1D_Impl_.get_down","flixel/addons/input/FlxAnalogSet.hx",207,0x73cae450)
HX_LOCAL_STACK_FRAME(_hx_pos_6205806724955ad6_211_toString,"flixel.addons.input._FlxAnalogSet.FlxAnalogDirections1D_Impl_","toString",0xba7359cd,"flixel.addons.input._FlxAnalogSet.FlxAnalogDirections1D_Impl_.toString","flixel/addons/input/FlxAnalogSet.hx",211,0x73cae450)
namespace flixel{
namespace addons{
namespace input{
namespace _FlxAnalogSet{

void FlxAnalogDirections1D_Impl__obj::__construct() { }

Dynamic FlxAnalogDirections1D_Impl__obj::__CreateEmpty() { return new FlxAnalogDirections1D_Impl__obj; }

void *FlxAnalogDirections1D_Impl__obj::_hx_vtable = 0;

Dynamic FlxAnalogDirections1D_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAnalogDirections1D_Impl__obj > _hx_result = new FlxAnalogDirections1D_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAnalogDirections1D_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d063fe5;
}

bool FlxAnalogDirections1D_Impl__obj::get_up( ::flixel::addons::input::FlxAnalogDirections2D this1){
            	HX_STACKFRAME(&_hx_pos_6205806724955ad6_203_get_up)
HXDLIN( 203)		return ( (bool)(this1->func(this1->set->rightInput)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogDirections1D_Impl__obj,get_up,return )

bool FlxAnalogDirections1D_Impl__obj::get_down( ::flixel::addons::input::FlxAnalogDirections2D this1){
            	HX_STACKFRAME(&_hx_pos_6205806724955ad6_207_get_down)
HXDLIN( 207)		return ( (bool)(this1->func(this1->set->leftInput)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogDirections1D_Impl__obj,get_down,return )

::String FlxAnalogDirections1D_Impl__obj::toString( ::flixel::addons::input::FlxAnalogDirections2D this1){
            	HX_STACKFRAME(&_hx_pos_6205806724955ad6_211_toString)
HXDLIN( 211)		::String _hx_tmp = ((HX_("( u: ",63,02,87,1d) + ::Std_obj::string(::flixel::addons::input::_FlxAnalogSet::FlxAnalogDirections1D_Impl__obj::get_up(this1))) + HX_(" | d: ",46,62,8e,46));
HXDLIN( 211)		return ((_hx_tmp + ::Std_obj::string(::flixel::addons::input::_FlxAnalogSet::FlxAnalogDirections1D_Impl__obj::get_down(this1))) + HX_(" )",09,1c,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAnalogDirections1D_Impl__obj,toString,return )


FlxAnalogDirections1D_Impl__obj::FlxAnalogDirections1D_Impl__obj()
{
}

bool FlxAnalogDirections1D_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"get_up") ) { outValue = get_up_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_down") ) { outValue = get_down_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAnalogDirections1D_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAnalogDirections1D_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxAnalogDirections1D_Impl__obj::__mClass;

static ::String FlxAnalogDirections1D_Impl__obj_sStaticFields[] = {
	HX_("get_up",a4,fd,2f,a3),
	HX_("get_down",eb,b3,28,c2),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void FlxAnalogDirections1D_Impl__obj::__register()
{
	FlxAnalogDirections1D_Impl__obj _hx_dummy;
	FlxAnalogDirections1D_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.input._FlxAnalogSet.FlxAnalogDirections1D_Impl_",6d,7f,69,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAnalogDirections1D_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAnalogDirections1D_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAnalogDirections1D_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnalogDirections1D_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnalogDirections1D_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxAnalogSet