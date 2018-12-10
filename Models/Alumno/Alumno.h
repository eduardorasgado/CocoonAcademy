//
// Created by cheetos on 9/12/18.
//
#pragma once

#include "../AcademyBase/AcademyBase.h"
#include "../Curso/Curso.h"
#include <memory>

namespace Models
{
    class Alumno : private AcademyBase
    {
        private:
            int CursoId;
            std::shared_ptr<Curso> CursoOwner;
        public:
            Alumno(std::string Name) : AcademyBase()
            {
                this->setName(Name);
            }

            // setters and getters
    };
}