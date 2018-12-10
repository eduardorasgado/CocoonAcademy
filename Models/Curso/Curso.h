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
    // to avoid problems using mutual needs in classes
    // NOTE: should be inside the namespace owns
    class Alumno;

    class Curso : private AcademyBase
    {
            // Name and Id are in parent class
            std::string Address;
            int AcademyId;
            // course is owned by
            std::shared_ptr<Academy> AcademyOwner;

            TiposJornadas Jornada;
            // course have:
            std::vector<std::shared_ptr<Asignatura>> Asignaturas;
            std::vector<std::shared_ptr<Alumno>> Alumnos;


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
            std::vector<std::shared_ptr<Alumno>> const & getAlumnos() const;

            void setName(std::string);
            void setAddress(std::string);
            void setAcademy(std::shared_ptr<Academy>);
            void setAcademyId(int);
            void setJornada(TiposJornadas);
            void setAsignatura(std::shared_ptr<Asignatura>);
            void setAlumno(std::shared_ptr<Alumno>);
    };
}