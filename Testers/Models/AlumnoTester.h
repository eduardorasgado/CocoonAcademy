//
// Created by cheetos on 9/12/18.
//
#pragma once

using namespace Models;

namespace Testers
{
    class AlumnoTester
    {
        public:
            static bool testingAlumnoModelTester()
            {
                std::cout << "[ALUMNO MODEL TESTING]" << std::endl;
                try {
                    auto alumnos = createAlumnoVector();

                } catch (std::exception e)
                {
                    std::cout << "[x]: Alumno Model Test Failed." << std::endl;
                    return false;
                }
                std::cout << "[o]: Alumno Model Test passed." << std::endl;
                return true;
            }

            static std::vector<std::shared_ptr<Alumno>> createAlumnoVector()
            {
                auto alumnosList = std::vector<std::shared_ptr<Alumno>>();
                auto alumnosNames = createNames();

                for (int i = 0; i < 20; ++i) {
                    std::cout << "alumno: " << alumnosNames[i] << std::endl;
                }
                return alumnosList;
            }

            static std::vector<std::string> createNames()
            {
                std::string names[] = {"Eduardo", "Lorenzo", "Martin", "Joaquin"};
                std::string lastNames[] = {"Martinez", "Rasgado", "Sanchez", "Aquino"};

                auto listNames = std::vector<std::string>();

                for(auto& n : names)
                {
                    for(auto& ln : lastNames)
                    {
                        std::string fullComb = n + " " + ln;
                        listNames.push_back(fullComb);
                    }
                }

                return listNames;
            }

        private:
            AlumnoTester() { }//made static
    };
}