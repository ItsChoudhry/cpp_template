
#add_subdirectory(sdl)
#add_subdirectory(imgui)

add_library(thing_lib thing.cpp thing.hpp)
target_link_libraries(thing_lib PRIVATE project_options)

add_executable(program main.cpp)
target_link_libraries(
  program
  PRIVATE project_options
          project_warnings
          CONAN_PKG::docopt.cpp
          CONAN_PKG::fmt
          CONAN_PKG::spdlog
          thing_lib)

