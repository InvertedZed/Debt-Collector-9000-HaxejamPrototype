// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_input_DigitalEvent
#include <flixel/addons/input/DigitalEvent.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxControlInputTypeRaw
#include <flixel/addons/input/FlxControlInputTypeRaw.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxControls
#include <flixel/addons/input/FlxControls.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxDigitalSet
#include <flixel/addons/input/FlxDigitalSet.h>
#endif
#ifndef INCLUDED_flixel_addons_input__FlxControlInputType_FlxControlInputType_Impl_
#include <flixel/addons/input/_FlxControlInputType/FlxControlInputType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_game_ingame_ControlEnum
#include <game/ingame/ControlEnum.h>
#endif
#ifndef INCLUDED_game_ingame_PlayerControls
#include <game/ingame/PlayerControls.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3132d6813e6e32e_30_new,"game.ingame.PlayerControls","new",0x8c769bc4,"game.ingame.PlayerControls.new","game/ingame/PlayerControls.hx",30,0x4560320c)
HX_LOCAL_STACK_FRAME(_hx_pos_32ad4231bbba8adc_141_get_pressed,"game.ingame.PlayerControls","get_pressed",0x1294021d,"game.ingame.PlayerControls.get_pressed","flixel/addons/system/macros/FlxControlsMacro.hx",141,0x69d9ff29)
HX_LOCAL_STACK_FRAME(_hx_pos_32ad4231bbba8adc_142_get_released,"game.ingame.PlayerControls","get_released",0x35c3e4e2,"game.ingame.PlayerControls.get_released","flixel/addons/system/macros/FlxControlsMacro.hx",142,0x69d9ff29)
HX_LOCAL_STACK_FRAME(_hx_pos_32ad4231bbba8adc_143_get_justPressed,"game.ingame.PlayerControls","get_justPressed",0xcd6116d1,"game.ingame.PlayerControls.get_justPressed","flixel/addons/system/macros/FlxControlsMacro.hx",143,0x69d9ff29)
HX_LOCAL_STACK_FRAME(_hx_pos_32ad4231bbba8adc_144_get_justReleased,"game.ingame.PlayerControls","get_justReleased",0xee68edae,"game.ingame.PlayerControls.get_justReleased","flixel/addons/system/macros/FlxControlsMacro.hx",144,0x69d9ff29)
HX_LOCAL_STACK_FRAME(_hx_pos_32ad4231bbba8adc_145_get_holdRepeat,"game.ingame.PlayerControls","get_holdRepeat",0xa3703d5f,"game.ingame.PlayerControls.get_holdRepeat","flixel/addons/system/macros/FlxControlsMacro.hx",145,0x69d9ff29)
HX_LOCAL_STACK_FRAME(_hx_pos_32ad4231bbba8adc_276_getDefaultMappings,"game.ingame.PlayerControls","getDefaultMappings",0xec0e34ac,"game.ingame.PlayerControls.getDefaultMappings","flixel/addons/system/macros/FlxControlsMacro.hx",276,0x69d9ff29)
namespace game{
namespace ingame{

void PlayerControls_obj::__construct(::String __o_name){
            		::String name = __o_name;
            		if (::hx::IsNull(__o_name)) name = HX_("Main",59,64,2f,33);
            	HX_STACKFRAME(&_hx_pos_a3132d6813e6e32e_30_new)
HXDLIN(  30)		super::__construct(name);
            	}

Dynamic PlayerControls_obj::__CreateEmpty() { return new PlayerControls_obj; }

void *PlayerControls_obj::_hx_vtable = 0;

Dynamic PlayerControls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayerControls_obj > _hx_result = new PlayerControls_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayerControls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x24c35104) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x24c35104;
	} else {
		return inClassId==(int)0x64be9eed;
	}
}

 ::flixel::addons::input::FlxDigitalSet PlayerControls_obj::get_pressed(){
            	HX_STACKFRAME(&_hx_pos_32ad4231bbba8adc_141_get_pressed)
HXDLIN( 141)		return this->digitalSets->get(::flixel::addons::input::DigitalEvent_obj::PRESSED_dyn()).StaticCast<  ::flixel::addons::input::FlxDigitalSet >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerControls_obj,get_pressed,return )

 ::flixel::addons::input::FlxDigitalSet PlayerControls_obj::get_released(){
            	HX_STACKFRAME(&_hx_pos_32ad4231bbba8adc_142_get_released)
HXDLIN( 142)		return this->digitalSets->get(::flixel::addons::input::DigitalEvent_obj::RELEASED_dyn()).StaticCast<  ::flixel::addons::input::FlxDigitalSet >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerControls_obj,get_released,return )

 ::flixel::addons::input::FlxDigitalSet PlayerControls_obj::get_justPressed(){
            	HX_STACKFRAME(&_hx_pos_32ad4231bbba8adc_143_get_justPressed)
HXDLIN( 143)		return this->digitalSets->get(::flixel::addons::input::DigitalEvent_obj::JUST_PRESSED_dyn()).StaticCast<  ::flixel::addons::input::FlxDigitalSet >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerControls_obj,get_justPressed,return )

 ::flixel::addons::input::FlxDigitalSet PlayerControls_obj::get_justReleased(){
            	HX_STACKFRAME(&_hx_pos_32ad4231bbba8adc_144_get_justReleased)
HXDLIN( 144)		return this->digitalSets->get(::flixel::addons::input::DigitalEvent_obj::JUST_RELEASED_dyn()).StaticCast<  ::flixel::addons::input::FlxDigitalSet >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerControls_obj,get_justReleased,return )

 ::flixel::addons::input::FlxDigitalSet PlayerControls_obj::get_holdRepeat(){
            	HX_STACKFRAME(&_hx_pos_32ad4231bbba8adc_145_get_holdRepeat)
HXDLIN( 145)		return this->digitalSets->get(::flixel::addons::input::DigitalEvent_obj::REPEAT_dyn()).StaticCast<  ::flixel::addons::input::FlxDigitalSet >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerControls_obj,get_holdRepeat,return )

 ::haxe::ds::EnumValueMap PlayerControls_obj::getDefaultMappings(){
            	HX_GC_STACKFRAME(&_hx_pos_32ad4231bbba8adc_276_getDefaultMappings)
HXDLIN( 276)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 276)		{
HXLINE(   8)			 ::flixel::addons::input::FlxControlInputTypeRaw value = ::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(38);
HXLINE( 276)			_g->set(::game::ingame::ControlEnum_obj::UP_dyn(),::Array_obj< ::Dynamic>::__new(2)->init(0,value)->init(1,::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(87)));
            		}
HXDLIN( 276)		_g->set(::game::ingame::ControlEnum_obj::RIGHTHIT_dyn(),::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(88)));
HXDLIN( 276)		{
HXLINE(  17)			 ::flixel::addons::input::FlxControlInputTypeRaw value1 = ::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(39);
HXLINE( 276)			_g->set(::game::ingame::ControlEnum_obj::RIGHT_dyn(),::Array_obj< ::Dynamic>::__new(2)->init(0,value1)->init(1,::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(68)));
            		}
HXDLIN( 276)		_g->set(::game::ingame::ControlEnum_obj::LEFTHIT_dyn(),::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(90)));
HXDLIN( 276)		{
HXLINE(  14)			 ::flixel::addons::input::FlxControlInputTypeRaw value2 = ::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(37);
HXLINE( 276)			_g->set(::game::ingame::ControlEnum_obj::LEFT_dyn(),::Array_obj< ::Dynamic>::__new(2)->init(0,value2)->init(1,::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(65)));
            		}
HXDLIN( 276)		_g->set(::game::ingame::ControlEnum_obj::KICK_dyn(),::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(67)));
HXDLIN( 276)		{
HXLINE(  11)			 ::flixel::addons::input::FlxControlInputTypeRaw value3 = ::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(40);
HXLINE( 276)			_g->set(::game::ingame::ControlEnum_obj::DOWN_dyn(),::Array_obj< ::Dynamic>::__new(2)->init(0,value3)->init(1,::flixel::addons::input::_FlxControlInputType::FlxControlInputType_Impl__obj::fromKey(83)));
            		}
HXDLIN( 276)		return _g;
            	}



::hx::ObjectPtr< PlayerControls_obj > PlayerControls_obj::__new(::String __o_name) {
	::hx::ObjectPtr< PlayerControls_obj > __this = new PlayerControls_obj();
	__this->__construct(__o_name);
	return __this;
}

::hx::ObjectPtr< PlayerControls_obj > PlayerControls_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_name) {
	PlayerControls_obj *__this = (PlayerControls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayerControls_obj), true, "game.ingame.PlayerControls"));
	*(void **)__this = PlayerControls_obj::_hx_vtable;
	__this->__construct(__o_name);
	return __this;
}

PlayerControls_obj::PlayerControls_obj()
{
}

::hx::Val PlayerControls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pressed() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_released() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"holdRepeat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_holdRepeat() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justPressed() ); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return ::hx::Val( get_pressed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justReleased() ); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return ::hx::Val( get_released_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_holdRepeat") ) { return ::hx::Val( get_holdRepeat_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return ::hx::Val( get_justPressed_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return ::hx::Val( get_justReleased_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getDefaultMappings") ) { return ::hx::Val( getDefaultMappings_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void PlayerControls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pressed",a2,d2,e6,39));
	outFields->push(HX_("released",bd,88,e7,76));
	outFields->push(HX_("justPressed",d6,0d,a7,f2));
	outFields->push(HX_("justReleased",09,1b,5b,66));
	outFields->push(HX_("holdRepeat",fa,cd,a8,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlayerControls_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlayerControls_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayerControls_obj_sMemberFields[] = {
	HX_("get_pressed",b9,32,e1,bf),
	HX_("get_released",c6,3c,01,2c),
	HX_("get_justPressed",6d,c5,88,b3),
	HX_("get_justReleased",92,07,fa,6a),
	HX_("get_holdRepeat",43,56,9e,a5),
	HX_("getDefaultMappings",90,8f,84,82),
	::String(null()) };

::hx::Class PlayerControls_obj::__mClass;

void PlayerControls_obj::__register()
{
	PlayerControls_obj _hx_dummy;
	PlayerControls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("game.ingame.PlayerControls",d2,a9,8c,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayerControls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayerControls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayerControls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayerControls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace game
} // end namespace ingame