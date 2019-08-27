cmake_minimum_required(VERSION 2.8)

project(cmake-create-app CXX C)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_CXX_STANDARD 14)

if(UNIX)
	option(BUILD_SHARED_LIBS "Build Shared Libraries" OFF)
endif()
option(USE_OPENCV "Use OpenCV" OFF)

include(cmake/dependencies.cmake)
include(cmake/utils.cmake)

if(MSVC)
    msvc_multi_threaded_static_turn(ON)
endif()

set(LIB_TYPE STATIC)
if(BUILD_SHARED_LIBS)
    set(LIB_TYPE SHARED)
endif()

set(cca_include_dirs ${PROJECT_SOURCE_DIR})
set(cca_lib_deps)

add_subdirectory(modules)
add_subdirectory(examples)