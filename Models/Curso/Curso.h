//
// Created by cheetos on 5/12/18.
//

#pragma once

#include <cstdlib>
#include <memory>
#include <vector>

#include "../AcademyBase/AcademyBase.h"
#include "../Academy/Academy.h"
#include "../TiposJornadas.h"
#include "../Asignatura/Asignatura.h"

namespace Models
{
    class Curso : private AcademyBase
    {
            // Name and Id are in parent class
            std::string Address;
            std::shared_ptr<Academy> AcademyOwner;
            int AcademyId;
            TiposJornadas Jornada;
            std::vector<std::shared_ptr<Asignatura>> Asignaturas;


        public:
            Curso(std::string Name) : AcademyBase()
            {
                this->setName(Name);
            }
            ~Curso();

            // setters and getters
            int const & getId() const;
            std::string const & getName() const;
            std::string const & getAddress() const;
            std::shared_ptr<Academy> getAcademy() const;
            int const & getAcademyId() const;
            TiposJornadas const & getJornada() const;
            std::vector<std::shared_ptr<Asignatura>> const & getAsignaturas() const;

            void setName(std::string);
            void setAddress(std::string);
            void setAcademy(std::shared_ptr<Academy>);
            void setAcademyId(int);
            void setJornada(TiposJornadas);
            void setAsignaturas(std::shared_ptr<Asignatura>);
    };
}