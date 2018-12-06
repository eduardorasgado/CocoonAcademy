//
// Created by cheetos on 5/12/18.
//

#include "Curso.h"

namespace Models
{
    Curso::~Curso() { }

    int Curso::getId() const {
        return AcademyBase::getId();
    }

    std::string Curso::getName() const {
        return AcademyBase::getName();
    }

    std::string Curso::getAddress() const {
        return Address;
    }

    std::shared_ptr<Academy> Curso::getAcademy() const {
        return AcademyOwner;
    }

    void Curso::setAddress(std::string Address) {
        this->Address = Address;
    }

    void Curso::setAcademy(std::shared_ptr<Academy> AcademyOwner) {
        this->AcademyOwner = nullptr; // delete actual pointer
        // create a copy
        this->AcademyOwner = AcademyOwner;
    }

    void Curso::setName(std::string Name) {
        AcademyBase::setName(Name);
    }
}