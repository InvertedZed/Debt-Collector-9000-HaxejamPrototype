// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_LoadFailureType
#include <flixel/util/LoadFailureType.h>
#endif
#ifndef INCLUDED_flixel_util_LoadResult
#include <flixel/util/LoadResult.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSave_FlxSharedObject
#include <flixel/util/_FlxSave/FlxSharedObject.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObject
#include <openfl/net/SharedObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a670326751daced_135_new,"flixel.util.FlxSave","new",0x2c4b0107,"flixel.util.FlxSave.new","flixel/util/FlxSave.hx",135,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_154_destroy,"flixel.util.FlxSave","destroy",0x7bc03d21,"flixel.util.FlxSave.destroy","flixel/util/FlxSave.hx",154,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_175_bind,"flixel.util.FlxSave","bind",0x8d6a5736,"flixel.util.FlxSave.bind","flixel/util/FlxSave.hx",175,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_234_mergeDataFrom,"flixel.util.FlxSave","mergeDataFrom",0x268f82f3,"flixel.util.FlxSave.mergeDataFrom","flixel/util/FlxSave.hx",234,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_266_mergeData,"flixel.util.FlxSave","mergeData",0x8fb288e9,"flixel.util.FlxSave.mergeData","flixel/util/FlxSave.hx",266,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_292_close,"flixel.util.FlxSave","close",0xc505001f,"flixel.util.FlxSave.close","flixel/util/FlxSave.hx",292,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_305_flush,"flixel.util.FlxSave","flush",0x7f3d4b2b,"flixel.util.FlxSave.flush","flixel/util/FlxSave.hx",305,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_334_erase,"flixel.util.FlxSave","erase",0xefbed14d,"flixel.util.FlxSave.erase","flixel/util/FlxSave.hx",334,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_349_checkStatus,"flixel.util.FlxSave","checkStatus",0x423069c1,"flixel.util.FlxSave.checkStatus","flixel/util/FlxSave.hx",349,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_374_get_name,"flixel.util.FlxSave","get_name",0xc44e3fcd,"flixel.util.FlxSave.get_name","flixel/util/FlxSave.hx",374,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_384_get_path,"flixel.util.FlxSave","get_path",0xc5a0b327,"flixel.util.FlxSave.get_path","flixel/util/FlxSave.hx",384,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_394_get_isBound,"flixel.util.FlxSave","get_isBound",0x339f63b2,"flixel.util.FlxSave.get_isBound","flixel/util/FlxSave.hx",394,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_403_isEmpty,"flixel.util.FlxSave","isEmpty",0x6399ee6a,"flixel.util.FlxSave.isEmpty","flixel/util/FlxSave.hx",403,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_71_hasInvalidChars,"flixel.util.FlxSave","hasInvalidChars",0xad0a4c07,"flixel.util.FlxSave.hasInvalidChars","flixel/util/FlxSave.hx",71,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_85_validate,"flixel.util.FlxSave","validate",0x0077e28f,"flixel.util.FlxSave.validate","flixel/util/FlxSave.hx",85,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_93_validateAndWarn,"flixel.util.FlxSave","validateAndWarn",0xe06885ee,"flixel.util.FlxSave.validateAndWarn","flixel/util/FlxSave.hx",93,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_111_resolveFlixelClasses,"flixel.util.FlxSave","resolveFlixelClasses",0x2d58f497,"flixel.util.FlxSave.resolveFlixelClasses","flixel/util/FlxSave.hx",111,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_60_boot,"flixel.util.FlxSave","boot",0x8d6ee5ab,"flixel.util.FlxSave.boot","flixel/util/FlxSave.hx",60,0xc43cd0a9)
namespace flixel{
namespace util{

void FlxSave_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_135_new)
HXDLIN( 135)		this->status = ::flixel::util::FlxSaveStatus_obj::EMPTY_dyn();
            	}

Dynamic FlxSave_obj::__CreateEmpty() { return new FlxSave_obj; }

void *FlxSave_obj::_hx_vtable = 0;

Dynamic FlxSave_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSave_obj > _hx_result = new FlxSave_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSave_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x051f3151;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::util::FlxSave_obj::destroy,
};

void *FlxSave_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxSave_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_154_destroy)
HXLINE( 155)		this->_sharedObject = null();
HXLINE( 156)		this->status = ::flixel::util::FlxSaveStatus_obj::EMPTY_dyn();
HXLINE( 157)		this->data = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

bool FlxSave_obj::bind(::String name,::String path, ::Dynamic backupParser){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_175_bind)
HXLINE( 176)		this->destroy();
HXLINE( 178)		name = ::flixel::util::FlxSave_obj::validateAndWarn(name,HX_("name",4b,72,ff,48));
HXLINE( 179)		if (::hx::IsNotNull( path )) {
HXLINE( 180)			path = ::flixel::util::FlxSave_obj::validateAndWarn(path,HX_("path",a5,e5,51,4a));
            		}
HXLINE( 182)		try {
            			HX_STACK_CATCHABLE( ::openfl::errors::Error, 0);
HXLINE( 184)			 ::flixel::util::LoadResult _g = ::flixel::util::_FlxSave::FlxSharedObject_obj::getLocal(name,path);
HXDLIN( 184)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 186)					 ::openfl::net::SharedObject sharedObject = _g->_hx_getObject(0).StaticCast<  ::openfl::net::SharedObject >();
HXLINE( 187)					this->_sharedObject = sharedObject;
HXLINE( 188)					this->data = this->_sharedObject->data;
HXLINE( 189)					this->status = ::flixel::util::FlxSaveStatus_obj::BOUND(name,path);
HXLINE( 190)					return true;
            				}
            				break;
            				case (int)1: {
HXLINE( 208)					 ::flixel::util::LoadFailureType _g1 = _g->_hx_getObject(0).StaticCast<  ::flixel::util::LoadFailureType >();
HXDLIN( 208)					 ::openfl::net::SharedObject _g2 = _g->_hx_getObject(1).StaticCast<  ::openfl::net::SharedObject >();
HXDLIN( 208)					if ((_g1->_hx_getIndex() == 3)) {
HXLINE( 192)						::String rawData = _g1->_hx_getString(0);
HXDLIN( 192)						 ::haxe::Exception exception = _g1->_hx_getObject(1).StaticCast<  ::haxe::Exception >();
HXDLIN( 192)						 ::openfl::net::SharedObject sharedObject1 = _g2;
HXDLIN( 192)						if (::hx::IsNotNull( backupParser )) {
HXLINE( 194)							 ::Dynamic parsedData = backupParser(rawData,exception);
HXLINE( 195)							if (::hx::IsNull( parsedData )) {
HXLINE( 197)								this->status = ::flixel::util::FlxSaveStatus_obj::LOAD_ERROR(::flixel::util::LoadFailureType_obj::PARSING(rawData,exception));
HXLINE( 198)								return false;
            							}
HXLINE( 201)							this->_sharedObject = sharedObject1;
HXLINE( 202)							this->data = parsedData;
HXLINE( 204)							sharedObject1->data = parsedData;
HXLINE( 205)							this->status = ::flixel::util::FlxSaveStatus_obj::BOUND(name,path);
HXLINE( 206)							return true;
            						}
            						else {
HXLINE( 208)							 ::flixel::util::LoadFailureType type = _g1;
HXDLIN( 208)							 ::openfl::net::SharedObject sharedObject2 = _g2;
HXLINE( 209)							this->_sharedObject = sharedObject2;
HXLINE( 210)							this->status = ::flixel::util::FlxSaveStatus_obj::LOAD_ERROR(type);
HXLINE( 211)							return false;
            						}
            					}
            					else {
HXLINE( 208)						 ::flixel::util::LoadFailureType type1 = _g1;
HXDLIN( 208)						 ::openfl::net::SharedObject sharedObject3 = _g2;
HXLINE( 209)						this->_sharedObject = sharedObject3;
HXLINE( 210)						this->status = ::flixel::util::FlxSaveStatus_obj::LOAD_ERROR(type1);
HXLINE( 211)						return false;
            					}
            				}
            				break;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::openfl::errors::Error >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::openfl::errors::Error e = _hx_e;
HXLINE( 216)				{
HXLINE( 216)					 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 216)					 ::Dynamic data = ((((((HX_("Error:",92,f7,fc,85) + e->get_message()) + HX_(" name:\"",d3,e5,27,50)) + name) + HX_("\", path:\"",23,f3,3c,fa)) + path) + HX_("\".",cc,1d,00,00));
HXDLIN( 216)					_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            				}
HXLINE( 217)				this->destroy();
HXLINE( 218)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 182)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSave_obj,bind,return )

bool FlxSave_obj::mergeDataFrom(::String name,::String path,::hx::Null< bool >  __o_overwrite,::hx::Null< bool >  __o_eraseSave,::hx::Null< int >  __o_minFileSize){
            		bool overwrite = __o_overwrite.Default(false);
            		bool eraseSave = __o_eraseSave.Default(true);
            		int minFileSize = __o_minFileSize.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_2a670326751daced_234_mergeDataFrom)
HXLINE( 235)		if (!(this->checkStatus())) {
HXLINE( 236)			return false;
            		}
HXLINE( 238)		 ::flixel::util::FlxSave oldSave =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 240)		if (oldSave->bind(name,path,null())) {
HXLINE( 242)			bool success = this->mergeData(oldSave->data,overwrite,minFileSize);
HXLINE( 244)			if (eraseSave) {
HXLINE( 245)				oldSave->erase();
            			}
HXLINE( 246)			oldSave->destroy();
HXLINE( 249)			return success;
            		}
HXLINE( 252)		oldSave->destroy();
HXLINE( 254)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSave_obj,mergeDataFrom,return )

bool FlxSave_obj::mergeData( ::Dynamic sourceData,::hx::Null< bool >  __o_overwrite,::hx::Null< int >  __o_minFileSize){
            		bool overwrite = __o_overwrite.Default(false);
            		int minFileSize = __o_minFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_266_mergeData)
HXLINE( 267)		bool hasAnyField = false;
HXLINE( 268)		{
HXLINE( 268)			int _g = 0;
HXDLIN( 268)			::Array< ::String > _g1 = ::Reflect_obj::fields(sourceData);
HXDLIN( 268)			while((_g < _g1->length)){
HXLINE( 268)				::String field = _g1->__get(_g);
HXDLIN( 268)				_g = (_g + 1);
HXLINE( 270)				hasAnyField = true;
HXLINE( 272)				bool _hx_tmp;
HXDLIN( 272)				if (!(overwrite)) {
HXLINE( 272)					_hx_tmp = !(::Reflect_obj::hasField(this->data,field));
            				}
            				else {
HXLINE( 272)					_hx_tmp = true;
            				}
HXDLIN( 272)				if (_hx_tmp) {
HXLINE( 273)					 ::Dynamic _hx_tmp1 = this->data;
HXDLIN( 273)					::Reflect_obj::setField(_hx_tmp1,field,::Reflect_obj::field(sourceData,field));
            				}
            			}
            		}
HXLINE( 277)		if (hasAnyField) {
HXLINE( 278)			return this->flush(minFileSize);
            		}
HXLINE( 280)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSave_obj,mergeData,return )

bool FlxSave_obj::close(::hx::Null< int >  __o_minFileSize){
            		int minFileSize = __o_minFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_292_close)
HXLINE( 293)		bool success = this->flush(minFileSize);
HXLINE( 294)		this->destroy();
HXLINE( 295)		return success;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,close,return )

bool FlxSave_obj::flush(::hx::Null< int >  __o_minFileSize){
            		int minFileSize = __o_minFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_305_flush)
HXLINE( 306)		if (!(this->checkStatus())) {
HXLINE( 307)			return false;
            		}
HXLINE( 309)		try {
            			HX_STACK_CATCHABLE( ::openfl::errors::Error, 0);
HXLINE( 311)			 ::Dynamic result = this->_sharedObject->flush(minFileSize);
HXLINE( 313)			if (::hx::IsNotEq( result,0 )) {
HXLINE( 314)				this->status = ::flixel::util::FlxSaveStatus_obj::ERROR(HX_("FlxSave is requesting extra storage space.",65,ed,43,59));
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::openfl::errors::Error >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::openfl::errors::Error e = _hx_e;
HXLINE( 318)				this->status = ::flixel::util::FlxSaveStatus_obj::ERROR(HX_("There was an problem flushing the save data.",31,08,61,29));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 321)		this->checkStatus();
HXLINE( 323)		 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 323)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 323)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 323)			::String _g2 = _g->_hx_getString(1);
HXDLIN( 323)			return true;
            		}
            		else {
HXLINE( 323)			return false;
            		}
HXDLIN( 323)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,flush,return )

bool FlxSave_obj::erase(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_334_erase)
HXLINE( 335)		if (!(this->checkStatus())) {
HXLINE( 336)			return false;
            		}
HXLINE( 338)		this->_sharedObject->clear();
HXLINE( 339)		this->data =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 340)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::checkStatus(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_349_checkStatus)
HXLINE( 350)		{
HXLINE( 350)			 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 350)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 355)					::flixel::FlxG_obj::log->advanced(HX_("You must call save.bind() before you can read or write data.",fb,dd,51,dc),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            				break;
            				case (int)1: {
HXLINE( 352)					::String name = _g->_hx_getString(0);
HXDLIN( 352)					::String path = _g->_hx_getString(1);
HXLINE( 353)					return true;
            				}
            				break;
            				case (int)2: {
HXLINE( 356)					::String msg = _g->_hx_getString(0);
HXLINE( 357)					::flixel::FlxG_obj::log->advanced(msg,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            				}
            				break;
            				case (int)3: {
HXLINE( 364)					 ::flixel::util::LoadFailureType _g1 = _g->_hx_getObject(0).StaticCast<  ::flixel::util::LoadFailureType >();
HXDLIN( 364)					switch((int)(_g1->_hx_getIndex())){
            						case (int)0: {
HXLINE( 360)							::String name1 = _g1->_hx_getString(0);
HXDLIN( 360)							::String reason = _g1->_hx_getString(1);
HXLINE( 361)							{
HXLINE( 361)								::String _hx_tmp;
HXDLIN( 361)								if (::hx::IsNull( reason )) {
HXLINE( 361)									_hx_tmp = HX_("",00,00,00,00);
            								}
            								else {
HXLINE( 361)									_hx_tmp = reason;
            								}
HXDLIN( 361)								::flixel::FlxG_obj::log->advanced(((((HX_("Invalid name:\"",dc,fb,f0,ea) + name1) + HX_("\", ",16,f3,19,00)) + _hx_tmp) + HX_(".",2e,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 362)							::String path1 = _g1->_hx_getString(0);
HXDLIN( 362)							::String reason1 = _g1->_hx_getString(1);
HXLINE( 363)							{
HXLINE( 363)								::String _hx_tmp1;
HXDLIN( 363)								if (::hx::IsNull( reason1 )) {
HXLINE( 363)									_hx_tmp1 = HX_("",00,00,00,00);
            								}
            								else {
HXLINE( 363)									_hx_tmp1 = reason1;
            								}
HXDLIN( 363)								::flixel::FlxG_obj::log->advanced(((((HX_("Invalid path:\"",b6,79,4a,bc) + path1) + HX_("\", ",16,f3,19,00)) + _hx_tmp1) + HX_(".",2e,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 358)							 ::haxe::Exception e = _g1->_hx_getObject(0).StaticCast<  ::haxe::Exception >();
HXLINE( 359)							{
HXLINE( 359)								 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 359)								 ::Dynamic data = (HX_("IO ERROR: ",14,4a,e8,7d) + e->get_message());
HXDLIN( 359)								_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 364)							::String rawData = _g1->_hx_getString(0);
HXDLIN( 364)							 ::haxe::Exception e1 = _g1->_hx_getObject(1).StaticCast<  ::haxe::Exception >();
HXLINE( 365)							{
HXLINE( 365)								 ::flixel::_hx_system::frontEnds::LogFrontEnd _this1 = ::flixel::FlxG_obj::log;
HXDLIN( 365)								 ::Dynamic data1 = ((((HX_("Error parsing \"",ba,8d,7f,0a) + rawData) + HX_("\", ",16,f3,19,00)) + e1->get_message()) + HX_(".",2e,00,00,00));
HXDLIN( 365)								_this1->advanced(data1,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            							}
            						}
            						break;
            					}
            				}
            				break;
            			}
            		}
HXLINE( 369)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkStatus,return )

::String FlxSave_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_374_get_name)
HXDLIN( 374)		 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 374)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 377)			::String _g1 = _g->_hx_getString(1);
HXDLIN( 377)			::String n = _g->_hx_getString(0);
HXDLIN( 377)			return n;
            		}
            		else {
HXLINE( 378)			return null();
            		}
HXLINE( 374)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,get_name,return )

::String FlxSave_obj::get_path(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_384_get_path)
HXDLIN( 384)		 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 384)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 387)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 387)			::String p = _g->_hx_getString(1);
HXDLIN( 387)			return p;
            		}
            		else {
HXLINE( 388)			return null();
            		}
HXLINE( 384)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,get_path,return )

bool FlxSave_obj::get_isBound(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_394_get_isBound)
HXDLIN( 394)		 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 394)		if ((_g->_hx_getIndex() == 1)) {
HXDLIN( 394)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 394)			::String _g2 = _g->_hx_getString(1);
HXDLIN( 394)			return true;
            		}
            		else {
HXDLIN( 394)			return false;
            		}
HXDLIN( 394)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,get_isBound,return )

bool FlxSave_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_403_isEmpty)
HXDLIN( 403)		if (::hx::IsNotNull( this->data )) {
HXDLIN( 403)			return (::Reflect_obj::fields(this->data)->length == 0);
            		}
            		else {
HXDLIN( 403)			return true;
            		}
HXDLIN( 403)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,isEmpty,return )

 ::EReg FlxSave_obj::invalidChars;

bool FlxSave_obj::hasInvalidChars(::String str){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_71_hasInvalidChars)
HXDLIN(  71)		return ::flixel::util::FlxSave_obj::invalidChars->match(str);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,hasInvalidChars,return )

::String FlxSave_obj::validate(::String str){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_85_validate)
HXDLIN(  85)		return ::flixel::util::FlxSave_obj::invalidChars->split(str)->join(HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,validate,return )

::String FlxSave_obj::validateAndWarn(::String str,::String fieldId){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_93_validateAndWarn)
HXLINE(  94)		::String newStr = ::flixel::util::FlxSave_obj::validate(str);
HXLINE(  99)		return newStr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,validateAndWarn,return )

::hx::Class FlxSave_obj::resolveFlixelClasses(::String name){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_111_resolveFlixelClasses)
HXDLIN( 111)		return ::openfl::net::SharedObject_obj::_hx___resolveClass(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,resolveFlixelClasses,return )


::hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new() {
	::hx::ObjectPtr< FlxSave_obj > __this = new FlxSave_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSave_obj *__this = (FlxSave_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSave_obj), true, "flixel.util.FlxSave"));
	*(void **)__this = FlxSave_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
}

::hx::Val FlxSave_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_path() ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"erase") ) { return ::hx::Val( erase_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isBound") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isBound() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return ::hx::Val( get_path_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mergeData") ) { return ::hx::Val( mergeData_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return ::hx::Val( checkStatus_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isBound") ) { return ::hx::Val( get_isBound_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return ::hx::Val( _sharedObject ); }
		if (HX_FIELD_EQ(inName,"mergeDataFrom") ) { return ::hx::Val( mergeDataFrom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSave_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"invalidChars") ) { outValue = ( invalidChars ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasInvalidChars") ) { outValue = hasInvalidChars_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"validateAndWarn") ) { outValue = validateAndWarn_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"resolveFlixelClasses") ) { outValue = resolveFlixelClasses_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxSave_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast<  ::flixel::util::FlxSaveStatus >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast<  ::openfl::net::SharedObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSave_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"invalidChars") ) { invalidChars=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("isBound",f4,53,82,53));
	outFields->push(HX_("_sharedObject",23,ee,9d,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSave_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSave_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::flixel::util::FlxSaveStatus */ ,(int)offsetof(FlxSave_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /*  ::openfl::net::SharedObject */ ,(int)offsetof(FlxSave_obj,_sharedObject),HX_("_sharedObject",23,ee,9d,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxSave_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &FlxSave_obj::invalidChars,HX_("invalidChars",66,12,09,eb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxSave_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("status",32,e7,fb,05),
	HX_("_sharedObject",23,ee,9d,aa),
	HX_("destroy",fa,2c,86,24),
	HX_("bind",bd,f5,16,41),
	HX_("mergeDataFrom",8c,5b,a4,fa),
	HX_("mergeData",02,e1,b6,69),
	HX_("close",b8,17,63,48),
	HX_("flush",c4,62,9b,02),
	HX_("erase",e6,e8,1c,73),
	HX_("checkStatus",1a,ba,0d,e8),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_path",2e,a1,0c,ca),
	HX_("get_isBound",0b,b4,7c,d9),
	HX_("isEmpty",43,de,5f,0c),
	::String(null()) };

static void FlxSave_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSave_obj::invalidChars,"invalidChars");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSave_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSave_obj::invalidChars,"invalidChars");
};

#endif

::hx::Class FlxSave_obj::__mClass;

static ::String FlxSave_obj_sStaticFields[] = {
	HX_("invalidChars",66,12,09,eb),
	HX_("hasInvalidChars",e0,3c,79,52),
	HX_("validate",96,d0,e3,04),
	HX_("validateAndWarn",c7,76,d7,85),
	HX_("resolveFlixelClasses",1e,51,35,83),
	::String(null())
};

void FlxSave_obj::__register()
{
	FlxSave_obj _hx_dummy;
	FlxSave_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxSave",95,71,4e,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSave_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSave_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSave_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSave_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSave_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSave_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSave_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSave_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSave_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSave_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2a670326751daced_60_boot)
HXDLIN(  60)		invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[ ~%&\\\\;:\"',<>?#]+",62,ea,57,10),HX_("g",67,00,00,00));
            	}
}

} // end namespace flixel
} // end namespace util
