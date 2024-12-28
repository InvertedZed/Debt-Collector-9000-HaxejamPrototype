// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input_FlxControlRepeatDigital
#define INCLUDED_flixel_addons_input_FlxControlRepeatDigital

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,input,FlxControlRepeatDigital)
HX_DECLARE_CLASS3(flixel,addons,input,FlxRepeatInput)
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionDigital)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace input{


class HXCPP_CLASS_ATTRIBUTES FlxControlRepeatDigital_obj : public  ::flixel::input::actions::FlxActionDigital_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionDigital_obj super;
		typedef FlxControlRepeatDigital_obj OBJ_;
		FlxControlRepeatDigital_obj();

	public:
		enum { _hx_ClassId = 0x0108874b };

		void __construct(::String name, ::Dynamic callback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.input.FlxControlRepeatDigital")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.input.FlxControlRepeatDigital"); }
		static ::hx::ObjectPtr< FlxControlRepeatDigital_obj > __new(::String name, ::Dynamic callback);
		static ::hx::ObjectPtr< FlxControlRepeatDigital_obj > __alloc(::hx::Ctx *_hx_ctx,::String name, ::Dynamic callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxControlRepeatDigital_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxControlRepeatDigital",92,d5,c1,c9); }

		 ::flixel::addons::input::FlxRepeatInput input;
		void update();

		bool check();

};

} // end namespace flixel
} // end namespace addons
} // end namespace input

#endif /* INCLUDED_flixel_addons_input_FlxControlRepeatDigital */ 