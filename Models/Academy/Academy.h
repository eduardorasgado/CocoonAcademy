//
// Created by cheetos on 3/12/18.
//
#pragma once

#include "../AcademyBase/AcademyBase.h"
#include <iostream>

namespace Models
{
    class Academy : private AcademyBase
    {
        public:
            // calling the constructor base and introducing a name
            // to local constructor
            Academy(std::string Name) : AcademyBase()
            {
                this->setName(Name);
            }
            int getId();
            std::string getName();
            void setName(std::string);
    };
}

