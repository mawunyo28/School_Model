cmake_minimum_required(VERSION 3.14)

project(School LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_library(School SHARED
  School_global.h
  school.cpp
  school.h
  teacher.h teacher.cpp
  school_class.h school_class.cpp
  student.h student.cpp
)

target_link_libraries(School PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(School PRIVATE SCHOOL_LIBRARY)
