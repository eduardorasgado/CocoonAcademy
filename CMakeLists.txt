cmake_minimum_required(VERSION 3.12)
project(CocoonAcademy)

set(CMAKE_CXX_STANDARD 17)

add_executable(CocoonAcademy main.cpp Models/Academy/Academy.cpp Models/Academy/Academy.h Models/AcademyBase/AcademyBase.h Testers/Models/AcademyModelTester.h Models/TiposEscuelas.h Models/Curso/Curso.cpp Models/Curso/Curso.h Testers/Models/CursoTester.h Testers/executeTesting.h Models/TiposJornadas.h)