//
// Created by cheetos on 6/12/18.
//

#include "Asignatura.h"

namespace Models
{
    int Asignatura::getId() {
        return AcademyBase::getId();
    }

    std::string Asignatura::getName() {
        return AcademyBase::getName();
    }

    void Asignatura::setName(std::string Name) {
        AcademyBase::setName(Name);
    }
}