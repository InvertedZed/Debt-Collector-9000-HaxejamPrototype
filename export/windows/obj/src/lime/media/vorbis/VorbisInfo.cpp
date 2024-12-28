// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_vorbis_VorbisInfo
#include <lime/media/vorbis/VorbisInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9b59d7587cb992f_14_new,"lime.media.vorbis.VorbisInfo","new",0xb7112dcb,"lime.media.vorbis.VorbisInfo.new","lime/media/vorbis/VorbisInfo.hx",14,0x2a124b26)
namespace lime{
namespace media{
namespace vorbis{

void VorbisInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d9b59d7587cb992f_14_new)
            	}

Dynamic VorbisInfo_obj::__CreateEmpty() { return new VorbisInfo_obj; }

void *VorbisInfo_obj::_hx_vtable = 0;

Dynamic VorbisInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VorbisInfo_obj > _hx_result = new VorbisInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VorbisInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07bc4143;
}


VorbisInfo_obj::VorbisInfo_obj()
{
}

::hx::Val VorbisInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return ::hx::Val( rate ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitrateLower") ) { return ::hx::Val( bitrateLower ); }
		if (HX_FIELD_EQ(inName,"bitrateUpper") ) { return ::hx::Val( bitrateUpper ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitrateNominal") ) { return ::hx::Val( bitrateNominal ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VorbisInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitrateLower") ) { bitrateLower=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitrateUpper") ) { bitrateUpper=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitrateNominal") ) { bitrateNominal=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VorbisInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitrateLower",94,f0,d0,09));
	outFields->push(HX_("bitrateNominal",6f,84,28,68));
	outFields->push(HX_("bitrateUpper",f5,0f,10,39));
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("rate",e0,52,a4,4b));
	outFields->push(HX_("version",18,e7,f1,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VorbisInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VorbisInfo_obj,bitrateLower),HX_("bitrateLower",94,f0,d0,09)},
	{::hx::fsInt,(int)offsetof(VorbisInfo_obj,bitrateNominal),HX_("bitrateNominal",6f,84,28,68)},
	{::hx::fsInt,(int)offsetof(VorbisInfo_obj,bitrateUpper),HX_("bitrateUpper",f5,0f,10,39)},
	{::hx::fsInt,(int)offsetof(VorbisInfo_obj,channels),HX_("channels",50,aa,ee,6a)},
	{::hx::fsInt,(int)offsetof(VorbisInfo_obj,rate),HX_("rate",e0,52,a4,4b)},
	{::hx::fsInt,(int)offsetof(VorbisInfo_obj,version),HX_("version",18,e7,f1,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VorbisInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String VorbisInfo_obj_sMemberFields[] = {
	HX_("bitrateLower",94,f0,d0,09),
	HX_("bitrateNominal",6f,84,28,68),
	HX_("bitrateUpper",f5,0f,10,39),
	HX_("channels",50,aa,ee,6a),
	HX_("rate",e0,52,a4,4b),
	HX_("version",18,e7,f1,7c),
	::String(null()) };

::hx::Class VorbisInfo_obj::__mClass;

void VorbisInfo_obj::__register()
{
	VorbisInfo_obj _hx_dummy;
	VorbisInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.vorbis.VorbisInfo",59,ec,45,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VorbisInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VorbisInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VorbisInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VorbisInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace vorbis
