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

                return alumnosList;
            }

        private:
            AlumnoTester() { }//made static
    };
}