// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogMouseDrag
#define INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogMouseDrag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogClickAndDragMouseMotion
#include <flixel/input/actions/FlxActionInputAnalogClickAndDragMouseMotion.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,input,_FlxAnalogSet,AnalogMouseDrag)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogClickAndDragMouseMotion)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogMouseMotion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace input{
namespace _FlxAnalogSet{


class HXCPP_CLASS_ATTRIBUTES AnalogMouseDrag_obj : public  ::flixel::input::actions::FlxActionInputAnalogClickAndDragMouseMotion_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputAnalogClickAndDragMouseMotion_obj super;
		typedef AnalogMouseDrag_obj OBJ_;
		AnalogMouseDrag_obj();

	public:
		enum { _hx_ClassId = 0x79489845 };

		void __construct(int buttonID,int trigger,::hx::Null< int >  __o_axis,::hx::Null< Float >  __o_scale,::hx::Null< Float >  __o_deadzone,::hx::Null< int >  __o_invert);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.input._FlxAnalogSet.AnalogMouseDrag")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.input._FlxAnalogSet.AnalogMouseDrag"); }
		static ::hx::ObjectPtr< AnalogMouseDrag_obj > __new(int buttonID,int trigger,::hx::Null< int >  __o_axis,::hx::Null< Float >  __o_scale,::hx::Null< Float >  __o_deadzone,::hx::Null< int >  __o_invert);
		static ::hx::ObjectPtr< AnalogMouseDrag_obj > __alloc(::hx::Ctx *_hx_ctx,int buttonID,int trigger,::hx::Null< int >  __o_axis,::hx::Null< Float >  __o_scale,::hx::Null< Float >  __o_deadzone,::hx::Null< int >  __o_invert);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnalogMouseDrag_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnalogMouseDrag",49,b0,0d,74); }

		void updateValues(Float x,Float y);

};

} // end namespace flixel
} // end namespace addons
} // end namespace input
} // end namespace _FlxAnalogSet

#endif /* INCLUDED_flixel_addons_input__FlxAnalogSet_AnalogMouseDrag */ 