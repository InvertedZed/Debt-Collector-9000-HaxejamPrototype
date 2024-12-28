// Generated by Haxe 4.3.6
#ifndef INCLUDED_backend_helpers_DebugStats
#define INCLUDED_backend_helpers_DebugStats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
HX_DECLARE_CLASS2(backend,helpers,DebugStats)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace backend{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES DebugStats_obj : public  ::openfl::text::TextField_obj
{
	public:
		typedef  ::openfl::text::TextField_obj super;
		typedef DebugStats_obj OBJ_;
		DebugStats_obj();

	public:
		enum { _hx_ClassId = 0x1e90ad6d };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.helpers.DebugStats")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.helpers.DebugStats"); }
		static ::hx::ObjectPtr< DebugStats_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color);
		static ::hx::ObjectPtr< DebugStats_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DebugStats_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DebugStats",ec,4a,a0,79); }

		int currentFPS;
		int cacheCount;
		Float currentTime;
		::Array< Float > times;
		void _hx___enterFrame(int _tmp_deltaTime);

};

} // end namespace backend
} // end namespace helpers

#endif /* INCLUDED_backend_helpers_DebugStats */ 
