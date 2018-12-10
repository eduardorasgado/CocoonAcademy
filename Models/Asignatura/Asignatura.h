//
// Created by cheetos on 6/12/18.
//

#pragma once

#include <iostream>
#include <memory>
#include "../AcademyBase/AcademyBase.h"

namespace Models
{
    // to avoid problems in circular dependency
    // in CPP real model should be imported
    class Curso;

    class Asignatura : AcademyBase
    {
        private:
            // Asignatura is owned by
            int CursoId;
            std::shared_ptr<Curso> CursoOwner;

        public:
            Asignatura(std::string Name) : AcademyBase()
            {
                AcademyBase::setName(Name);
            }

            // setters and getters
            int const & getId() const;
            std::string const & getName() const;
            int const & getCursoId() const;
            std::shared_ptr<Curso> const & getCurso() const;

            void setName(std::string);
            void setCursoId(int);
            void setCurso(std::shared_ptr<Curso>);
    };
}