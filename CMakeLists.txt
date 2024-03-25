cmake_minimum_required(VERSION 3.29)
project(super)

set(fmt_DIR "~/vcpkg/installed/arm64-osx/share/fmt")

find_package(fmt REQUIRED)

add_executable(super main.cpp)

target_link_libraries(super PRIVATE fmt::fmt)
target_compile_features(super PRIVATE cxx_std_23)
