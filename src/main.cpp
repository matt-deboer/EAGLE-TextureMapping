#include "eagle/settings.h"
#include "eagle/tex_mapper.h"
#include <filesystem>

int main()
{
    Settings settings = Settings();
    std::filesystem::create_directories(settings.keyFramesPath);
    TextureMapper tex_mapper(settings);
    return 0;
}
