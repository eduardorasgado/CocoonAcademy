// Cocoon Academy MVC and DB connection in C++
#include <iostream>
#include "Models/Academy/Academy.h"
#include "Models/AcademyBase/AcademyBase.h"
#include <cstdlib>
#include <vector>
#include <memory>

using namespace Models;

// initializing IdTracker
int AcademyBase::IdCreator = 0;

void testingAcademyModel();

int main() {
    testingAcademyModel();
    return 0;
}

void testingAcademyModel() {
    // creating some instances of academy model
    auto listAcademy = std::vector<std::shared_ptr<Academy>>();

    // adding data to list
    for (int i = 0; i < 10; ++i) {
        //auto a = new Academy();
        auto a = std::make_shared<Academy>();

        listAcademy.push_back(a);
    }

    // read the id of all the elements inside the list
    for (int j = 0; j < 10; ++j) {
        std::cout << listAcademy[j]->getId() << std::endl;
    }
}