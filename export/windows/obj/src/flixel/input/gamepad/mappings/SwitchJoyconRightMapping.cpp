// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadMappedInput
#include <flixel/input/gamepad/FlxGamepadMappedInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxTypedGamepadAnalogStick
#include <flixel/input/gamepad/FlxTypedGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id__SwitchJoyconRightID_SwitchJoyconRightID_Impl_
#include <flixel/input/gamepad/id/_SwitchJoyconRightID/SwitchJoyconRightID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping
#include <flixel/input/gamepad/mappings/FlxTypedGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_SwitchJoyconRightMapping
#include <flixel/input/gamepad/mappings/SwitchJoyconRightMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41147a5694d65537_10_new,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","new",0xb7cf0aec,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.new","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",10,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_24_initValues,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","initValues",0x0752ce06,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.initValues","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",24,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_33_getID,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","getID",0x8a08877d,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.getID","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",33,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_56_getRawID,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","getRawID",0x3b867941,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.getRawID","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",56,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_83_getInputLabel,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","getInputLabel",0x2786934c,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.getInputLabel","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",83,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_101_getMappedInput,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","getMappedInput",0xef176355,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.getMappedInput","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",101,0xb5e5a3e6)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void SwitchJoyconRightMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_10_new)
HXDLIN(  10)		super::__construct(attachment);
            	}

Dynamic SwitchJoyconRightMapping_obj::__CreateEmpty() { return new SwitchJoyconRightMapping_obj; }

void *SwitchJoyconRightMapping_obj::_hx_vtable = 0;

Dynamic SwitchJoyconRightMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchJoyconRightMapping_obj > _hx_result = new SwitchJoyconRightMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SwitchJoyconRightMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x31a9a2ec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x31a9a2ec;
	} else {
		return inClassId==(int)0x425bf69d;
	}
}

void SwitchJoyconRightMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_24_initValues)
HXLINE(  25)		this->leftStick = ::flixel::input::gamepad::id::_SwitchJoyconRightID::SwitchJoyconRightID_Impl__obj::LEFT_ANALOG_STICK;
HXLINE(  26)		this->supportsMotion = true;
HXLINE(  27)		this->supportsPointer = false;
HXLINE(  28)		this->bottomIsAccept = false;
            	}


int SwitchJoyconRightMapping_obj::getID( ::Dynamic _tmp_rawID){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_33_getID)
HXDLIN(  33)		int rawID = ( (int)(_tmp_rawID) );
HXDLIN(  33)		switch((int)(rawID)){
            			case (int)5: {
HXLINE(  44)				return 18;
            			}
            			break;
            			case (int)6: {
HXLINE(  35)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  37)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  36)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  38)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  45)				return 30;
            			}
            			break;
            			case (int)11: {
HXLINE(  39)				return 10;
            			}
            			break;
            			case (int)12: {
HXLINE(  40)				return 7;
            			}
            			break;
            			case (int)13: {
HXLINE(  41)				return 8;
            			}
            			break;
            			case (int)15: {
HXLINE(  42)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  43)				return 5;
            			}
            			break;
            			default:{
HXLINE(  46)				int id = rawID;
HXDLIN(  46)				if (::hx::IsEq( id,this->leftStick->rawUp )) {
HXLINE(  46)					return 34;
            				}
            				else {
HXLINE(  47)					int id1 = rawID;
HXDLIN(  47)					if (::hx::IsEq( id1,this->leftStick->rawDown )) {
HXLINE(  47)						return 36;
            					}
            					else {
HXLINE(  48)						int id2 = rawID;
HXDLIN(  48)						if (::hx::IsEq( id2,this->leftStick->rawLeft )) {
HXLINE(  48)							return 37;
            						}
            						else {
HXLINE(  49)							int id3 = rawID;
HXDLIN(  49)							if (::hx::IsEq( id3,this->leftStick->rawRight )) {
HXLINE(  49)								return 35;
            							}
            							else {
HXLINE(  50)								return -1;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  33)		return null();
            	}


 ::Dynamic SwitchJoyconRightMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_56_getRawID)
HXDLIN(  56)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  58)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  59)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  60)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  61)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  65)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  66)				return 16;
            			}
            			break;
            			case (int)7: {
HXLINE(  63)				return 12;
            			}
            			break;
            			case (int)8: {
HXLINE(  64)				return 13;
            			}
            			break;
            			case (int)10: {
HXLINE(  62)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  68)				return 5;
            			}
            			break;
            			case (int)30: {
HXLINE(  67)				return 10;
            			}
            			break;
            			case (int)34: {
HXLINE(  69)				return ::flixel::input::gamepad::id::_SwitchJoyconRightID::SwitchJoyconRightID_Impl__obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  72)				return ::flixel::input::gamepad::id::_SwitchJoyconRightID::SwitchJoyconRightID_Impl__obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  70)				return ::flixel::input::gamepad::id::_SwitchJoyconRightID::SwitchJoyconRightID_Impl__obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  71)				return ::flixel::input::gamepad::id::_SwitchJoyconRightID::SwitchJoyconRightID_Impl__obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  77)				return this->super::getRawID(ID);
            			}
            		}
HXLINE(  56)		return null();
            	}


::String SwitchJoyconRightMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_83_getInputLabel)
HXDLIN(  83)		switch((int)(id)){
            			case (int)0: {
HXLINE(  85)				return HX_("a",61,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  86)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE(  87)				return HX_("b",62,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE(  88)				return HX_("y",79,00,00,00);
            			}
            			break;
            			case (int)4: {
HXLINE(  91)				return HX_("sl",99,64,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(  92)				return HX_("sr",9f,64,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE(  90)				return HX_("plus",5a,3f,5a,4a);
            			}
            			break;
            			case (int)10: {
HXLINE(  89)				return HX_("home",1f,ca,12,45);
            			}
            			break;
            			case (int)18: {
HXLINE(  93)				return HX_("zr",b8,6a,00,00);
            			}
            			break;
            			case (int)30: {
HXLINE(  94)				return HX_("r",72,00,00,00);
            			}
            			break;
            			default:{
HXLINE(  95)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE(  83)		return null();
            	}


 ::flixel::input::gamepad::FlxGamepadMappedInput SwitchJoyconRightMapping_obj::getMappedInput(int id){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_101_getMappedInput)
HXDLIN( 101)		return ::flixel::input::gamepad::FlxGamepadMappedInput_obj::SWITCH_JOYCON_RIGHT(this->getRawID(id));
            	}



::hx::ObjectPtr< SwitchJoyconRightMapping_obj > SwitchJoyconRightMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< SwitchJoyconRightMapping_obj > __this = new SwitchJoyconRightMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< SwitchJoyconRightMapping_obj > SwitchJoyconRightMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	SwitchJoyconRightMapping_obj *__this = (SwitchJoyconRightMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchJoyconRightMapping_obj), true, "flixel.input.gamepad.mappings.SwitchJoyconRightMapping"));
	*(void **)__this = SwitchJoyconRightMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

SwitchJoyconRightMapping_obj::SwitchJoyconRightMapping_obj()
{
}

::hx::Val SwitchJoyconRightMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMappedInput") ) { return ::hx::Val( getMappedInput_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SwitchJoyconRightMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SwitchJoyconRightMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchJoyconRightMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	HX_("getMappedInput",61,6a,2c,47),
	::String(null()) };

::hx::Class SwitchJoyconRightMapping_obj::__mClass;

void SwitchJoyconRightMapping_obj::__register()
{
	SwitchJoyconRightMapping_obj _hx_dummy;
	SwitchJoyconRightMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.SwitchJoyconRightMapping",fa,64,e4,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SwitchJoyconRightMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SwitchJoyconRightMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchJoyconRightMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchJoyconRightMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
