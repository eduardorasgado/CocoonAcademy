//
// Created by cheetos on 3/12/18.
//

#pragma once

#include <iostream>

namespace Models
{
    class AcademyBase
    {
        private:
            std::string Name;
            int Id{0};
        public:
            static int IdCreator;

            AcademyBase()
            {
                ++IdCreator;
                // generating new id
                Id = IdCreator;
            }
            ~AcademyBase() { } // Destructo

            // setters and getters
            int const & getId() const
            {
                return this->Id;
            }
            std::string const & getName() const
            {
                return Name;
            }
            void setName(std::string Name)
            {
                this->Name = Name;
            }
    };
}
