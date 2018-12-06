// Cocoon Academy MVC and DB connection in C++
#include <iostream>
#include <cstdlib>
#include <vector>
#include <memory>

#include "Models/Academy/Academy.h"
#include "Models/AcademyBase/AcademyBase.h"
#include "Models/Curso/Curso.h"

#include "Testers/executeTesting.h"

// testing
using namespace Models;

// initializing IdTracker for all objects inherits base
int AcademyBase::IdCreator{0};

int main()
{
    // applying testing for all models created
    Testers::GlobalTester::GlobalModelTesting();


    return 0;
}
