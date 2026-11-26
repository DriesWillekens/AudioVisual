cmake_minimum_required(VERSION 3.21)
project(AudioVisual VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets OpenGLWidgets Network NetworkAuth)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp src/*.h)

qt_add_executable(AudioVisual main.cpp ${SOURCES})
target_include_directories(AudioVisual PRIVATE src)
target_link_libraries(AudioVisual PRIVATE
    Qt6::Widgets Qt6::OpenGLWidgets Qt6::Network Qt6::NetworkAuth)