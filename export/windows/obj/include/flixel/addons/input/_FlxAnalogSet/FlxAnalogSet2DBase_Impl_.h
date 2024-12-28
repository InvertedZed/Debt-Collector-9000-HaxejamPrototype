// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input__FlxAnalogSet_FlxAnalogSet2DBase_Impl_
#define INCLUDED_flixel_addons_input__FlxAnalogSet_FlxAnalogSet2DBase_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,input,FlxAnalogDirections2D)
HX_DECLARE_CLASS3(flixel,addons,input,FlxAnalogSet)
HX_DECLARE_CLASS4(flixel,addons,input,_FlxAnalogSet,FlxAnalogSet2DBase_Impl_)

namespace flixel{
namespace addons{
namespace input{
namespace _FlxAnalogSet{


class HXCPP_CLASS_ATTRIBUTES FlxAnalogSet2DBase_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAnalogSet2DBase_Impl__obj OBJ_;
		FlxAnalogSet2DBase_Impl__obj();

	public:
		enum { _hx_ClassId = 0x163a5f07 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.input._FlxAnalogSet.FlxAnalogSet2DBase_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.input._FlxAnalogSet.FlxAnalogSet2DBase_Impl_"); }

		inline static ::hx::ObjectPtr< FlxAnalogSet2DBase_Impl__obj > __new() {
			::hx::ObjectPtr< FlxAnalogSet2DBase_Impl__obj > __this = new FlxAnalogSet2DBase_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxAnalogSet2DBase_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxAnalogSet2DBase_Impl__obj *__this = (FlxAnalogSet2DBase_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAnalogSet2DBase_Impl__obj), false, "flixel.addons.input._FlxAnalogSet.FlxAnalogSet2DBase_Impl_"));
			*(void **)__this = FlxAnalogSet2DBase_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAnalogSet2DBase_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAnalogSet2DBase_Impl_",83,26,3c,17); }

		static  ::flixel::addons::input::FlxAnalogDirections2D get_pressed( ::flixel::addons::input::FlxAnalogSet this1);
		static ::Dynamic get_pressed_dyn();

		static  ::flixel::addons::input::FlxAnalogDirections2D get_justPressed( ::flixel::addons::input::FlxAnalogSet this1);
		static ::Dynamic get_justPressed_dyn();

		static  ::flixel::addons::input::FlxAnalogDirections2D get_released( ::flixel::addons::input::FlxAnalogSet this1);
		static ::Dynamic get_released_dyn();

		static  ::flixel::addons::input::FlxAnalogDirections2D get_justReleased( ::flixel::addons::input::FlxAnalogSet this1);
		static ::Dynamic get_justReleased_dyn();

		static  ::flixel::addons::input::FlxAnalogDirections2D get_holdRepeat( ::flixel::addons::input::FlxAnalogSet this1);
		static ::Dynamic get_holdRepeat_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxAnalogSet

#endif /* INCLUDED_flixel_addons_input__FlxAnalogSet_FlxAnalogSet2DBase_Impl_ */ 
