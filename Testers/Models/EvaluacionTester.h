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
                    auto evaluaciones = std::vector<std::shared_ptr<Evaluacion>>();

                } catch(std::exception& e)
                {
                    std::cout << "[x] Evaluacion Model Test Failed." << std::endl;
                    return false;
                }
                std::cout << "[o] Evaluacion Model Test Passed." << std::endl;
                return true;
            }

        private:
            EvaluacionTester() { } // made static
    };
}