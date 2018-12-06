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


                    auto academyVector = AcademyTester::createAcademyVector();

                    auto cursosTest = std::vector<std::shared_ptr<Curso>>();

                    std::string names[] = {"Programación Básica", "Arquitectura de Software",
                                           "Matemáticas Discretas", "Sistemas Operativos",
                                           "Xamarin Forms", "C++ TDD"};
                    for (int i = 0; i < 6; ++i) {
                        auto c = std::make_shared<Curso>(names[i]);
                        c->setAcademy(academyVector[i]);
                        c->setAcademyId(academyVector[i]->getId());
                        c->setJornada(TiposJornadas::Weekend);
                        cursosTest.push_back(c);
                    }

                    for(auto& e : cursosTest)
                    {
                        std::cout << e->getId() << " => " << e->getName();
                        std::cout << " | Academy: " << e->getAcademy()->getName();
                        std::cout << " | " << e->getAcademy()->getId();
                        std::cout << " | Tipo de jornada: " << e->getJornada() << std::endl;
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