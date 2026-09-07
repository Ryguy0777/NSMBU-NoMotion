#include <telkin/Telkin.h>
#include <nomotion/NoMotion.h>

using namespace tk::ppc;

namespace nomotion {

void SysControllerNoMotion::calcRemote_DRC_Acc_NoMotion(const sead::Controller* controller) {
    // Hijack the function that binds the tilt inputs to GamePad accelerometer,
    // and replace it with a call to the function the Pro Controller uses
    return calcRemote_URCC_Acc_(controller);
}

}

// Use ZL/ZR as motion inputs
tBranch(0x02512bc0, nomotion::SysControllerNoMotion::calcRemote_DRC_Acc_NoMotion, tk::BranchType::b);

// Remove ZL/ZR from "shake" inputs
tPatch8u(0x100bf197, 0x00);
tPatch8u(0x100bf1ff, 0x00);

// Trick FukidashiInfo into treating GamePad as a Pro Controller
tPatch32u(0x025c87b8, li(R::r29, 1));
tPatch8u(0x025c8c7f, 0x1c);
