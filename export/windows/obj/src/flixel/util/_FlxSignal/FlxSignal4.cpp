// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal4
#include <flixel/util/_FlxSignal/FlxSignal4.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_024ec818dae5a948_265_new,"flixel.util._FlxSignal.FlxSignal4","new",0xd1f9e1e5,"flixel.util._FlxSignal.FlxSignal4.new","flixel/util/FlxSignal.hx",265,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_024ec818dae5a948_293_dispatch4,"flixel.util._FlxSignal.FlxSignal4","dispatch4",0x92a0977f,"flixel.util._FlxSignal.FlxSignal4.dispatch4","flixel/util/FlxSignal.hx",293,0x3c758c5e)
namespace flixel{
namespace util{
namespace _FlxSignal{

void FlxSignal4_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_024ec818dae5a948_265_new)
HXLINE( 266)		super::__construct();
HXLINE( 267)		this->dispatch = this->dispatch4_dyn();
            	}

Dynamic FlxSignal4_obj::__CreateEmpty() { return new FlxSignal4_obj; }

void *FlxSignal4_obj::_hx_vtable = 0;

Dynamic FlxSignal4_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSignal4_obj > _hx_result = new FlxSignal4_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSignal4_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4515ccf2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4515ccf2;
	} else {
		return inClassId==(int)0x6170b6f7;
	}
}

void FlxSignal4_obj::dispatch4( ::Dynamic value1, ::Dynamic value2, ::Dynamic value3, ::Dynamic value4){
            	HX_STACKFRAME(&_hx_pos_024ec818dae5a948_293_dispatch4)
HXLINE( 294)		this->processingListeners = true;
HXLINE( 295)		{
HXLINE( 295)			int _g = 0;
HXDLIN( 295)			::Array< ::Dynamic> _g1 = this->handlers;
HXDLIN( 295)			while((_g < _g1->length)){
HXLINE( 295)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 295)				_g = (_g + 1);
HXLINE( 297)				handler->listener(value1,value2,value3,value4);
HXLINE( 299)				if (handler->dispatchOnce) {
HXLINE( 300)					if (this->processingListeners) {
HXLINE( 300)						this->pendingRemove->push(handler);
            					}
            					else {
HXLINE( 300)						this->handlers->remove(handler);
HXDLIN( 300)						handler->destroy();
            					}
            				}
            			}
            		}
HXLINE( 303)		this->processingListeners = false;
HXLINE( 305)		{
HXLINE( 305)			int _g2 = 0;
HXDLIN( 305)			::Array< ::Dynamic> _g3 = this->pendingRemove;
HXDLIN( 305)			while((_g2 < _g3->length)){
HXLINE( 305)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler1 = _g3->__get(_g2).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 305)				_g2 = (_g2 + 1);
HXLINE( 307)				if (this->processingListeners) {
HXLINE( 307)					this->pendingRemove->push(handler1);
            				}
            				else {
HXLINE( 307)					this->handlers->remove(handler1);
HXDLIN( 307)					handler1->destroy();
            				}
            			}
            		}
HXLINE( 309)		if ((this->pendingRemove->length > 0)) {
HXLINE( 310)			this->pendingRemove = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSignal4_obj,dispatch4,(void))


::hx::ObjectPtr< FlxSignal4_obj > FlxSignal4_obj::__new() {
	::hx::ObjectPtr< FlxSignal4_obj > __this = new FlxSignal4_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSignal4_obj > FlxSignal4_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSignal4_obj *__this = (FlxSignal4_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSignal4_obj), true, "flixel.util._FlxSignal.FlxSignal4"));
	*(void **)__this = FlxSignal4_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSignal4_obj::FlxSignal4_obj()
{
}

::hx::Val FlxSignal4_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch4") ) { return ::hx::Val( dispatch4_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSignal4_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxSignal4_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSignal4_obj_sMemberFields[] = {
	HX_("dispatch4",3a,14,f1,78),
	::String(null()) };

::hx::Class FlxSignal4_obj::__mClass;

void FlxSignal4_obj::__register()
{
	FlxSignal4_obj _hx_dummy;
	FlxSignal4_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxSignal.FlxSignal4",73,0b,c8,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSignal4_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSignal4_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSignal4_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSignal4_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal