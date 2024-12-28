// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_input_gamepad_id__PS4ID_PS4ID_Impl_
#define INCLUDED_flixel_input_gamepad_id__PS4ID_PS4ID_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxTypedGamepadAnalogStick)
HX_DECLARE_CLASS5(flixel,input,gamepad,id,_PS4ID,PS4ID_Impl_)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{
namespace _PS4ID{


class HXCPP_CLASS_ATTRIBUTES PS4ID_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PS4ID_Impl__obj OBJ_;
		PS4ID_Impl__obj();

	public:
		enum { _hx_ClassId = 0x19f9fd71 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id._PS4ID.PS4ID_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id._PS4ID.PS4ID_Impl_"); }

		inline static ::hx::ObjectPtr< PS4ID_Impl__obj > __new() {
			::hx::ObjectPtr< PS4ID_Impl__obj > __this = new PS4ID_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PS4ID_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PS4ID_Impl__obj *__this = (PS4ID_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PS4ID_Impl__obj), false, "flixel.input.gamepad.id._PS4ID.PS4ID_Impl_"));
			*(void **)__this = PS4ID_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PS4ID_Impl__obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PS4ID_Impl_",8c,08,4f,1e); }

		static void __boot();
		static int X;
		static int CIRCLE;
		static int SQUARE;
		static int TRIANGLE;
		static int PS;
		static int OPTIONS;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int L1;
		static int R1;
		static int SHARE;
		static int LEFT_X;
		static int LEFT_Y;
		static int RIGHT_X;
		static int RIGHT_Y;
		static int LEFT_STICK_UP;
		static int LEFT_STICK_DOWN;
		static int LEFT_STICK_LEFT;
		static int LEFT_STICK_RIGHT;
		static int RIGHT_STICK_UP;
		static int RIGHT_STICK_DOWN;
		static int RIGHT_STICK_LEFT;
		static int RIGHT_STICK_RIGHT;
		static int TOUCHPAD_CLICK;
		static int L2;
		static int R2;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static  ::flixel::input::gamepad::FlxTypedGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxTypedGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
} // end namespace _PS4ID

#endif /* INCLUDED_flixel_input_gamepad_id__PS4ID_PS4ID_Impl_ */ 
