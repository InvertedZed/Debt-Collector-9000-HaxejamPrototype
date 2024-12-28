// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_input__FlxControls_VirtualPadInputProxy
#include <flixel/addons/input/_FlxControls/VirtualPadInputProxy.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8aef27b5c71d6e99_811_new,"flixel.addons.input._FlxControls.VirtualPadInputProxy","new",0xbc077cd6,"flixel.addons.input._FlxControls.VirtualPadInputProxy.new","flixel/addons/input/FlxControls.hx",811,0x03116ce4)
HX_LOCAL_STACK_FRAME(_hx_pos_8aef27b5c71d6e99_818_get_justReleased,"flixel.addons.input._FlxControls.VirtualPadInputProxy","get_justReleased",0x4b4f495c,"flixel.addons.input._FlxControls.VirtualPadInputProxy.get_justReleased","flixel/addons/input/FlxControls.hx",818,0x03116ce4)
HX_LOCAL_STACK_FRAME(_hx_pos_8aef27b5c71d6e99_819_get_released,"flixel.addons.input._FlxControls.VirtualPadInputProxy","get_released",0x8ccb5190,"flixel.addons.input._FlxControls.VirtualPadInputProxy.get_released","flixel/addons/input/FlxControls.hx",819,0x03116ce4)
HX_LOCAL_STACK_FRAME(_hx_pos_8aef27b5c71d6e99_820_get_pressed,"flixel.addons.input._FlxControls.VirtualPadInputProxy","get_pressed",0x5467452f,"flixel.addons.input._FlxControls.VirtualPadInputProxy.get_pressed","flixel/addons/input/FlxControls.hx",820,0x03116ce4)
HX_LOCAL_STACK_FRAME(_hx_pos_8aef27b5c71d6e99_821_get_justPressed,"flixel.addons.input._FlxControls.VirtualPadInputProxy","get_justPressed",0x2ac84ae3,"flixel.addons.input._FlxControls.VirtualPadInputProxy.get_justPressed","flixel/addons/input/FlxControls.hx",821,0x03116ce4)
namespace flixel{
namespace addons{
namespace input{
namespace _FlxControls{

void VirtualPadInputProxy_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8aef27b5c71d6e99_811_new)
HXDLIN( 811)		this->target = null();
            	}

Dynamic VirtualPadInputProxy_obj::__CreateEmpty() { return new VirtualPadInputProxy_obj; }

void *VirtualPadInputProxy_obj::_hx_vtable = 0;

Dynamic VirtualPadInputProxy_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VirtualPadInputProxy_obj > _hx_result = new VirtualPadInputProxy_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VirtualPadInputProxy_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7bfe3f50;
}

static ::flixel::input::IFlxInput_obj _hx_flixel_addons_input__FlxControls_VirtualPadInputProxy__hx_flixel_input_IFlxInput= {
	( bool (::hx::Object::*)())&::flixel::addons::input::_FlxControls::VirtualPadInputProxy_obj::get_justReleased,
	( bool (::hx::Object::*)())&::flixel::addons::input::_FlxControls::VirtualPadInputProxy_obj::get_released,
	( bool (::hx::Object::*)())&::flixel::addons::input::_FlxControls::VirtualPadInputProxy_obj::get_pressed,
	( bool (::hx::Object::*)())&::flixel::addons::input::_FlxControls::VirtualPadInputProxy_obj::get_justPressed,
};

void *VirtualPadInputProxy_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x52baf533: return &_hx_flixel_addons_input__FlxControls_VirtualPadInputProxy__hx_flixel_input_IFlxInput;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool VirtualPadInputProxy_obj::get_justReleased(){
            	HX_STACKFRAME(&_hx_pos_8aef27b5c71d6e99_818_get_justReleased)
HXDLIN( 818)		if (::hx::IsNotNull( this->target )) {
HXDLIN( 818)			return (this->target->input->current == -1);
            		}
            		else {
HXDLIN( 818)			return false;
            		}
HXDLIN( 818)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualPadInputProxy_obj,get_justReleased,return )

bool VirtualPadInputProxy_obj::get_released(){
            	HX_STACKFRAME(&_hx_pos_8aef27b5c71d6e99_819_get_released)
HXDLIN( 819)		if (::hx::IsNotNull( this->target )) {
HXDLIN( 819)			 ::flixel::input::FlxInput _this = this->target->input;
HXDLIN( 819)			if ((_this->current != 0)) {
HXDLIN( 819)				return (_this->current == -1);
            			}
            			else {
HXDLIN( 819)				return true;
            			}
            		}
            		else {
HXDLIN( 819)			return false;
            		}
HXDLIN( 819)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualPadInputProxy_obj,get_released,return )

bool VirtualPadInputProxy_obj::get_pressed(){
            	HX_STACKFRAME(&_hx_pos_8aef27b5c71d6e99_820_get_pressed)
HXDLIN( 820)		if (::hx::IsNotNull( this->target )) {
HXDLIN( 820)			 ::flixel::input::FlxInput _this = this->target->input;
HXDLIN( 820)			if ((_this->current != 1)) {
HXDLIN( 820)				return (_this->current == 2);
            			}
            			else {
HXDLIN( 820)				return true;
            			}
            		}
            		else {
HXDLIN( 820)			return false;
            		}
HXDLIN( 820)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualPadInputProxy_obj,get_pressed,return )

bool VirtualPadInputProxy_obj::get_justPressed(){
            	HX_STACKFRAME(&_hx_pos_8aef27b5c71d6e99_821_get_justPressed)
HXDLIN( 821)		if (::hx::IsNotNull( this->target )) {
HXDLIN( 821)			return (this->target->input->current == 2);
            		}
            		else {
HXDLIN( 821)			return false;
            		}
HXDLIN( 821)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualPadInputProxy_obj,get_justPressed,return )


::hx::ObjectPtr< VirtualPadInputProxy_obj > VirtualPadInputProxy_obj::__new() {
	::hx::ObjectPtr< VirtualPadInputProxy_obj > __this = new VirtualPadInputProxy_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VirtualPadInputProxy_obj > VirtualPadInputProxy_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VirtualPadInputProxy_obj *__this = (VirtualPadInputProxy_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VirtualPadInputProxy_obj), true, "flixel.addons.input._FlxControls.VirtualPadInputProxy"));
	*(void **)__this = VirtualPadInputProxy_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VirtualPadInputProxy_obj::VirtualPadInputProxy_obj()
{
}

void VirtualPadInputProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VirtualPadInputProxy);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void VirtualPadInputProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
}

::hx::Val VirtualPadInputProxy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pressed() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_released() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justPressed() ); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return ::hx::Val( get_pressed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justReleased() ); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return ::hx::Val( get_released_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return ::hx::Val( get_justPressed_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return ::hx::Val( get_justReleased_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VirtualPadInputProxy_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VirtualPadInputProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("justReleased",09,1b,5b,66));
	outFields->push(HX_("released",bd,88,e7,76));
	outFields->push(HX_("pressed",a2,d2,e6,39));
	outFields->push(HX_("justPressed",d6,0d,a7,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VirtualPadInputProxy_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(VirtualPadInputProxy_obj,target),HX_("target",51,f3,ec,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VirtualPadInputProxy_obj_sStaticStorageInfo = 0;
#endif

static ::String VirtualPadInputProxy_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("get_justReleased",92,07,fa,6a),
	HX_("get_released",c6,3c,01,2c),
	HX_("get_pressed",b9,32,e1,bf),
	HX_("get_justPressed",6d,c5,88,b3),
	::String(null()) };

::hx::Class VirtualPadInputProxy_obj::__mClass;

void VirtualPadInputProxy_obj::__register()
{
	VirtualPadInputProxy_obj _hx_dummy;
	VirtualPadInputProxy_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.input._FlxControls.VirtualPadInputProxy",e4,19,ef,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VirtualPadInputProxy_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VirtualPadInputProxy_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VirtualPadInputProxy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VirtualPadInputProxy_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxControls