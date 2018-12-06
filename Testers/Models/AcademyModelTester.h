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
            static bool testingAcademyModel()
            {
                std::cout << "[ACADEMY MODEL TEST]" << std::endl;
                try
                {
                    auto listAcademy = createAcademyVector();

                    // read the id of all the elements inside the list
                    for (auto e : listAcademy) {
                        std::cout << e->getId() << " => " << e->getName();
                        std::cout << " | tipo: " << e->getAcademyType() << " | " << e->getAddress() << std::endl;
                    }

                } catch(std::exception& e)
                {
                    std::cout << "[x] AcademyModel Test failed. " << std::endl;
                    return false;
                }
                std::cout << "[o] AcademyModel Test passed. " << std::endl;
                return true;
            }

            static std::vector<std::shared_ptr<Academy>> createAcademyVector()
            {
                // creating some instances of academy model
                auto listAcademy = std::vector<std::shared_ptr<Academy>>();

                // academy names
                std::string AcademyNames[] = {"A academy", "B academy", "C academy", "D academy",
                                              "E academy", "F academy", "G academy", "H academy",
                                              "I academy", "J academy"};
                // adding data to list
                for (int i = 0; i < 10; ++i) {
                    auto a = std::make_shared<Academy>(AcademyNames[i]);
                    a->setAcademyType(TiposEscuelas::Online);
                    a->setAddress("Av Republica #22 Col. Roma");
                    listAcademy.push_back(a);
                }

                return listAcademy;
            }

        private:
            AcademyTester() { } // Disallow creating an instance if this object
    };
}