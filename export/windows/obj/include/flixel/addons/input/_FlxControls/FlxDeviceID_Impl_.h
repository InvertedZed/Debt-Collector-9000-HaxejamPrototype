// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input__FlxControls_FlxDeviceID_Impl_
#define INCLUDED_flixel_addons_input__FlxControls_FlxDeviceID_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,input,FlxDeviceIDRaw)
HX_DECLARE_CLASS4(flixel,addons,input,_FlxControls,FlxDeviceID_Impl_)

namespace flixel{
namespace addons{
namespace input{
namespace _FlxControls{


class HXCPP_CLASS_ATTRIBUTES FlxDeviceID_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxDeviceID_Impl__obj OBJ_;
		FlxDeviceID_Impl__obj();

	public:
		enum { _hx_ClassId = 0x631b6bbf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.input._FlxControls.FlxDeviceID_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.input._FlxControls.FlxDeviceID_Impl_"); }

		inline static ::hx::ObjectPtr< FlxDeviceID_Impl__obj > __new() {
			::hx::ObjectPtr< FlxDeviceID_Impl__obj > __this = new FlxDeviceID_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxDeviceID_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxDeviceID_Impl__obj *__this = (FlxDeviceID_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDeviceID_Impl__obj), false, "flixel.addons.input._FlxControls.FlxDeviceID_Impl_"));
			*(void **)__this = FlxDeviceID_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxDeviceID_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxDeviceID_Impl_",43,f1,0b,4f); }

		static  ::flixel::addons::input::FlxDeviceIDRaw fromInt(int id);
		static ::Dynamic fromInt_dyn();

		static int toDeviceID( ::flixel::addons::input::FlxDeviceIDRaw this1);
		static ::Dynamic toDeviceID_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxControls

#endif /* INCLUDED_flixel_addons_input__FlxControls_FlxDeviceID_Impl_ */ 