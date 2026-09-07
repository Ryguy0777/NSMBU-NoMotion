#pragma once

#include <input/SysController.h>

namespace nomotion {

class SysControllerNoMotion : public SysController
{
public:
    void calcRemote_DRC_Acc_NoMotion(const sead::Controller* controller);
};

} 
