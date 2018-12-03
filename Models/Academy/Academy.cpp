//
// Created by cheetos on 3/12/18.
//

#include "Academy.h"

namespace Models
{
    int Academy::getId() {
        return AcademyBase::getId();
    }

    std::string Academy::getName()
    {
        return AcademyBase::getName();
    }
    void Academy::setName(std::string Name)
    {
        AcademyBase::setName(Name);
    }
}