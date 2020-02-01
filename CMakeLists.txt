cmake_minimum_required(VERSION 3.13)

project(WorkspaceTree)

include_directories(include)

set ( CMAKE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR} )
set ( CMAKE_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR} )

set (CMAKE_CXX_STANDARD 14)
file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

