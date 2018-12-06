//
// Created by cheetos on 3/12/18.
//

#include "Academy.h"

namespace Models
{
    int const & Academy::getId() const
    {
        return AcademyBase::getId();
    }

    std::string const & Academy::getName() const
    {
        return AcademyBase::getName();
    }

    int const & Academy::getCreationYear() const
    {
        return CreationYear;
    }

    std::string const & Academy::getCountry() const
    {
        return Country;
    }

    std::string const & Academy::getCity() const
    {
        return City;
    }

    std::string const & Academy::getAddress() const
    {
        return Address;
    }

    TiposEscuelas const & Academy::getAcademyType() const
    {
        return AcademyType;
    }

    void Academy::setName(std::string Name)
    {
        AcademyBase::setName(Name);
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