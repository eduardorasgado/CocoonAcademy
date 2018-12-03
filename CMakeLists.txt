cmake_minimum_required(VERSION 3.12)
project(CocoonAcademy)

set(CMAKE_CXX_STANDARD 17)

add_executable(CocoonAcademy main.cpp Models/Academy/Academy.cpp Models/Academy/Academy.h Models/AcademyBase/AcademyBase.h)