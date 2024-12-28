// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#define INCLUDED_flixel_input_keyboard_FlxKeyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS3(flixel,_hx_system,replay,CodeValuePair)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)

namespace flixel{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES FlxKeyboard_obj : public  ::flixel::input::FlxKeyManager_obj
{
	public:
		typedef  ::flixel::input::FlxKeyManager_obj super;
		typedef FlxKeyboard_obj OBJ_;
		FlxKeyboard_obj();

	public:
		enum { _hx_ClassId = 0x4ba0dea4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.keyboard.FlxKeyboard")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.keyboard.FlxKeyboard"); }
		static ::hx::ObjectPtr< FlxKeyboard_obj > __new();
		static ::hx::ObjectPtr< FlxKeyboard_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxKeyboard_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxKeyboard",19,97,40,7f); }

		 ::haxe::ds::StringMap _nativeCorrection;
		void onKeyUp( ::openfl::events::KeyboardEvent event);

		void onKeyDown( ::openfl::events::KeyboardEvent event);

		int resolveKeyCode( ::openfl::events::KeyboardEvent e);

		::Array< ::Dynamic> record();
		::Dynamic record_dyn();

		void playback(::Array< ::Dynamic> record);
		::Dynamic playback_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_input_keyboard_FlxKeyboard */ 
