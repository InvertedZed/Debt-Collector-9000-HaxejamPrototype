// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__flixel_images_transitions_square_png
#include <__ASSET__flixel_images_transitions_square_png.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc9ea02fe2e2085e_302_new,"__ASSET__flixel_images_transitions_square_png","new",0x4d3675ae,"__ASSET__flixel_images_transitions_square_png.new","lime/_internal/macros/AssetsMacro.hx",302,0xc651f030)
HX_LOCAL_STACK_FRAME(_hx_pos_cc9ea02fe2e2085e_156_boot,"__ASSET__flixel_images_transitions_square_png","boot",0x3a898324,"__ASSET__flixel_images_transitions_square_png.boot","lime/_internal/macros/AssetsMacro.hx",156,0xc651f030)

void __ASSET__flixel_images_transitions_square_png_obj::__construct( ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type){
            	HX_STACKFRAME(&_hx_pos_cc9ea02fe2e2085e_302_new)
HXLINE( 303)		super::__construct(null(),null(),null(),null(),null(),null(),null());
HXLINE( 305)		this->_hx___fromBytes(::haxe::Resource_obj::getBytes(HX_("__ASSET__:image___ASSET__flixel_images_transitions_square_png",6e,55,71,54)),null());
            	}

Dynamic __ASSET__flixel_images_transitions_square_png_obj::__CreateEmpty() { return new __ASSET__flixel_images_transitions_square_png_obj; }

void *__ASSET__flixel_images_transitions_square_png_obj::_hx_vtable = 0;

Dynamic __ASSET__flixel_images_transitions_square_png_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< __ASSET__flixel_images_transitions_square_png_obj > _hx_result = new __ASSET__flixel_images_transitions_square_png_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool __ASSET__flixel_images_transitions_square_png_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x101cdc88) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x101cdc88;
	} else {
		return inClassId==(int)0x33f052f7;
	}
}

::String __ASSET__flixel_images_transitions_square_png_obj::resourceName;


::hx::ObjectPtr< __ASSET__flixel_images_transitions_square_png_obj > __ASSET__flixel_images_transitions_square_png_obj::__new( ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type) {
	::hx::ObjectPtr< __ASSET__flixel_images_transitions_square_png_obj > __this = new __ASSET__flixel_images_transitions_square_png_obj();
	__this->__construct(buffer,offsetX,offsetY,width,height,color,type);
	return __this;
}

::hx::ObjectPtr< __ASSET__flixel_images_transitions_square_png_obj > __ASSET__flixel_images_transitions_square_png_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type) {
	__ASSET__flixel_images_transitions_square_png_obj *__this = (__ASSET__flixel_images_transitions_square_png_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__flixel_images_transitions_square_png_obj), true, "__ASSET__flixel_images_transitions_square_png"));
	*(void **)__this = __ASSET__flixel_images_transitions_square_png_obj::_hx_vtable;
	__this->__construct(buffer,offsetX,offsetY,width,height,color,type);
	return __this;
}

__ASSET__flixel_images_transitions_square_png_obj::__ASSET__flixel_images_transitions_square_png_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *__ASSET__flixel_images_transitions_square_png_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo __ASSET__flixel_images_transitions_square_png_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &__ASSET__flixel_images_transitions_square_png_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void __ASSET__flixel_images_transitions_square_png_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__flixel_images_transitions_square_png_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__flixel_images_transitions_square_png_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_images_transitions_square_png_obj::resourceName,"resourceName");
};

#endif

::hx::Class __ASSET__flixel_images_transitions_square_png_obj::__mClass;

static ::String __ASSET__flixel_images_transitions_square_png_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void __ASSET__flixel_images_transitions_square_png_obj::__register()
{
	__ASSET__flixel_images_transitions_square_png_obj _hx_dummy;
	__ASSET__flixel_images_transitions_square_png_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("__ASSET__flixel_images_transitions_square_png",bc,c6,4a,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = __ASSET__flixel_images_transitions_square_png_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(__ASSET__flixel_images_transitions_square_png_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< __ASSET__flixel_images_transitions_square_png_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__flixel_images_transitions_square_png_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__flixel_images_transitions_square_png_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__flixel_images_transitions_square_png_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void __ASSET__flixel_images_transitions_square_png_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cc9ea02fe2e2085e_156_boot)
HXDLIN( 156)		resourceName = HX_("__ASSET__:image___ASSET__flixel_images_transitions_square_png",6e,55,71,54);
            	}
}
