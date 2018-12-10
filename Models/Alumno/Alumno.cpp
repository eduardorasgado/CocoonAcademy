//
// Created by cheetos on 9/12/18.
//

#include "Alumno.h"
#include "../Curso/Curso.h"

namespace Models
{
    int const &Alumno::getId() const {
        return AcademyBase::getId();
    }

    std::string const &Alumno::getName() {
        return AcademyBase::getName();
    }

    int const &Alumno::getCursoId() const {
        return CursoId;
    }

    std::shared_ptr<Curso> const & Alumno::getCurso() const {
        return CursoOwner;
    }

    void Alumno::setName(std::string Name) {
        AcademyBase::setName(Name);
    }

    void Alumno::setCursoId(int CursoId) {
        this->CursoId = CursoId;
    }

    void Alumno::setCurso(std::shared_ptr<Curso> CursoOwner) {
        this->CursoOwner = nullptr;
        this->CursoOwner = CursoOwner;
    }
}