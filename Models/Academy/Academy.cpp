//
// Created by cheetos on 3/12/18.
//

#include "Academy.h"

namespace Models
{
    int Academy::getId() const
    {
        return AcademyBase::getId();
    }

    std::string Academy::getName() const
    {
        return AcademyBase::getName();
    }

    void Academy::setName(std::string Name)
    {
        AcademyBase::setName(Name);
    }

    int Academy::getCreationYear() const
    {
        return CreationYear;
    }

    std::string Academy::getCountry() const
    {
        return Country;
    }

    std::string Academy::getCity() const
    {
        return City;
    }

    std::string Academy::getAddress() const
    {
        return Address;
    }

    TiposEscuelas Academy::getAcademyType() const
    {
        return AcademyType;
    }

    void Academy::setCountry(std::string Country)
    {
        this->Country = Country;
    }

    void Academy::setCity(std::string City)
    {
        this->City = City;
    }

    void Academy::setAddress(std::string Address)
    {
        this->Address = Address;
    }

    void Academy::setAcademyType(TiposEscuelas AcademyType)
    {
        this->AcademyType = AcademyType;
    }
}