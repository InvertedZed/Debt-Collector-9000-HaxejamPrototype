// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_utils_IExternalizable
#define INCLUDED_openfl_utils_IExternalizable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(openfl,utils,IExternalizable)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES IExternalizable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_readExternal)(::Dynamic input); 
		static inline void readExternal( ::Dynamic _hx_,::Dynamic input) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IExternalizable_obj *>(_hx_.mPtr->_hx_getInterface(0x58114efe)))->_hx_readExternal)(input);
		}
		void (::hx::Object :: *_hx_writeExternal)(::Dynamic output); 
		static inline void writeExternal( ::Dynamic _hx_,::Dynamic output) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IExternalizable_obj *>(_hx_.mPtr->_hx_getInterface(0x58114efe)))->_hx_writeExternal)(output);
		}
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_IExternalizable */ 
