cmake_minimum_required(VERSION 3.12)
project(CocoonAcademy)

set(CMAKE_CXX_STANDARD 17)

add_executable(CocoonAcademy main.cpp Models/Academy/Academy.cpp Models/Academy/Academy.h Models/AcademyBase/AcademyBase.h Testers/Models/AcademyModelTester.h Models/TiposEscuelas.h Models/Curso/Curso.cpp Models/Curso/Curso.h Testers/Models/CursoTester.h Testers/executeTesting.h Models/TiposJornadas.h Models/Asignatura/Asignatura.cpp Models/Asignatura/Asignatura.h Testers/Models/AsignaturaTester.h Models/Alumno/Alumno.cpp Models/Alumno/Alumno.h Testers/Models/AlumnoTester.h Models/Evaluacion/Evaluacion.cpp Models/Evaluacion/Evaluacion.h Testers/Models/EvaluacionTester.h Utilities/RandomFloatGenerator/RandomFloatGenerator.cpp Utilities/RandomFloatGenerator/RandomFloatGenerator.h Testers/Utils/FloatRandomGeneratorTester.h)