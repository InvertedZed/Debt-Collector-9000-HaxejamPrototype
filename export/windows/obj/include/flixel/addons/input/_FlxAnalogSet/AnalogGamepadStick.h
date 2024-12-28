// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogGamepadStick
#define INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogGamepadStick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogGamepad
#include <flixel/input/actions/FlxActionInputAnalogGamepad.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,input,_FlxAnalogSet,AnalogGamepadStick)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogGamepad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace input{
namespace _FlxAnalogSet{


class HXCPP_CLASS_ATTRIBUTES AnalogGamepadStick_obj : public  ::flixel::input::actions::FlxActionInputAnalogGamepad_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputAnalogGamepad_obj super;
		typedef AnalogGamepadStick_obj OBJ_;
		AnalogGamepadStick_obj();

	public:
		enum { _hx_ClassId = 0x71d42a47 };

		void __construct(int InputID,int Trigger, ::Dynamic Axis, ::Dynamic GamepadID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.input._FlxAnalogSet.AnalogGamepadStick")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.input._FlxAnalogSet.AnalogGamepadStick"); }
		static ::hx::ObjectPtr< AnalogGamepadStick_obj > __new(int InputID,int Trigger, ::Dynamic Axis, ::Dynamic GamepadID);
		static ::hx::ObjectPtr< AnalogGamepadStick_obj > __alloc(::hx::Ctx *_hx_ctx,int InputID,int Trigger, ::Dynamic Axis, ::Dynamic GamepadID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnalogGamepadStick_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnalogGamepadStick",5f,ef,18,c1); }

		void updateValues(Float x,Float y);

};

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxAnalogSet

#endif /* INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogGamepadStick */ 
