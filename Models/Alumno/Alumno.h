//
// Created by cheetos on 9/12/18.
//
#pragma once

#include "../AcademyBase/AcademyBase.h"
#include <memory>

namespace Models
{
    // to avoid problems using circular dependency
// between two classes(mutual needs)
    class Curso;

    class Alumno : private AcademyBase
    {
        private:
            int CursoId;
            std::shared_ptr<Curso> CursoOwner;
            // TODO: Create Evaluacion List and setters/getters
        public:
            Alumno(std::string Name) : AcademyBase()
            {
                this->setName(Name);
            }

            // setters and getters
            int const & getId() const;
            std::string const & getName();
            int const & getCursoId() const;
            std::shared_ptr< class Curso> const & getCurso() const;

            void setName(std::string);
            void setCursoId(int);
            void setCurso(std::shared_ptr< class Curso>);
    };
}