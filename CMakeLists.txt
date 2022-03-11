cmake_minimum_required(VERSION 3.21)
project(observer_pattern)

set(CMAKE_CXX_STANDARD 20)
include_directories(include)
add_executable(observer_pattern src/main.cpp include/Subject.h include/Observer.h include/DisplayElement.h include/WeatherData.h src/WeatherData.cpp)
