cmake_minimum_required(VERSION 3.0)
project(ogsr_steam)

file(GLOB SOURCES "src/*")

add_executable(XR_3DA ${SOURCES})
