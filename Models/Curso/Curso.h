//
// Created by cheetos on 5/12/18.
//

#pragma once

#include "../AcademyBase/AcademyBase.h"

namespace Models
{
    class Curso : AcademyBase
    {
        public:
            Curso(std::string Name) : AcademyBase()
            {
                this->setName(Name);
            }
    };
}