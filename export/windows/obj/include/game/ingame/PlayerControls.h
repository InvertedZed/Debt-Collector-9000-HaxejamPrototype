// Generated by Haxe 4.3.6
#ifndef INCLUDED_game_ingame_PlayerControls
#define INCLUDED_game_ingame_PlayerControls

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_input_FlxControls
#include <flixel/addons/input/FlxControls.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,input,FlxControls)
HX_DECLARE_CLASS3(flixel,addons,input,FlxDigitalSet)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(game,ingame,PlayerControls)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)

namespace game{
namespace ingame{


class HXCPP_CLASS_ATTRIBUTES PlayerControls_obj : public  ::flixel::addons::input::FlxControls_obj
{
	public:
		typedef  ::flixel::addons::input::FlxControls_obj super;
		typedef PlayerControls_obj OBJ_;
		PlayerControls_obj();

	public:
		enum { _hx_ClassId = 0x24c35104 };

		void __construct(::String __o_name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="game.ingame.PlayerControls")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"game.ingame.PlayerControls"); }
		static ::hx::ObjectPtr< PlayerControls_obj > __new(::String __o_name);
		static ::hx::ObjectPtr< PlayerControls_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayerControls_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayerControls",17,8b,58,f4); }

		 ::flixel::addons::input::FlxDigitalSet get_pressed();
		::Dynamic get_pressed_dyn();

		 ::flixel::addons::input::FlxDigitalSet get_released();
		::Dynamic get_released_dyn();

		 ::flixel::addons::input::FlxDigitalSet get_justPressed();
		::Dynamic get_justPressed_dyn();

		 ::flixel::addons::input::FlxDigitalSet get_justReleased();
		::Dynamic get_justReleased_dyn();

		 ::flixel::addons::input::FlxDigitalSet get_holdRepeat();
		::Dynamic get_holdRepeat_dyn();

		 ::haxe::ds::EnumValueMap getDefaultMappings();

};

} // end namespace game
} // end namespace ingame

#endif /* INCLUDED_game_ingame_PlayerControls */ 