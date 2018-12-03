//
// Created by cheetos on 3/12/18.
//

#pragma once

#include <iostream>

namespace Models
{
    class AcademyBase
    {
        public:
            std::string Name;
            static int IdCreator;
            int Id{0};

            AcademyBase()
            {
                ++IdCreator;
                // generating new id
                Id = IdCreator;
            }
    };
}
