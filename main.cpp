// Cocoon Academy MVC and DB connection in C++
#include <iostream>
#include <cstdlib>
#include <vector>
#include <memory>

#include "Models/Academy/Academy.h"
#include "Models/AcademyBase/AcademyBase.h"

// testing
#include "Testers/Models/AcademyModelTester.h"

using namespace Models;
using namespace Testers;

// initializing IdTracker for all objects inherits base
int AcademyBase::IdCreator = 0;

int main()
{
    // applying testing for all models created
    AcademyTester::testingAcademyModel();

    return 0;
}
