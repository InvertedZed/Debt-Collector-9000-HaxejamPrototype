// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_input_gamepad_id__OUYAID_OUYAID_Impl_
#define INCLUDED_flixel_input_gamepad_id__OUYAID_OUYAID_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxTypedGamepadAnalogStick)
HX_DECLARE_CLASS5(flixel,input,gamepad,id,_OUYAID,OUYAID_Impl_)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{
namespace _OUYAID{


class HXCPP_CLASS_ATTRIBUTES OUYAID_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OUYAID_Impl__obj OBJ_;
		OUYAID_Impl__obj();

	public:
		enum { _hx_ClassId = 0x50a2c5c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id._OUYAID.OUYAID_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id._OUYAID.OUYAID_Impl_"); }

		inline static ::hx::ObjectPtr< OUYAID_Impl__obj > __new() {
			::hx::ObjectPtr< OUYAID_Impl__obj > __this = new OUYAID_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OUYAID_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			OUYAID_Impl__obj *__this = (OUYAID_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OUYAID_Impl__obj), false, "flixel.input.gamepad.id._OUYAID.OUYAID_Impl_"));
			*(void **)__this = OUYAID_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OUYAID_Impl__obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OUYAID_Impl_",29,19,bb,24); }

		static void __boot();
		static int O;
		static int U;
		static int Y;
		static int A;
		static int LB;
		static int RB;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int HOME;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int DPAD_DOWN;
		static int DPAD_UP;
		static int LEFT_STICK_UP;
		static int LEFT_STICK_DOWN;
		static int LEFT_STICK_LEFT;
		static int LEFT_STICK_RIGHT;
		static int RIGHT_STICK_UP;
		static int RIGHT_STICK_DOWN;
		static int RIGHT_STICK_LEFT;
		static int RIGHT_STICK_RIGHT;
		static  ::flixel::input::gamepad::FlxTypedGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxTypedGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
} // end namespace _OUYAID

#endif /* INCLUDED_flixel_input_gamepad_id__OUYAID_OUYAID_Impl_ */ 
