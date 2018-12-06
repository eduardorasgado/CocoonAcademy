//
// Created by cheetos on 5/12/18.
//

#pragma once

#include <cstdlib>
#include <memory>

#include "../AcademyBase/AcademyBase.h"
#include "../Academy/Academy.h"

namespace Models
{
    class Curso : private AcademyBase
    {
            std::string Address;
            std::shared_ptr<Academy> AcademyOwner;
            std::string AcademyId;

        public:
            Curso(std::string Name) : AcademyBase()
            {
                this->setName(Name);
            }
            ~Curso();

            // setters and getters
            int getId() const;
            std::string getName() const;
            std::string getAddress() const;
            std::shared_ptr<Academy> getAcademy() const;

            void setName(std::string);
            void setAddress(std::string);
            void setAcademy(std::shared_ptr<Academy>);
    };
}