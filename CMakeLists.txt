cmake_minimum_required(VERSION 4.0)
project(cmake_template)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(thirdparty/spdlog)

file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable("${CMAKE_PROJECT_NAME}")

set_property(TARGET "${CMAKE_PROJECT_NAME}" PROPERTY CXX_STANDARD 20)

target_sources("${CMAKE_PROJECT_NAME}" PRIVATE ${MY_SOURCES})

target_link_libraries("${CMAKE_PROJECT_NAME}" PRIVATE
    spdlog
)