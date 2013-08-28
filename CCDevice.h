#ifndef CCDEVICE_H
#define CCDEVICE_H
#include "cocos2d.h"

class CCDevice 
{
public:
//获得当前设备已用的内存(M)
static unsigned int getInUsedMegaBytes();
//获得当前设备可用的内存(M)
static unsigned int getAvailableMegaBytes();
};
#endif