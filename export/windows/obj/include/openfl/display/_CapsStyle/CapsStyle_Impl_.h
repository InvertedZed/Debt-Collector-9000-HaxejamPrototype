// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_
#define INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_CapsStyle,CapsStyle_Impl_)

namespace openfl{
namespace display{
namespace _CapsStyle{


class HXCPP_CLASS_ATTRIBUTES CapsStyle_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CapsStyle_Impl__obj OBJ_;
		CapsStyle_Impl__obj();

	public:
		enum { _hx_ClassId = 0x24f4d5cd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._CapsStyle.CapsStyle_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._CapsStyle.CapsStyle_Impl_"); }

		inline static ::hx::ObjectPtr< CapsStyle_Impl__obj > __new() {
			::hx::ObjectPtr< CapsStyle_Impl__obj > __this = new CapsStyle_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CapsStyle_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CapsStyle_Impl__obj *__this = (CapsStyle_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CapsStyle_Impl__obj), false, "openfl.display._CapsStyle.CapsStyle_Impl_"));
			*(void **)__this = CapsStyle_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CapsStyle_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CapsStyle_Impl_",d0,81,7b,42); }

		static void __boot();
		static  ::Dynamic NONE;
		static  ::Dynamic ROUND;
		static  ::Dynamic SQUARE;
		static  ::Dynamic fromInt( ::Dynamic value);
		static ::Dynamic fromInt_dyn();

		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static  ::Dynamic toInt( ::Dynamic this1);
		static ::Dynamic toInt_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _CapsStyle

#endif /* INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_ */ 
