// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_IFlxInputText
#include <flixel/text/IFlxInputText.h>
#endif
#ifndef INCLUDED_flixel_text_TypingAction
#include <flixel/text/TypingAction.h>
#endif

namespace flixel{
namespace text{


static ::String IFlxInputText_obj_sMemberFields[] = {
	HX_("editable",a4,04,a6,d5),
	HX_("startFocus",16,38,a0,20),
	HX_("endFocus",fd,f1,86,02),
	HX_("dispatchTypingAction",67,ab,ef,f4),
	::String(null()) };

::hx::Class IFlxInputText_obj::__mClass;

void IFlxInputText_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text.IFlxInputText",3f,24,ad,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxInputText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x7c30ed85 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace text
