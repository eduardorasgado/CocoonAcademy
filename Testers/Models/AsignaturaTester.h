//
// Created by cheetos on 6/12/18.
//

#pragma once

using namespace Models;

namespace Testers
{
    class AsignaturaTester
    {
        public:
            static bool testingAsignaturaModel()
            {
                std::cout << "[ASIGNATURA MODEL TEST]" << std::endl;
                try {
                    auto allAsignaturas = createAsignaturasVector();

                } catch(std::exception& e)
                {
                    std::cout << "[x]: AsignaturaTester Failed. " << std::endl;
                    return false;
                }
                std::cout << "[o]: Asignatura Tester passed. " << std::endl;
                return true;
            }

            static std::vector<std::shared_ptr<Asignatura>> createAsignaturasVector()
            {
                auto asignaturasList = std::vector<std::shared_ptr<Asignatura>>();

                std::string asignaturaNames[] = {"Programación Básica", "Arquitectura de Software",
                                                 "Matemáticas Discretas", "Sistemas Operativos",
                                                 "Xamarin Forms", "C++ TDD"};

                for (int i = 0; i < 6; ++i) {
                    auto asignatura = std::make_shared<Asignatura>(asignaturaNames[i]);
                    asignaturasList.push_back(asignatura);
                }

                return asignaturasList;
            }

        private:
            AsignaturaTester() { } // static class
    };
}