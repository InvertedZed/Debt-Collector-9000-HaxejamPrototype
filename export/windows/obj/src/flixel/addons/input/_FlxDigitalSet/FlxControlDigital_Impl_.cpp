// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_addons_input_DigitalEvent
#include <flixel/addons/input/DigitalEvent.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxControlInputTypeRaw
#include <flixel/addons/input/FlxControlInputTypeRaw.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxControlRepeatDigital
#include <flixel/addons/input/FlxControlRepeatDigital.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxControls
#include <flixel/addons/input/FlxControls.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxDeviceIDRaw
#include <flixel/addons/input/FlxDeviceIDRaw.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxGamepadInputType
#include <flixel/addons/input/FlxGamepadInputType.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxKeyInputType
#include <flixel/addons/input/FlxKeyInputType.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxMouseInputType
#include <flixel/addons/input/FlxMouseInputType.h>
#endif
#ifndef INCLUDED_flixel_addons_input_FlxVirtualPadInputType
#include <flixel/addons/input/FlxVirtualPadInputType.h>
#endif
#ifndef INCLUDED_flixel_addons_input__FlxControls_FlxDeviceID_Impl_
#include <flixel/addons/input/_FlxControls/FlxDeviceID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_addons_input__FlxControls_VirtualPadInputProxy
#include <flixel/addons/input/_FlxControls/VirtualPadInputProxy.h>
#endif
#ifndef INCLUDED_flixel_addons_input__FlxDigitalSet_FlxControlDigital_Impl_
#include <flixel/addons/input/_FlxDigitalSet/FlxControlDigital_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalIFlxInput
#include <flixel/input/actions/FlxActionInputDigitalIFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_01f6cefb756aa9be_133__new,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_","_new",0xd0ceec06,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_._new","flixel/addons/input/FlxDigitalSet.hx",133,0x5a62f830)
HX_LOCAL_STACK_FRAME(_hx_pos_01f6cefb756aa9be_143_add,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_","add",0x6a8e771c,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_.add","flixel/addons/input/FlxDigitalSet.hx",143,0x5a62f830)
HX_LOCAL_STACK_FRAME(_hx_pos_01f6cefb756aa9be_167_remove,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_","remove",0x42d72629,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_.remove","flixel/addons/input/FlxDigitalSet.hx",167,0x5a62f830)
HX_LOCAL_STACK_FRAME(_hx_pos_01f6cefb756aa9be_189_removeKey,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_","removeKey",0x16f79af6,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_.removeKey","flixel/addons/input/FlxDigitalSet.hx",189,0x5a62f830)
HX_LOCAL_STACK_FRAME(_hx_pos_01f6cefb756aa9be_203_removeGamepad,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_","removeGamepad",0xd2e4e978,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_.removeGamepad","flixel/addons/input/FlxDigitalSet.hx",203,0x5a62f830)
HX_LOCAL_STACK_FRAME(_hx_pos_01f6cefb756aa9be_217_removeMouse,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_","removeMouse",0xa5b36b3c,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_.removeMouse","flixel/addons/input/FlxDigitalSet.hx",217,0x5a62f830)
HX_LOCAL_STACK_FRAME(_hx_pos_01f6cefb756aa9be_231_removeVirtualPad,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_","removeVirtualPad",0xd49a5b91,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_.removeVirtualPad","flixel/addons/input/FlxDigitalSet.hx",231,0x5a62f830)
HX_LOCAL_STACK_FRAME(_hx_pos_01f6cefb756aa9be_248_setGamepadID,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_","setGamepadID",0x9f968e5f,"flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_.setGamepadID","flixel/addons/input/FlxDigitalSet.hx",248,0x5a62f830)
namespace flixel{
namespace addons{
namespace input{
namespace _FlxDigitalSet{

void FlxControlDigital_Impl__obj::__construct() { }

Dynamic FlxControlDigital_Impl__obj::__CreateEmpty() { return new FlxControlDigital_Impl__obj; }

void *FlxControlDigital_Impl__obj::_hx_vtable = 0;

Dynamic FlxControlDigital_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxControlDigital_Impl__obj > _hx_result = new FlxControlDigital_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxControlDigital_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e85fab5;
}

 ::flixel::input::actions::FlxActionDigital FlxControlDigital_Impl__obj::_new(::String name, ::flixel::addons::input::DigitalEvent event, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_01f6cefb756aa9be_133__new)
HXDLIN( 133)		 ::flixel::input::actions::FlxActionDigital this1;
HXLINE( 135)		if (::hx::IsPointerEq( event,::flixel::addons::input::DigitalEvent_obj::REPEAT_dyn() )) {
HXLINE( 136)			this1 =  ::flixel::addons::input::FlxControlRepeatDigital_obj::__alloc( HX_CTX ,name,callback);
            		}
            		else {
HXLINE( 138)			this1 =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,name,callback);
            		}
HXLINE( 133)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxControlDigital_Impl__obj,_new,return )

 ::flixel::input::actions::FlxActionDigital FlxControlDigital_Impl__obj::add( ::flixel::input::actions::FlxActionDigital this1, ::flixel::addons::input::FlxControls parent, ::flixel::addons::input::FlxControlInputTypeRaw input,int state){
            	HX_STACKFRAME(&_hx_pos_01f6cefb756aa9be_143_add)
HXDLIN( 143)		switch((int)(input->_hx_getIndex())){
            			case (int)0: {
HXLINE( 147)				 ::flixel::addons::input::FlxKeyInputType _g = input->_hx_getObject(0).StaticCast<  ::flixel::addons::input::FlxKeyInputType >();
HXDLIN( 147)				if ((_g->_hx_getIndex() == 0)) {
HXLINE( 145)					int id = _g->_hx_getInt(0);
HXLINE( 146)					return this1->addKey(id,state);
            				}
            				else {
HXLINE( 147)					 ::flixel::addons::input::FlxKeyInputType found = _g;
HXLINE( 148)					HX_STACK_DO_THROW(((HX_("Internal error - Unexpected Keyboard(",60,d7,55,90) + ::Std_obj::string(found)) + HX_(")",29,00,00,00)));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 151)				 ::flixel::addons::input::FlxGamepadInputType _g1 = input->_hx_getObject(0).StaticCast<  ::flixel::addons::input::FlxGamepadInputType >();
HXDLIN( 151)				if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 149)					int id1 = _g1->_hx_getInt(0);
HXLINE( 150)					return this1->addGamepad(id1,state,::flixel::addons::input::_FlxControls::FlxDeviceID_Impl__obj::toDeviceID(parent->gamepadID));
            				}
            				else {
HXLINE( 151)					 ::flixel::addons::input::FlxGamepadInputType found1 = _g1;
HXLINE( 152)					HX_STACK_DO_THROW(((HX_("Internal error - Unexpected Gamepad(",88,e7,b7,cd) + ::Std_obj::string(found1)) + HX_(")",29,00,00,00)));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 160)				 ::flixel::addons::input::FlxMouseInputType _g2 = input->_hx_getObject(0).StaticCast<  ::flixel::addons::input::FlxMouseInputType >();
HXDLIN( 160)				if ((_g2->_hx_getIndex() == 3)) {
HXLINE( 158)					 ::Dynamic id2 = _g2->_hx_getObject(0);
HXLINE( 159)					return this1->addMouse(( (int)(id2) ),state);
            				}
            				else {
HXLINE( 160)					 ::flixel::addons::input::FlxMouseInputType found2 = _g2;
HXLINE( 161)					HX_STACK_DO_THROW(((HX_("Internal error - Unexpected Mouse(",44,cb,dc,1c) + ::Std_obj::string(found2)) + HX_(")",29,00,00,00)));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 156)				 ::flixel::addons::input::FlxVirtualPadInputType _g3 = input->_hx_getObject(0).StaticCast<  ::flixel::addons::input::FlxVirtualPadInputType >();
HXDLIN( 156)				if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 153)					::String id3 = _g3->_hx_getString(0);
HXLINE( 155)					return this1->addInput(parent->vPadProxies->get(id3),state);
            				}
            				else {
HXLINE( 156)					 ::flixel::addons::input::FlxVirtualPadInputType found3 = _g3;
HXLINE( 157)					HX_STACK_DO_THROW(((HX_("Internal error - Unexpected VirtualPad(",9f,b2,b9,f6) + ::Std_obj::string(found3)) + HX_(")",29,00,00,00)));
            				}
            			}
            			break;
            		}
HXLINE( 143)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxControlDigital_Impl__obj,add,return )

 ::flixel::input::actions::FlxActionInput FlxControlDigital_Impl__obj::remove( ::flixel::input::actions::FlxActionDigital this1, ::flixel::addons::input::FlxControls parent, ::flixel::addons::input::FlxControlInputTypeRaw input){
            	HX_STACKFRAME(&_hx_pos_01f6cefb756aa9be_167_remove)
HXDLIN( 167)		switch((int)(input->_hx_getIndex())){
            			case (int)0: {
HXLINE( 171)				 ::flixel::addons::input::FlxKeyInputType _g = input->_hx_getObject(0).StaticCast<  ::flixel::addons::input::FlxKeyInputType >();
HXDLIN( 171)				if ((_g->_hx_getIndex() == 0)) {
HXLINE( 169)					int id = _g->_hx_getInt(0);
HXLINE( 170)					return ::flixel::addons::input::_FlxDigitalSet::FlxControlDigital_Impl__obj::removeKey(this1,id);
            				}
            				else {
HXLINE( 171)					 ::flixel::addons::input::FlxKeyInputType found = _g;
HXLINE( 172)					HX_STACK_DO_THROW(((HX_("Internal error - Unexpected Keyboard(",60,d7,55,90) + ::Std_obj::string(found)) + HX_(")",29,00,00,00)));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 175)				 ::flixel::addons::input::FlxGamepadInputType _g1 = input->_hx_getObject(0).StaticCast<  ::flixel::addons::input::FlxGamepadInputType >();
HXDLIN( 175)				if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 173)					int id1 = _g1->_hx_getInt(0);
HXLINE( 174)					return ::flixel::addons::input::_FlxDigitalSet::FlxControlDigital_Impl__obj::removeGamepad(this1,id1);
            				}
            				else {
HXLINE( 175)					 ::flixel::addons::input::FlxGamepadInputType found1 = _g1;
HXLINE( 176)					HX_STACK_DO_THROW(((HX_("Internal error - Unexpected Gamepad(",88,e7,b7,cd) + ::Std_obj::string(found1)) + HX_(")",29,00,00,00)));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 183)				 ::flixel::addons::input::FlxMouseInputType _g2 = input->_hx_getObject(0).StaticCast<  ::flixel::addons::input::FlxMouseInputType >();
HXDLIN( 183)				if ((_g2->_hx_getIndex() == 3)) {
HXLINE( 181)					 ::Dynamic id2 = _g2->_hx_getObject(0);
HXLINE( 182)					return ::flixel::addons::input::_FlxDigitalSet::FlxControlDigital_Impl__obj::removeMouse(this1,( (int)(id2) ));
            				}
            				else {
HXLINE( 184)					HX_STACK_DO_THROW(HX_("Mouse not implemented, yet",da,ca,a8,99));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 179)				 ::flixel::addons::input::FlxVirtualPadInputType _g3 = input->_hx_getObject(0).StaticCast<  ::flixel::addons::input::FlxVirtualPadInputType >();
HXDLIN( 179)				if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 177)					::String id3 = _g3->_hx_getString(0);
HXLINE( 178)					return ::flixel::addons::input::_FlxDigitalSet::FlxControlDigital_Impl__obj::removeVirtualPad(this1,parent,id3);
            				}
            				else {
HXLINE( 179)					 ::flixel::addons::input::FlxVirtualPadInputType found2 = _g3;
HXLINE( 180)					HX_STACK_DO_THROW(((HX_("Internal error - Unexpected Gamepad(",88,e7,b7,cd) + ::Std_obj::string(found2)) + HX_(")",29,00,00,00)));
            				}
            			}
            			break;
            		}
HXLINE( 167)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxControlDigital_Impl__obj,remove,return )

 ::flixel::input::actions::FlxActionInput FlxControlDigital_Impl__obj::removeKey( ::flixel::input::actions::FlxActionDigital this1,int key){
            	HX_STACKFRAME(&_hx_pos_01f6cefb756aa9be_189_removeKey)
HXLINE( 190)		{
HXLINE( 190)			int _g = 0;
HXDLIN( 190)			::Array< ::Dynamic> _g1 = this1->inputs;
HXDLIN( 190)			while((_g < _g1->length)){
HXLINE( 190)				 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 190)				_g = (_g + 1);
HXLINE( 192)				bool _hx_tmp;
HXDLIN( 192)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 192)					_hx_tmp = (key == input->inputID);
            				}
            				else {
HXLINE( 192)					_hx_tmp = false;
            				}
HXDLIN( 192)				if (_hx_tmp) {
HXLINE( 194)					this1->remove(input,null());
HXLINE( 195)					return input;
            				}
            			}
            		}
HXLINE( 199)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxControlDigital_Impl__obj,removeKey,return )

 ::flixel::input::actions::FlxActionInput FlxControlDigital_Impl__obj::removeGamepad( ::flixel::input::actions::FlxActionDigital this1,int id){
            	HX_STACKFRAME(&_hx_pos_01f6cefb756aa9be_203_removeGamepad)
HXLINE( 204)		{
HXLINE( 204)			int _g = 0;
HXDLIN( 204)			::Array< ::Dynamic> _g1 = this1->inputs;
HXDLIN( 204)			while((_g < _g1->length)){
HXLINE( 204)				 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 204)				_g = (_g + 1);
HXLINE( 206)				bool _hx_tmp;
HXDLIN( 206)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 206)					_hx_tmp = (id == input->inputID);
            				}
            				else {
HXLINE( 206)					_hx_tmp = false;
            				}
HXDLIN( 206)				if (_hx_tmp) {
HXLINE( 208)					this1->remove(input,null());
HXLINE( 209)					return input;
            				}
            			}
            		}
HXLINE( 213)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxControlDigital_Impl__obj,removeGamepad,return )

 ::flixel::input::actions::FlxActionInput FlxControlDigital_Impl__obj::removeMouse( ::flixel::input::actions::FlxActionDigital this1,int id){
            	HX_STACKFRAME(&_hx_pos_01f6cefb756aa9be_217_removeMouse)
HXLINE( 218)		{
HXLINE( 218)			int _g = 0;
HXDLIN( 218)			::Array< ::Dynamic> _g1 = this1->inputs;
HXDLIN( 218)			while((_g < _g1->length)){
HXLINE( 218)				 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 218)				_g = (_g + 1);
HXLINE( 220)				bool _hx_tmp;
HXDLIN( 220)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::MOUSE_dyn() )) {
HXLINE( 220)					_hx_tmp = (id == input->inputID);
            				}
            				else {
HXLINE( 220)					_hx_tmp = false;
            				}
HXDLIN( 220)				if (_hx_tmp) {
HXLINE( 222)					this1->remove(input,null());
HXLINE( 223)					return input;
            				}
            			}
            		}
HXLINE( 227)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxControlDigital_Impl__obj,removeMouse,return )

 ::flixel::input::actions::FlxActionInput FlxControlDigital_Impl__obj::removeVirtualPad( ::flixel::input::actions::FlxActionDigital this1, ::flixel::addons::input::FlxControls parent,::String id){
            	HX_STACKFRAME(&_hx_pos_01f6cefb756aa9be_231_removeVirtualPad)
HXLINE( 232)		 ::flixel::addons::input::_FlxControls::VirtualPadInputProxy proxy = ( ( ::flixel::addons::input::_FlxControls::VirtualPadInputProxy)(parent->vPadProxies->get(id)) );
HXLINE( 233)		{
HXLINE( 233)			int _g = 0;
HXDLIN( 233)			::Array< ::Dynamic> _g1 = this1->inputs;
HXDLIN( 233)			while((_g < _g1->length)){
HXLINE( 233)				 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 233)				_g = (_g + 1);
HXLINE( 236)				bool _hx_tmp;
HXDLIN( 236)				if (::Std_obj::isOfType(input,::hx::ClassOf< ::flixel::input::actions::FlxActionInputDigitalIFlxInput >())) {
HXLINE( 236)					_hx_tmp = ::hx::IsInstanceEq( ( ( ::flixel::input::actions::FlxActionInputDigitalIFlxInput)(input) )->input,proxy );
            				}
            				else {
HXLINE( 236)					_hx_tmp = false;
            				}
HXDLIN( 236)				if (_hx_tmp) {
HXLINE( 238)					this1->remove(input,null());
HXLINE( 239)					return input;
            				}
            			}
            		}
HXLINE( 243)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxControlDigital_Impl__obj,removeVirtualPad,return )

void FlxControlDigital_Impl__obj::setGamepadID( ::flixel::input::actions::FlxActionDigital this1, ::flixel::addons::input::FlxDeviceIDRaw id){
            	HX_STACKFRAME(&_hx_pos_01f6cefb756aa9be_248_setGamepadID)
HXDLIN( 248)		int _g = 0;
HXDLIN( 248)		::Array< ::Dynamic> _g1 = this1->inputs;
HXDLIN( 248)		while((_g < _g1->length)){
HXDLIN( 248)			 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 248)			_g = (_g + 1);
HXLINE( 250)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 251)				input->deviceID = ::flixel::addons::input::_FlxControls::FlxDeviceID_Impl__obj::toDeviceID(id);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxControlDigital_Impl__obj,setGamepadID,(void))


FlxControlDigital_Impl__obj::FlxControlDigital_Impl__obj()
{
}

bool FlxControlDigital_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeKey") ) { outValue = removeKey_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeMouse") ) { outValue = removeMouse_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setGamepadID") ) { outValue = setGamepadID_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeGamepad") ) { outValue = removeGamepad_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeVirtualPad") ) { outValue = removeVirtualPad_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxControlDigital_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxControlDigital_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxControlDigital_Impl__obj::__mClass;

static ::String FlxControlDigital_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("removeKey",bb,a7,ec,ca),
	HX_("removeGamepad",bd,3c,40,62),
	HX_("removeMouse",41,f3,98,0a),
	HX_("removeVirtualPad",6c,a1,70,1a),
	HX_("setGamepadID",ba,0a,88,83),
	::String(null())
};

void FlxControlDigital_Impl__obj::__register()
{
	FlxControlDigital_Impl__obj _hx_dummy;
	FlxControlDigital_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.input._FlxDigitalSet.FlxControlDigital_Impl_",e9,0b,1e,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxControlDigital_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxControlDigital_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxControlDigital_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxControlDigital_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxControlDigital_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxDigitalSet
