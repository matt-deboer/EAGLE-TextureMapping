#include "eagle/settings.h"
#include "eagle/utils.h"
#include "eagle/align.h"

int main()
{
    Settings settings = Settings();
    EAGLE::checkPath(settings.keyFramesPath);
    getAlignResults align(settings);
    return 0;
}
