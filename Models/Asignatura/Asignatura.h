//
// Created by cheetos on 6/12/18.
//

#pragma once

#include <iostream>

#include "../AcademyBase/AcademyBase.h"

namespace Models
{
    class Asignatura : AcademyBase
    {
        public:
            Asignatura(std::string Name) : AcademyBase()
            {
                AcademyBase::setName(Name);
            }
    };
}