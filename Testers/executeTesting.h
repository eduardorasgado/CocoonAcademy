//
// Created by cheetos on 5/12/18.
//

#include "Models/AcademyModelTester.h"
#include "Models/CursoTester.h"
#include "Models/AsignaturaTester.h"
#include "Models/AlumnoTester.h"
#include "Models/EvaluacionTester.h"

#include "Utils/FloatRandomGeneratorTester.h"

namespace Testers
{
    class GlobalTester
    {
        public:
            static void GlobalModelTesting()
            {
                std::cout << "[[ MODELS TESTING ]]" << std::endl;
                int totalPassed = 0;

                if (Testers::AcademyTester::testingAcademyModel()) ++totalPassed;
                std::cout << std::endl;
                if (Testers::CursoTester::testingCursoModel()) ++totalPassed;
                std::cout << std::endl;
                if(Testers::AsignaturaTester::testingAsignaturaModel()) ++totalPassed;
                std::cout << std::endl;
                if(Testers::AlumnoTester::testingAlumnoModel()) ++totalPassed;
                std::cout << std::endl;
                if(Testers::EvaluacionTester::testingEvaluacionModel()) ++totalPassed;
                std::cout << std::endl;

                std::cout << "[RESULTS]:" << totalPassed << " tests passed." << std::endl;
            }

            static void UtilsTesting()
            {
                std::cout << "[[ UTILS TESTING ]]" << std::endl;
                int totalPassed = 0;
                if(Testers::FloatRandomGeneratorTester::testingFloatRandomGenerator()) ++totalPassed;

                std::cout << "[RESULTS]: " << totalPassed << "test passed." << std::endl;
            }

        private:
            GlobalTester() { } // made static
    };
}