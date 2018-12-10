//
// Created by cheetos on 5/12/18.
//

#include "Models/AcademyModelTester.h"
#include "Models/CursoTester.h"
#include "Models/AsignaturaTester.h"
#include "Models/AlumnoTester.h"
#include "Models/EvaluacionTester.h"

namespace Testers
{
    class GlobalTester
    {
        public:
            static void GlobalModelTesting()
            {
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

                std::cout << "[RESULTS]:" << totalPassed << " tests passed" << std::endl;
            }

        private:
            GlobalTester() { } // made static
    };
}