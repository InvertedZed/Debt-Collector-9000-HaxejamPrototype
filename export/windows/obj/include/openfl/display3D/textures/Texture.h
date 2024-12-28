// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_display3D_textures_Texture
#define INCLUDED_openfl_display3D_textures_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,SamplerState)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES Texture_obj : public  ::openfl::display3D::textures::TextureBase_obj
{
	public:
		typedef  ::openfl::display3D::textures::TextureBase_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();

	public:
		enum { _hx_ClassId = 0x6d550de4 };

		void __construct( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.Texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D.textures.Texture"); }
		static ::hx::ObjectPtr< Texture_obj > __new( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);
		static ::hx::ObjectPtr< Texture_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Texture",bb,f0,31,6c); }

		static void __boot();
		static bool _hx___lowMemoryMode;
		void uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,::hx::Null< bool >  async);
		::Dynamic uploadCompressedTextureFromByteArray_dyn();

		void uploadFromBitmapData( ::openfl::display::BitmapData source,::hx::Null< int >  miplevel,::hx::Null< bool >  generateMipmap);
		::Dynamic uploadFromBitmapData_dyn();

		void uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,::hx::Null< int >  miplevel);
		::Dynamic uploadFromByteArray_dyn();

		void uploadFromTypedArray( ::lime::utils::ArrayBufferView data,::hx::Null< int >  miplevel);
		::Dynamic uploadFromTypedArray_dyn();

		bool _hx___setSamplerState( ::openfl::display::_internal::SamplerState state);

		void _hx___uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		::Dynamic _hx___uploadCompressedTextureFromByteArray_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_Texture */ 
