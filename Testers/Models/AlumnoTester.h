//
// Created by cheetos on 9/12/18.
//
#pragma once

#include <ctime> // std::time
#include <algorithm> // std::random_shuffle
#include <cstdlib> // std::rand, std::srand

using namespace Models;

namespace Testers
{
    class AlumnoTester
    {
        public:
            static bool testingAlumnoModel()
            {
                // a seed for random generator
                std::srand (unsigned (std::time(0)));

                std::cout << "[ALUMNO MODEL TESTING]" << std::endl;
                try {
                    auto alumnos = createAlumnoVector();
                    // shuffle all objects
                    randomAlumnos(alumnos);

                    for(auto& alumno : alumnos)
                    {
                        std::cout << alumno->getName() << std::endl;
                    }
                    std::cout << ">Alumnos creados: " << alumnos.size() << std::endl;

                } catch (std::exception& e)
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

                auto randomAlumnosQuantity = randomNumber(20, 25);

                auto alumnosNames = createNames(randomAlumnosQuantity);

                for (auto& alumno : alumnosNames) {
                    // creating alumno with name and introducing into vector
                    auto newAlumno = std::make_shared<Alumno>(alumno);
                    alumnosList.push_back(newAlumno);
                }

                return alumnosList;
            }

        private:
            AlumnoTester() { }//made static

            static std::vector<std::string> createNames(int& quantity)
            {
                std::string names[] = {"Eduardo", "Lorenzo", "Martin", "Joaquin", "Juan"};
                std::string lastNames[] = {"Martinez", "Rasgado", "Sanchez", "Aquino", "Smith"};

                auto listNames = std::vector<std::string>();

                for(auto& n : names)
                {
                    for(auto& ln : lastNames)
                    {
                        std::string fullComb = n + " " + ln;
                        listNames.push_back(fullComb);
                    }
                }

                auto vectorNames = randomNames(listNames, quantity);

                return vectorNames;
            }

            static std::vector<std::string> randomNames(std::vector<std::string>& listNames, int& quantity)
            {
                // taking just a range of a vector, from 0 to quantity
                std::vector<std::string>::const_iterator first = listNames.begin();
                std::vector<std::string>::const_iterator last = listNames.begin()+quantity;
                std::vector<std::string> vectorNames(first, last);

                return vectorNames;
            }

            // a random generator
            static int randomNumber(int begin, int end)
            {
                return begin + (std::rand()%(end-begin));
            }

            static void randomAlumnos(std::vector<std::shared_ptr<Alumno>>& alumnos)
            {
                std::random_shuffle(alumnos.begin(), alumnos.end());
            }
    };
}