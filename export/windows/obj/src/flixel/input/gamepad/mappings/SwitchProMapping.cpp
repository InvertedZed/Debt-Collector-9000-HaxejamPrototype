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
#ifndef INCLUDED_flixel_input_gamepad_id__SwitchProID_SwitchProID_Impl_
#include <flixel/input/gamepad/id/_SwitchProID/SwitchProID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping
#include <flixel/input/gamepad/mappings/FlxTypedGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_SwitchProMapping
#include <flixel/input/gamepad/mappings/SwitchProMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_233c14da769792de_10_new,"flixel.input.gamepad.mappings.SwitchProMapping","new",0x820f2f6d,"flixel.input.gamepad.mappings.SwitchProMapping.new","flixel/input/gamepad/mappings/SwitchProMapping.hx",10,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_24_initValues,"flixel.input.gamepad.mappings.SwitchProMapping","initValues",0xef8aaba5,"flixel.input.gamepad.mappings.SwitchProMapping.initValues","flixel/input/gamepad/mappings/SwitchProMapping.hx",24,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_34_getID,"flixel.input.gamepad.mappings.SwitchProMapping","getID",0x7ffb8e3e,"flixel.input.gamepad.mappings.SwitchProMapping.getID","flixel/input/gamepad/mappings/SwitchProMapping.hx",34,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_68_getRawID,"flixel.input.gamepad.mappings.SwitchProMapping","getRawID",0xb64d6120,"flixel.input.gamepad.mappings.SwitchProMapping.getRawID","flixel/input/gamepad/mappings/SwitchProMapping.hx",68,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_106_getInputLabel,"flixel.input.gamepad.mappings.SwitchProMapping","getInputLabel",0x78efc30d,"flixel.input.gamepad.mappings.SwitchProMapping.getInputLabel","flixel/input/gamepad/mappings/SwitchProMapping.hx",106,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_126_getMappedInput,"flixel.input.gamepad.mappings.SwitchProMapping","getMappedInput",0xd9b7fc74,"flixel.input.gamepad.mappings.SwitchProMapping.getMappedInput","flixel/input/gamepad/mappings/SwitchProMapping.hx",126,0x43c59885)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void SwitchProMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_10_new)
HXDLIN(  10)		super::__construct(attachment);
            	}

Dynamic SwitchProMapping_obj::__CreateEmpty() { return new SwitchProMapping_obj; }

void *SwitchProMapping_obj::_hx_vtable = 0;

Dynamic SwitchProMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchProMapping_obj > _hx_result = new SwitchProMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SwitchProMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x425bf69d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x425bf69d;
	} else {
		return inClassId==(int)0x6252f0ed;
	}
}

void SwitchProMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_24_initValues)
HXLINE(  25)		this->leftStick = ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::LEFT_ANALOG_STICK;
HXLINE(  26)		this->rightStick = ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::RIGHT_ANALOG_STICK;
HXLINE(  27)		this->supportsMotion = true;
HXLINE(  28)		this->supportsPointer = false;
HXLINE(  29)		this->bottomIsAccept = false;
            	}


int SwitchProMapping_obj::getID( ::Dynamic _tmp_rawID){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_34_getID)
HXDLIN(  34)		int rawID = ( (int)(_tmp_rawID) );
HXDLIN(  34)		switch((int)(rawID)){
            			case (int)4: {
HXLINE(  48)				return 17;
            			}
            			break;
            			case (int)5: {
HXLINE(  49)				return 18;
            			}
            			break;
            			case (int)6: {
HXLINE(  37)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  36)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  39)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  38)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  40)				return 6;
            			}
            			break;
            			case (int)11: {
HXLINE(  42)				return 10;
            			}
            			break;
            			case (int)12: {
HXLINE(  43)				return 7;
            			}
            			break;
            			case (int)13: {
HXLINE(  44)				return 8;
            			}
            			break;
            			case (int)14: {
HXLINE(  45)				return 9;
            			}
            			break;
            			case (int)15: {
HXLINE(  46)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  47)				return 5;
            			}
            			break;
            			case (int)17: {
HXLINE(  51)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  50)				return 12;
            			}
            			break;
            			case (int)19: {
HXLINE(  52)				return 13;
            			}
            			break;
            			case (int)20: {
HXLINE(  53)				return 14;
            			}
            			break;
            			case (int)21: {
HXLINE(  41)				return 30;
            			}
            			break;
            			default:{
HXLINE(  54)				int id = rawID;
HXDLIN(  54)				if (::hx::IsEq( id,this->leftStick->rawUp )) {
HXLINE(  54)					return 34;
            				}
            				else {
HXLINE(  55)					int id1 = rawID;
HXDLIN(  55)					if (::hx::IsEq( id1,this->leftStick->rawDown )) {
HXLINE(  55)						return 36;
            					}
            					else {
HXLINE(  56)						int id2 = rawID;
HXDLIN(  56)						if (::hx::IsEq( id2,this->leftStick->rawLeft )) {
HXLINE(  56)							return 37;
            						}
            						else {
HXLINE(  57)							int id3 = rawID;
HXDLIN(  57)							if (::hx::IsEq( id3,this->leftStick->rawRight )) {
HXLINE(  57)								return 35;
            							}
            							else {
HXLINE(  58)								int id4 = rawID;
HXDLIN(  58)								if (::hx::IsEq( id4,this->rightStick->rawUp )) {
HXLINE(  58)									return 38;
            								}
            								else {
HXLINE(  59)									int id5 = rawID;
HXDLIN(  59)									if (::hx::IsEq( id5,this->rightStick->rawDown )) {
HXLINE(  59)										return 40;
            									}
            									else {
HXLINE(  60)										int id6 = rawID;
HXDLIN(  60)										if (::hx::IsEq( id6,this->rightStick->rawLeft )) {
HXLINE(  60)											return 41;
            										}
            										else {
HXLINE(  61)											int id7 = rawID;
HXDLIN(  61)											if (::hx::IsEq( id7,this->rightStick->rawRight )) {
HXLINE(  61)												return 39;
            											}
            											else {
HXLINE(  62)												return -1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  34)		return null();
            	}


 ::Dynamic SwitchProMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_68_getRawID)
HXDLIN(  68)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  70)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  71)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  72)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  73)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  80)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  81)				return 16;
            			}
            			break;
            			case (int)6: {
HXLINE(  74)				return 10;
            			}
            			break;
            			case (int)7: {
HXLINE(  77)				return 12;
            			}
            			break;
            			case (int)8: {
HXLINE(  78)				return 13;
            			}
            			break;
            			case (int)9: {
HXLINE(  79)				return 14;
            			}
            			break;
            			case (int)10: {
HXLINE(  76)				return 11;
            			}
            			break;
            			case (int)11: {
HXLINE(  84)				return 17;
            			}
            			break;
            			case (int)12: {
HXLINE(  85)				return 18;
            			}
            			break;
            			case (int)13: {
HXLINE(  86)				return 19;
            			}
            			break;
            			case (int)14: {
HXLINE(  87)				return 20;
            			}
            			break;
            			case (int)17: {
HXLINE(  82)				return 4;
            			}
            			break;
            			case (int)18: {
HXLINE(  83)				return 5;
            			}
            			break;
            			case (int)30: {
HXLINE(  75)				return 21;
            			}
            			break;
            			case (int)34: {
HXLINE(  88)				return ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  91)				return ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  89)				return ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  90)				return ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  92)				return ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  95)				return ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  93)				return ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  94)				return ::flixel::input::gamepad::id::_SwitchProID::SwitchProID_Impl__obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 100)				return this->super::getRawID(ID);
            			}
            		}
HXLINE(  68)		return null();
            	}


::String SwitchProMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_106_getInputLabel)
HXDLIN( 106)		switch((int)(id)){
            			case (int)0: {
HXLINE( 108)				return HX_("b",62,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE( 109)				return HX_("a",61,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 110)				return HX_("y",79,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE( 111)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)4: {
HXLINE( 116)				return HX_("l",6c,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE( 117)				return HX_("r",72,00,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE( 112)				return HX_("minus",70,80,68,08);
            			}
            			break;
            			case (int)7: {
HXLINE( 114)				return HX_("plus",5a,3f,5a,4a);
            			}
            			break;
            			case (int)10: {
HXLINE( 113)				return HX_("home",1f,ca,12,45);
            			}
            			break;
            			case (int)17: {
HXLINE( 118)				return HX_("zl",b2,6a,00,00);
            			}
            			break;
            			case (int)18: {
HXLINE( 119)				return HX_("zr",b8,6a,00,00);
            			}
            			break;
            			case (int)30: {
HXLINE( 115)				return HX_("capture",86,d0,51,a7);
            			}
            			break;
            			default:{
HXLINE( 120)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE( 106)		return null();
            	}


 ::flixel::input::gamepad::FlxGamepadMappedInput SwitchProMapping_obj::getMappedInput(int id){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_126_getMappedInput)
HXDLIN( 126)		return ::flixel::input::gamepad::FlxGamepadMappedInput_obj::SWITCH_PRO(this->getRawID(id));
            	}



::hx::ObjectPtr< SwitchProMapping_obj > SwitchProMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< SwitchProMapping_obj > __this = new SwitchProMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< SwitchProMapping_obj > SwitchProMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	SwitchProMapping_obj *__this = (SwitchProMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchProMapping_obj), true, "flixel.input.gamepad.mappings.SwitchProMapping"));
	*(void **)__this = SwitchProMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

SwitchProMapping_obj::SwitchProMapping_obj()
{
}

::hx::Val SwitchProMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *SwitchProMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SwitchProMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchProMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	HX_("getMappedInput",61,6a,2c,47),
	::String(null()) };

::hx::Class SwitchProMapping_obj::__mClass;

void SwitchProMapping_obj::__register()
{
	SwitchProMapping_obj _hx_dummy;
	SwitchProMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.SwitchProMapping",fb,f4,b5,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SwitchProMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SwitchProMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchProMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchProMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings