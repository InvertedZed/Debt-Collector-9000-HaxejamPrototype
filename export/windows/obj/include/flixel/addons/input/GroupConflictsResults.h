// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_input_GroupConflictsResults
#define INCLUDED_flixel_addons_input_GroupConflictsResults

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,input,GroupConflict)
HX_DECLARE_CLASS3(flixel,addons,input,GroupConflictsResults)
namespace flixel{
namespace addons{
namespace input{


class GroupConflictsResults_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef GroupConflictsResults_obj OBJ_;

	public:
		GroupConflictsResults_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.input.GroupConflictsResults",c7,45,24,42); }
		::String __ToString() const { return HX_("GroupConflictsResults.",5a,2b,f5,82) + _hx_tag; }

		static ::flixel::addons::input::GroupConflictsResults Found(::Array< ::Dynamic> list);
		static ::Dynamic Found_dyn();
		static ::flixel::addons::input::GroupConflictsResults None;
		static inline ::flixel::addons::input::GroupConflictsResults None_dyn() { return None; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace input

#endif /* INCLUDED_flixel_addons_input_GroupConflictsResults */ 