#ifndef CCDEVICE_H
#define CCDEVICE_H
#include "cocos2d.h"

class CCDevice 
{
public:
//��õ�ǰ�豸���õ��ڴ�(M)
static unsigned int getInUsedMegaBytes();
//��õ�ǰ�豸���õ��ڴ�(M)
static unsigned int getAvailableMegaBytes();
};
#endif