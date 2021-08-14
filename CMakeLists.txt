cmake_minimum_required(VERSION 3.2.0)
set(APP_NAME eagle_texture_mapping)
project(${APP_NAME})


set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Threads REQUIRED)
find_package(Boost 1.75 REQUIRED COMPONENTS system filesystem)
find_package(OpenCV REQUIRED)
find_package(Eigen3 REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE APP_SOURCES "src/*.cpp")

add_library(${APP_NAME} STATIC ${APP_SOURCES})

target_include_directories(${APP_NAME} PUBLIC "include")
target_link_libraries(${APP_NAME} PRIVATE Threads::Threads)

target_link_libraries(${APP_NAME} PUBLIC Eigen3::Eigen)
target_link_libraries(${APP_NAME} PUBLIC ${OpenCV_LIBS})
target_link_libraries(${APP_NAME} PRIVATE Boost::system Boost::filesystem)
target_link_libraries(${APP_NAME} PUBLIC Open3D::Open3D)
# target_link_libraries(${APP_NAME} PUBLIC OpenMP::OpenMP_CXX)


enable_testing()
add_subdirectory(test)