// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_math__Matrix3_Matrix3_Impl_
#define INCLUDED_lime_math__Matrix3_Matrix3_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,CairoMatrix3)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,math,Vector4)
HX_DECLARE_CLASS3(lime,math,_Matrix3,Matrix3_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace math{
namespace _Matrix3{


class HXCPP_CLASS_ATTRIBUTES Matrix3_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Matrix3_Impl__obj OBJ_;
		Matrix3_Impl__obj();

	public:
		enum { _hx_ClassId = 0x41d5dec2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math._Matrix3.Matrix3_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.math._Matrix3.Matrix3_Impl_"); }

		inline static ::hx::ObjectPtr< Matrix3_Impl__obj > __new() {
			::hx::ObjectPtr< Matrix3_Impl__obj > __this = new Matrix3_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Matrix3_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Matrix3_Impl__obj *__this = (Matrix3_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Matrix3_Impl__obj), false, "lime.math._Matrix3.Matrix3_Impl_"));
			*(void **)__this = Matrix3_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Matrix3_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Matrix3_Impl_",d2,b8,59,d4); }

		static  ::lime::utils::ArrayBufferView _new(::hx::Null< Float >  a,::hx::Null< Float >  b,::hx::Null< Float >  c,::hx::Null< Float >  d,::hx::Null< Float >  tx,::hx::Null< Float >  ty);
		static ::Dynamic _new_dyn();

		static  ::lime::utils::ArrayBufferView clone( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic clone_dyn();

		static void concat( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView m);
		static ::Dynamic concat_dyn();

		static void copyColumnFrom( ::lime::utils::ArrayBufferView this1,int column, ::lime::math::Vector4 vector4);
		static ::Dynamic copyColumnFrom_dyn();

		static void copyColumnTo( ::lime::utils::ArrayBufferView this1,int column, ::lime::math::Vector4 vector4);
		static ::Dynamic copyColumnTo_dyn();

		static void copyFrom( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView sourceMatrix3);
		static ::Dynamic copyFrom_dyn();

		static void copyRowFrom( ::lime::utils::ArrayBufferView this1,int row, ::lime::math::Vector4 vector4);
		static ::Dynamic copyRowFrom_dyn();

		static void copyRowTo( ::lime::utils::ArrayBufferView this1,int row, ::lime::math::Vector4 vector4);
		static ::Dynamic copyRowTo_dyn();

		static void createBox( ::lime::utils::ArrayBufferView this1,Float scaleX,Float scaleY,::hx::Null< Float >  rotation,::hx::Null< Float >  xTranslate,::hx::Null< Float >  yTranslate);
		static ::Dynamic createBox_dyn();

		static void createGradientBox( ::lime::utils::ArrayBufferView this1,Float width,Float height,::hx::Null< Float >  rotation,::hx::Null< Float >  xTranslate,::hx::Null< Float >  yTranslate);
		static ::Dynamic createGradientBox_dyn();

		static bool equals( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView matrix3);
		static ::Dynamic equals_dyn();

		static  ::lime::math::Vector2 deltaTransformVector( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector2 Vector2, ::lime::math::Vector2 result);
		static ::Dynamic deltaTransformVector_dyn();

		static  ::lime::utils::ArrayBufferView fromCairoMatrix3( ::lime::math::CairoMatrix3 matrix);
		static ::Dynamic fromCairoMatrix3_dyn();

		static  ::lime::utils::ArrayBufferView fromFloat32Array( ::lime::utils::ArrayBufferView array);
		static ::Dynamic fromFloat32Array_dyn();

		static void identity( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic identity_dyn();

		static  ::lime::utils::ArrayBufferView invert( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic invert_dyn();

		static void rotate( ::lime::utils::ArrayBufferView this1,Float theta);
		static ::Dynamic rotate_dyn();

		static void scale( ::lime::utils::ArrayBufferView this1,Float sx,Float sy);
		static ::Dynamic scale_dyn();

		static void setRotation( ::lime::utils::ArrayBufferView this1,Float theta,::hx::Null< Float >  scale);
		static ::Dynamic setRotation_dyn();

		static void setTo( ::lime::utils::ArrayBufferView this1,Float a,Float b,Float c,Float d,Float tx,Float ty);
		static ::Dynamic setTo_dyn();

		static  ::lime::math::CairoMatrix3 toCairoMatrix3( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic toCairoMatrix3_dyn();

		static ::String toString( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic toString_dyn();

		static  ::lime::math::Rectangle transformRect( ::lime::utils::ArrayBufferView this1, ::lime::math::Rectangle rect, ::lime::math::Rectangle result);
		static ::Dynamic transformRect_dyn();

		static  ::lime::math::Vector2 transformVector( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector2 pos, ::lime::math::Vector2 result);
		static ::Dynamic transformVector_dyn();

		static void translate( ::lime::utils::ArrayBufferView this1,Float dx,Float dy);
		static ::Dynamic translate_dyn();

		static Float get_a( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_a_dyn();

		static Float set_a( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_a_dyn();

		static Float get_b( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_b_dyn();

		static Float set_b( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_b_dyn();

		static Float get_c( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_c_dyn();

		static Float set_c( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_c_dyn();

		static Float get_d( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_d_dyn();

		static Float set_d( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_d_dyn();

		static Float get_tx( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_tx_dyn();

		static Float set_tx( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_tx_dyn();

		static Float get_ty( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_ty_dyn();

		static Float set_ty( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_ty_dyn();

		static Float get( ::lime::utils::ArrayBufferView this1,int index);
		static ::Dynamic get_dyn();

		static Float set( ::lime::utils::ArrayBufferView this1,int index,Float value);
		static ::Dynamic set_dyn();

};

} // end namespace lime
} // end namespace math
} // end namespace _Matrix3

#endif /* INCLUDED_lime_math__Matrix3_Matrix3_Impl_ */ 