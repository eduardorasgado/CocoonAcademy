//
// Created by cheetos on 3/12/18.
//

#pragma once

// to allow using Academy
using namespace Models;

namespace Testers
{
    // static class for Academy Model Testing
    class AcademyTester
    {
        public:
            static void testingAcademyModel()
            {
                // creating some instances of academy model
                auto listAcademy = std::vector<std::shared_ptr<Academy>>();

                // adding data to list
                for (int i = 0; i < 10; ++i) {
                    //auto a = new Academy();
                    auto a = std::make_shared<Academy>();

                    listAcademy.push_back(a);
                }

                // read the id of all the elements inside the list
                for (auto e : listAcademy) {
                    std::cout << e->getId() << std::endl;
                }
            }

        private:
            AcademyTester() { } // Disallow creating an instance if this object
    };
}