// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping
#define INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadMappedInput)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxTypedGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxTypedGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,Manufacturer)

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES FlxTypedGamepadMapping_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTypedGamepadMapping_obj OBJ_;
		FlxTypedGamepadMapping_obj();

	public:
		enum { _hx_ClassId = 0x425bf69d };

		void __construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.FlxTypedGamepadMapping")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.mappings.FlxTypedGamepadMapping"); }
		static ::hx::ObjectPtr< FlxTypedGamepadMapping_obj > __new( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static ::hx::ObjectPtr< FlxTypedGamepadMapping_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedGamepadMapping_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedGamepadMapping",45,e9,32,c7); }

		bool supportsMotion;
		bool supportsPointer;
		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick leftStick;
		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick rightStick;
		 ::flixel::input::gamepad::FlxGamepadAttachment attachment;
		 ::flixel::input::gamepad::mappings::Manufacturer manufacturer;
		bool bottomIsAccept;
		virtual void initValues();
		::Dynamic initValues_dyn();

		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick getAnalogStick(int ID);
		::Dynamic getAnalogStick_dyn();

		virtual int getID( ::Dynamic rawID);
		::Dynamic getID_dyn();

		virtual  ::Dynamic getRawID(int ID);
		::Dynamic getRawID_dyn();

		bool getGlobalBottomIsAccept();
		::Dynamic getGlobalBottomIsAccept_dyn();

		virtual bool isAxisFlipped( ::Dynamic axisID);
		::Dynamic isAxisFlipped_dyn();

		virtual bool isAxisForMotion( ::Dynamic ID);
		::Dynamic isAxisForMotion_dyn();

		virtual  ::flixel::input::gamepad::FlxGamepadAttachment set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		::Dynamic set_attachment_dyn();

		virtual  ::flixel::input::gamepad::FlxGamepadMappedInput getMappedInput(int id);
		::Dynamic getMappedInput_dyn();

		virtual ::String getInputLabel(int id);
		::Dynamic getInputLabel_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping */ 