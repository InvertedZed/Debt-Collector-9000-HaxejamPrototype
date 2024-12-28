// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_util_LoadResult
#define INCLUDED_flixel_util_LoadResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,LoadFailureType)
HX_DECLARE_CLASS2(flixel,util,LoadResult)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,SharedObject)
namespace flixel{
namespace util{


class LoadResult_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef LoadResult_obj OBJ_;

	public:
		LoadResult_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.util.LoadResult",9d,82,72,56); }
		::String __ToString() const { return HX_("LoadResult.",0b,af,27,20) + _hx_tag; }

		static ::flixel::util::LoadResult FAILURE( ::flixel::util::LoadFailureType type, ::openfl::net::SharedObject obj);
		static ::Dynamic FAILURE_dyn();
		static ::flixel::util::LoadResult SUCCESS( ::openfl::net::SharedObject obj);
		static ::Dynamic SUCCESS_dyn();
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_LoadResult */ 