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
            static bool testingCursoModel()
            {
                std::cout << "[CURSO MODEL TEST]" << std::endl;
                //
                try {


                    auto cursosTest = createCursosVector();

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

            static std::vector<std::shared_ptr<Curso>> createCursosVector()
            {
                auto academyVector = AcademyTester::createAcademyVector();

                auto cursosTest = std::vector<std::shared_ptr<Curso>>();

                std::string names[] = {"101", "201","301", "401", "501", "601"};
                for (int i = 0; i < 6; ++i) {
                    auto c = std::make_shared<Curso>(names[i]);
                    c->setAcademy(academyVector[i]);
                    c->setAcademyId(academyVector[i]->getId());
                    c->setJornada(TiposJornadas::Weekend);
                    cursosTest.push_back(c);
                }

                return cursosTest;
            }

        private:
            CursoTester() { } // disallow instance creation
    };
}