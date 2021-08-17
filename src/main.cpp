#include "eagle/settings.h"
#include "eagle/tex_mapper.h"
#include <filesystem>

int main()
{
    eagle::Settings settings{};
    std::filesystem::create_directories(settings.keyFramesPath);
    eagle::TextureMapper tex_mapper{settings};
    return 0;
}
