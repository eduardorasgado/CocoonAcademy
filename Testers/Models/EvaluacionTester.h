//
// Created by cheetos on 10/12/18.
//

#pragma once


#include <random> // used in get_random
#include <bits/stdc++.h> // setprecision

// not neccessary to include, because it is included using namespace
// and backwards link from main.cpp->executeTesting.h->...
//#include "../../Utilities/RandomFloatGenerator/RandomFloatGenerator.h"

namespace Testers
{
    class EvaluacionTester
    {
        public:
            static bool testingEvaluacionModel()
            {
                std::cout << "[EVALUACION MODEL TEST]" << std::endl;
                try
                {
                    auto evaluaciones = createEvalVector();
                    for(auto& eval : evaluaciones)
                    {
                        std::cout << eval->getName() << ", Nota: " << eval->getNota() << std::setprecision(2) << std::endl;
                    }

                } catch(std::exception& e)
                {
                    std::cout << "[x] Evaluacion Model Test Failed." << std::endl;
                    return false;
                }
                std::cout << "[o] Evaluacion Model Test Passed." << std::endl;
                return true;
            }

            static std::vector<std::shared_ptr<Evaluacion>> createEvalVector()
            {
                // creating a vector of evals with names
                auto evaluaciones = std::vector<std::shared_ptr<Evaluacion>>();
                for (int i = 0; i < 30; ++i) {
                    auto s = std::to_string(i+1);
                    auto unidad = "Unidad " + s;
                    auto eval = std::make_shared<Evaluacion>(unidad);

                    addNota(eval);

                    evaluaciones.push_back(eval);
                }
                return evaluaciones;
            }

            static void addNota(std::shared_ptr<Evaluacion> eval)
            {
                AcademyUtils::RandomFloatGenerator randomizer;
                auto note = randomizer.get_random(5, 10);
                eval->setNota(note);
            }

        private:
            EvaluacionTester() { } // made static

    };
}