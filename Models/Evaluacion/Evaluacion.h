//
// Created by cheetos on 10/12/18.
//

#pragma once

#include "../AcademyBase/AcademyBase.h"

namespace Models
{
    class Evaluacion : AcademyBase
    {
        public:
            Evaluacion(std::string Name) : AcademyBase()
            {
                this->setName(Name);
            }
    };
}