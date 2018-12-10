//
// Created by cheetos on 6/12/18.
//

#include "Asignatura.h"
#include "../Curso/Curso.h"

namespace Models
{
    int const & Asignatura::getId() const {
        return AcademyBase::getId();
    }

    std::string const & Asignatura::getName() const {
        return AcademyBase::getName();
    }

    int const & Asignatura::getCursoId() const
    {
        return CursoId;
    }

    std::shared_ptr<Curso> const & Asignatura::getCurso() const {
        return CursoOwner;
    }

    void Asignatura::setName(std::string Name) {
        AcademyBase::setName(Name);
    }

    void Asignatura::setCursoId(int CursoId) {
        this->CursoId = CursoId;
    }

    void Asignatura::setCurso(std::shared_ptr<Models::Curso> CursoOwner) {
        this->CursoOwner = nullptr;
        this->CursoOwner = CursoOwner;
    }
}