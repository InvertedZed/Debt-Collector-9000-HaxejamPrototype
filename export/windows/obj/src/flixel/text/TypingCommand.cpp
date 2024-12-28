// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_TypingCommand
#include <flixel/text/TypingCommand.h>
#endif
namespace flixel{
namespace text{

::flixel::text::TypingCommand TypingCommand_obj::COPY;

::flixel::text::TypingCommand TypingCommand_obj::CUT;

::flixel::text::TypingCommand TypingCommand_obj::DELETE_LEFT;

::flixel::text::TypingCommand TypingCommand_obj::DELETE_RIGHT;

::flixel::text::TypingCommand TypingCommand_obj::NEW_LINE;

::flixel::text::TypingCommand TypingCommand_obj::PASTE;

::flixel::text::TypingCommand TypingCommand_obj::SELECT_ALL;

bool TypingCommand_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("COPY",b5,83,85,2c)) { outValue = TypingCommand_obj::COPY; return true; }
	if (inName==HX_("CUT",62,21,33,00)) { outValue = TypingCommand_obj::CUT; return true; }
	if (inName==HX_("DELETE_LEFT",db,83,97,3a)) { outValue = TypingCommand_obj::DELETE_LEFT; return true; }
	if (inName==HX_("DELETE_RIGHT",68,e9,08,81)) { outValue = TypingCommand_obj::DELETE_RIGHT; return true; }
	if (inName==HX_("NEW_LINE",93,27,39,51)) { outValue = TypingCommand_obj::NEW_LINE; return true; }
	if (inName==HX_("PASTE",33,8b,44,3b)) { outValue = TypingCommand_obj::PASTE; return true; }
	if (inName==HX_("SELECT_ALL",fe,ce,07,ca)) { outValue = TypingCommand_obj::SELECT_ALL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TypingCommand_obj)

int TypingCommand_obj::__FindIndex(::String inName)
{
	if (inName==HX_("COPY",b5,83,85,2c)) return 3;
	if (inName==HX_("CUT",62,21,33,00)) return 4;
	if (inName==HX_("DELETE_LEFT",db,83,97,3a)) return 1;
	if (inName==HX_("DELETE_RIGHT",68,e9,08,81)) return 2;
	if (inName==HX_("NEW_LINE",93,27,39,51)) return 0;
	if (inName==HX_("PASTE",33,8b,44,3b)) return 5;
	if (inName==HX_("SELECT_ALL",fe,ce,07,ca)) return 6;
	return super::__FindIndex(inName);
}

int TypingCommand_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("COPY",b5,83,85,2c)) return 0;
	if (inName==HX_("CUT",62,21,33,00)) return 0;
	if (inName==HX_("DELETE_LEFT",db,83,97,3a)) return 0;
	if (inName==HX_("DELETE_RIGHT",68,e9,08,81)) return 0;
	if (inName==HX_("NEW_LINE",93,27,39,51)) return 0;
	if (inName==HX_("PASTE",33,8b,44,3b)) return 0;
	if (inName==HX_("SELECT_ALL",fe,ce,07,ca)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val TypingCommand_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("COPY",b5,83,85,2c)) return COPY;
	if (inName==HX_("CUT",62,21,33,00)) return CUT;
	if (inName==HX_("DELETE_LEFT",db,83,97,3a)) return DELETE_LEFT;
	if (inName==HX_("DELETE_RIGHT",68,e9,08,81)) return DELETE_RIGHT;
	if (inName==HX_("NEW_LINE",93,27,39,51)) return NEW_LINE;
	if (inName==HX_("PASTE",33,8b,44,3b)) return PASTE;
	if (inName==HX_("SELECT_ALL",fe,ce,07,ca)) return SELECT_ALL;
	return super::__Field(inName,inCallProp);
}

static ::String TypingCommand_obj_sStaticFields[] = {
	HX_("NEW_LINE",93,27,39,51),
	HX_("DELETE_LEFT",db,83,97,3a),
	HX_("DELETE_RIGHT",68,e9,08,81),
	HX_("COPY",b5,83,85,2c),
	HX_("CUT",62,21,33,00),
	HX_("PASTE",33,8b,44,3b),
	HX_("SELECT_ALL",fe,ce,07,ca),
	::String(null())
};

::hx::Class TypingCommand_obj::__mClass;

Dynamic __Create_TypingCommand_obj() { return new TypingCommand_obj; }

void TypingCommand_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.text.TypingCommand",c5,3e,00,97), ::hx::TCanCast< TypingCommand_obj >,TypingCommand_obj_sStaticFields,0,
	&__Create_TypingCommand_obj, &__Create,
	&super::__SGetClass(), &CreateTypingCommand_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TypingCommand_obj::__GetStatic;
}

void TypingCommand_obj::__boot()
{
COPY = ::hx::CreateConstEnum< TypingCommand_obj >(HX_("COPY",b5,83,85,2c),3);
CUT = ::hx::CreateConstEnum< TypingCommand_obj >(HX_("CUT",62,21,33,00),4);
DELETE_LEFT = ::hx::CreateConstEnum< TypingCommand_obj >(HX_("DELETE_LEFT",db,83,97,3a),1);
DELETE_RIGHT = ::hx::CreateConstEnum< TypingCommand_obj >(HX_("DELETE_RIGHT",68,e9,08,81),2);
NEW_LINE = ::hx::CreateConstEnum< TypingCommand_obj >(HX_("NEW_LINE",93,27,39,51),0);
PASTE = ::hx::CreateConstEnum< TypingCommand_obj >(HX_("PASTE",33,8b,44,3b),5);
SELECT_ALL = ::hx::CreateConstEnum< TypingCommand_obj >(HX_("SELECT_ALL",fe,ce,07,ca),6);
}


} // end namespace flixel
} // end namespace text