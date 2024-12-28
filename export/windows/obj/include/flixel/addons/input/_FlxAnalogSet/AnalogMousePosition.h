// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogMousePosition
#define INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogMousePosition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMousePosition
#include <flixel/input/actions/FlxActionInputAnalogMousePosition.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,input,_FlxAnalogSet,AnalogMousePosition)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogMousePosition)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace input{
namespace _FlxAnalogSet{


class HXCPP_CLASS_ATTRIBUTES AnalogMousePosition_obj : public  ::flixel::input::actions::FlxActionInputAnalogMousePosition_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputAnalogMousePosition_obj super;
		typedef AnalogMousePosition_obj OBJ_;
		AnalogMousePosition_obj();

	public:
		enum { _hx_ClassId = 0x37ee097a };

		void __construct(int trigger,::hx::Null< int >  __o_axis);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.input._FlxAnalogSet.AnalogMousePosition")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.input._FlxAnalogSet.AnalogMousePosition"); }
		static ::hx::ObjectPtr< AnalogMousePosition_obj > __new(int trigger,::hx::Null< int >  __o_axis);
		static ::hx::ObjectPtr< AnalogMousePosition_obj > __alloc(::hx::Ctx *_hx_ctx,int trigger,::hx::Null< int >  __o_axis);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnalogMousePosition_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnalogMousePosition",7e,73,b9,64); }

		void updateValues(Float x,Float y);

};

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxAnalogSet

#endif /* INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogMousePosition */ 
