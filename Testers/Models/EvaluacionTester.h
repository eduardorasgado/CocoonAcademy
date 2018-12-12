//
// Created by cheetos on 10/12/18.
//

#pragma once

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
                    // TODO: Testing Logic
                    auto evaluaciones = createEvalVector();
                    for(auto& eval : evaluaciones)
                    {
                        std::cout << eval->getName() << ", Nota: " << eval->getNota() << std::endl;
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
                    auto s = std::to_string(i);
                    auto unidad = "Unidad " + s;
                    auto eval = std::make_shared<Evaluacion>(unidad);
                    addNota(eval);
                    evaluaciones.push_back(eval);
                }
                return evaluaciones;
            }

            static void addNota(std::shared_ptr<Evaluacion> eval)
            {
                eval->setNota(9.2);
            }

        private:
            EvaluacionTester() { } // made static
    };
}