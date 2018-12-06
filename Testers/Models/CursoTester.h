//
// Created by cheetos on 5/12/18.
//
#pragma  once

namespace Testers
{
    class CursoTester
    {
        public:
            static bool testingCurso()
            {
                //
                try {
                    //
                } catch (std::exception& e)
                {
                    std::cout << "[x]: Curso Model Test failed. " << std::endl;
                    return false;
                }
                std::cout << "[o]: Curso Model Test passed. " << std::endl;
                return true;
            }
        private:
            CursoTester() { } // disallow instance creation
    };
}