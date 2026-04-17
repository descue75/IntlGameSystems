cmake_minimum_required(VERSION 3.20)
project(IntlGameSystems LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(intl_core
  src/config/ConfigLoader.cpp
  src/config/ConfigValidator.cpp
)

target_include_directories(intl_core PUBLIC src)

add_executable(IntlGameSystems src/main.cpp)
target_link_libraries(IntlGameSystems PRIVATE intl_core)

add_subdirectory(tests)