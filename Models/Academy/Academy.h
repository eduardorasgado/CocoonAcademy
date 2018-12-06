//
// Created by cheetos on 3/12/18.
//
#pragma once

#include "../AcademyBase/AcademyBase.h"
#include "../TiposEscuelas.h"

#include <iostream>

namespace Models
{
    class Academy : private AcademyBase
    {
            int CreationYear;
            std::string Country;
            std::string City;
            std::string Address;
            TiposEscuelas AcademyType;

        public:
            // calling the constructor base and introducing a name
            // to local constructor
            Academy(std::string Name) : AcademyBase()
            {
                this->setName(Name);
            }
            // setters and getters
            int getId() const;
            std::string getName() const;
            int getCreationYear() const;
            std::string getCountry() const;
            std::string getCity() const;
            std::string getAddress() const;
            TiposEscuelas getAcademyType() const;

            void setName(std::string);
            void setCountry(std::string);
            void setCity(std::string);
            void setAddress(std::string);
            void setAcademyType(TiposEscuelas);
    };
}

