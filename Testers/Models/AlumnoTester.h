//
// Created by cheetos on 9/12/18.
//
#pragma once

namespace Testers
{
    class AlumnoTester
    {
            static bool AlumnoModelTester()
            {
                return true;
            }

            std::vector<std::shared_ptr<Alumno>> createAlumnoVector()
            {
                auto alumnosList = std::vector<std::shared_ptr<Alumno>>();

                return alumnosList;
            }
    };
}