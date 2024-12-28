// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_util_FlxCollision
#define INCLUDED_flixel_util_FlxCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxCollision)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxCollision_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxCollision_obj OBJ_;
		FlxCollision_obj();

	public:
		enum { _hx_ClassId = 0x192d8842 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxCollision")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxCollision"); }

		inline static ::hx::ObjectPtr< FlxCollision_obj > __new() {
			::hx::ObjectPtr< FlxCollision_obj > __this = new FlxCollision_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxCollision_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxCollision_obj *__this = (FlxCollision_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxCollision_obj), false, "flixel.util.FlxCollision"));
			*(void **)__this = FlxCollision_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxCollision_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxCollision",c0,f1,22,f8); }

		static void __boot();
		static  ::flixel::math::FlxBasePoint pointA;
		static  ::flixel::math::FlxBasePoint pointB;
		static  ::flixel::math::FlxBasePoint centerA;
		static  ::flixel::math::FlxBasePoint centerB;
		static  ::flixel::math::FlxMatrix matrixA;
		static  ::flixel::math::FlxMatrix matrixB;
		static  ::flixel::math::FlxMatrix testMatrix;
		static  ::flixel::math::FlxRect boundsA;
		static  ::flixel::math::FlxRect boundsB;
		static  ::flixel::math::FlxRect intersect;
		static  ::openfl::geom::Rectangle flashRect;
		static bool pixelPerfectCheck( ::flixel::FlxSprite contact, ::flixel::FlxSprite target,::hx::Null< int >  alphaTolerance, ::flixel::FlxCamera camera);
		static ::Dynamic pixelPerfectCheck_dyn();

		static bool pixelPerfectPointCheck(int worldX,int worldY, ::flixel::FlxSprite target,::hx::Null< int >  alphaTolerance);
		static ::Dynamic pixelPerfectPointCheck_dyn();

		static  ::flixel::group::FlxTypedGroup createCameraWall( ::flixel::FlxCamera camera,::hx::Null< bool >  placeOutside,int thickness,::hx::Null< bool >  adjustWorldBounds);
		static ::Dynamic createCameraWall_dyn();

		static  ::flixel::math::FlxBasePoint calcRectEntry( ::flixel::math::FlxRect rect, ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result);
		static ::Dynamic calcRectEntry_dyn();

		static  ::flixel::math::FlxBasePoint calcRectExit( ::flixel::math::FlxRect rect, ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result);
		static ::Dynamic calcRectExit_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxCollision */ 
