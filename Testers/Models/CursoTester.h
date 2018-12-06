//
// Created by cheetos on 5/12/18.
//
#pragma  once

using namespace Models;

namespace Testers
{
    class CursoTester
    {
        public:
            static bool testingCurso()
            {
                std::cout << "[CURSO MODEL TEST]" << std::endl;
                //
                try {
                    auto cursosTest = std::vector<std::shared_ptr<Curso>>();

                    for (int i = 0; i < 6; ++i) {
                        //
                        std::string name = "Curso de programacion";
                        auto c = std::make_shared<Curso>(name);
                        cursosTest.push_back(c);
                    }


                    for(auto& e : cursosTest)
                    {
                        std::cout << e->getId() << " => " << e->getName() << std::endl;
                    }

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