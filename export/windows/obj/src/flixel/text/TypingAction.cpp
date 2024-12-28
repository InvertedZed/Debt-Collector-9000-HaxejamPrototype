// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_MoveCursorAction
#include <flixel/text/MoveCursorAction.h>
#endif
#ifndef INCLUDED_flixel_text_TypingAction
#include <flixel/text/TypingAction.h>
#endif
#ifndef INCLUDED_flixel_text_TypingCommand
#include <flixel/text/TypingCommand.h>
#endif
namespace flixel{
namespace text{

::flixel::text::TypingAction TypingAction_obj::ADD_TEXT(::String text)
{
	return ::hx::CreateEnum< TypingAction_obj >(HX_("ADD_TEXT",eb,be,92,ac),0,1)->_hx_init(0,text);
}

::flixel::text::TypingAction TypingAction_obj::COMMAND( ::flixel::text::TypingCommand cmd)
{
	return ::hx::CreateEnum< TypingAction_obj >(HX_("COMMAND",2b,45,41,01),2,1)->_hx_init(0,cmd);
}

::flixel::text::TypingAction TypingAction_obj::MOVE_CURSOR( ::flixel::text::MoveCursorAction type,bool shiftKey)
{
	return ::hx::CreateEnum< TypingAction_obj >(HX_("MOVE_CURSOR",84,95,75,c1),1,2)->_hx_init(0,type)->_hx_init(1,shiftKey);
}

bool TypingAction_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ADD_TEXT",eb,be,92,ac)) { outValue = TypingAction_obj::ADD_TEXT_dyn(); return true; }
	if (inName==HX_("COMMAND",2b,45,41,01)) { outValue = TypingAction_obj::COMMAND_dyn(); return true; }
	if (inName==HX_("MOVE_CURSOR",84,95,75,c1)) { outValue = TypingAction_obj::MOVE_CURSOR_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TypingAction_obj)

int TypingAction_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ADD_TEXT",eb,be,92,ac)) return 0;
	if (inName==HX_("COMMAND",2b,45,41,01)) return 2;
	if (inName==HX_("MOVE_CURSOR",84,95,75,c1)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypingAction_obj,ADD_TEXT,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypingAction_obj,COMMAND,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypingAction_obj,MOVE_CURSOR,return)

int TypingAction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ADD_TEXT",eb,be,92,ac)) return 1;
	if (inName==HX_("COMMAND",2b,45,41,01)) return 1;
	if (inName==HX_("MOVE_CURSOR",84,95,75,c1)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val TypingAction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ADD_TEXT",eb,be,92,ac)) return ADD_TEXT_dyn();
	if (inName==HX_("COMMAND",2b,45,41,01)) return COMMAND_dyn();
	if (inName==HX_("MOVE_CURSOR",84,95,75,c1)) return MOVE_CURSOR_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String TypingAction_obj_sStaticFields[] = {
	HX_("ADD_TEXT",eb,be,92,ac),
	HX_("MOVE_CURSOR",84,95,75,c1),
	HX_("COMMAND",2b,45,41,01),
	::String(null())
};

::hx::Class TypingAction_obj::__mClass;

Dynamic __Create_TypingAction_obj() { return new TypingAction_obj; }

void TypingAction_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.text.TypingAction",7c,3b,13,14), ::hx::TCanCast< TypingAction_obj >,TypingAction_obj_sStaticFields,0,
	&__Create_TypingAction_obj, &__Create,
	&super::__SGetClass(), &CreateTypingAction_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TypingAction_obj::__GetStatic;
}

void TypingAction_obj::__boot()
{
}


} // end namespace flixel
} // end namespace text
