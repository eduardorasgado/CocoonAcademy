//
// Created by cheetos on 5/12/18.
//

#include "Models/AcademyModelTester.h"
#include "Models/CursoTester.h"

namespace Testers
{
    class GlobalTester
    {
        public:
            static void GlobalModelTesting()
            {
                int totalPassed = 0;

                if (Testers::AcademyTester::testingAcademyModel()) ++totalPassed;
                if (Testers::CursoTester::testingCurso()) ++totalPassed;

                std::cout << "[RESULTS]:" << totalPassed << " tests passed" << std::endl;
            }

        private:
            GlobalTester() { } // made static
    };
}