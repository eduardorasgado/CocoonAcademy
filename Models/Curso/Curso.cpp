//
// Created by cheetos on 5/12/18.
//

#include "Curso.h"

namespace Models
{
    Curso::~Curso() { }

    int const & Curso::getId() const {
        return AcademyBase::getId();
    }

    std::string const & Curso::getName() const {
        return AcademyBase::getName();
    }

    std::string const & Curso::getAddress() const {
        return Address;
    }

    std::shared_ptr<Academy> Curso::getAcademy() const {
        return AcademyOwner;
    }

    int const & Curso::getAcademyId() const
    {
        return AcademyId;
    }

    TiposJornadas const & Curso::getJornada() const
    {
        return Jornada;
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
    void Curso::setAcademyId(int academyId)
    {
        this->AcademyId = academyId;
    }

    void Curso::setJornada(TiposJornadas Jornada) {
        this->Jornada = Jornada;
    }
}