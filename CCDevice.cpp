#include "CCDevice.h"
#include "CCDeviceImp.h"

unsigned int CCDevice::getInUsedMegaBytes()
{
    unsigned int _ret = 0;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	
#else if(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	_ret = CCDeviceImp::getInUsedMegaBytes();
#endif
	return _ret;
}

unsigned int CCDevice::getAvailableMegaBytes()
{
    unsigned int _ret = 0;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
    
#else if(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    _ret = CCDeviceImp::getAvailableMegaBytes();
#endif
	return _ret;
}

