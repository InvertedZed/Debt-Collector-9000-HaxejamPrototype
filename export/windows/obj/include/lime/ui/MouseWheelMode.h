// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_ui_MouseWheelMode
#define INCLUDED_lime_ui_MouseWheelMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,ui,MouseWheelMode)
namespace lime{
namespace ui{


class MouseWheelMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef MouseWheelMode_obj OBJ_;

	public:
		MouseWheelMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime.ui.MouseWheelMode",1a,08,21,1a); }
		::String __ToString() const { return HX_("MouseWheelMode.",35,ef,de,4c) + _hx_tag; }

		static ::lime::ui::MouseWheelMode LINES;
		static inline ::lime::ui::MouseWheelMode LINES_dyn() { return LINES; }
		static ::lime::ui::MouseWheelMode PAGES;
		static inline ::lime::ui::MouseWheelMode PAGES_dyn() { return PAGES; }
		static ::lime::ui::MouseWheelMode PIXELS;
		static inline ::lime::ui::MouseWheelMode PIXELS_dyn() { return PIXELS; }
		static ::lime::ui::MouseWheelMode UNKNOWN;
		static inline ::lime::ui::MouseWheelMode UNKNOWN_dyn() { return UNKNOWN; }
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_MouseWheelMode */ 
