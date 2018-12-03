// Cocoon Academy MVC and DB connection in C++
#include <iostream>
#include "Models/AcademyBase/AcademyBase.h"
#include <cstdlib>
#include <vector>
using namespace Models;

// initializing IdTracker
int AcademyBase::IdCreator = 0;

int main() {
    auto listAcademy = std::vector<AcademyBase*>();

    // adding data to list
    for (int i = 0; i < 10; ++i) {
        auto a = new AcademyBase();
        listAcademy.push_back(a);
    }

    // read the id of all the elements inside the list
    for (int j = 0; j < 10; ++j) {
        std::cout << listAcademy[j]->Id << std::endl;
    }

    return 0;
}