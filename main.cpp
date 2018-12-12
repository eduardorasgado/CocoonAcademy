// Cocoon Academy MVC and DB connection in C++
#include <iostream>
#include <cstdlib>
#include <vector>
#include <memory>

#include "Utilities/RandomFloatGenerator/RandomFloatGenerator.h"

#include "Models/Academy/Academy.h"
#include "Models/AcademyBase/AcademyBase.h"
#include "Models/Curso/Curso.h"
#include "Models/Asignatura/Asignatura.h"
#include "Models/Alumno/Alumno.h"
#include "Models/Evaluacion/Evaluacion.h"

#include "Testers/executeTesting.h"

// testing
using namespace Models;

// initializing IdTracker for all objects inherits base
int AcademyBase::IdCreator{0};

int main()
{
    // applying testing for all models created
    Testers::GlobalTester::GlobalModelTesting();
    // applying testing for utilities
    Testers::GlobalTester::UtilsTesting();


    return 0;
}
