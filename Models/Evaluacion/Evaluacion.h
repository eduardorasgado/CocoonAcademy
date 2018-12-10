//
// Created by cheetos on 10/12/18.
//

#pragma once

#include <memory>
#include "../AcademyBase/AcademyBase.h"

namespace Models
{
    class Alumno;
    class Asignatura;

    class Evaluacion : AcademyBase
    {
        private:
            float Nota;

            //owners:
            int AlumnoId;
            std::shared_ptr<Alumno> AlumnoOwner;
            int AsignaturaId;
            std::shared_ptr<Asignatura> AsignaturaOwner;

        public:
            Evaluacion(std::string Name); //constructor

            int const & getId() const;
            std::string const & getName() const;
            float const & getNota() const;
            int const & getAlumnoId() const;
            const std::shared_ptr<Alumno> &getAlumnoOwner() const;
            int getAsignaturaId() const;
            const std::shared_ptr<Asignatura> &getAsignaturaOwner() const;

            void setName(std::string);
            void setNota(float Nota);
            void setAlumnoId(int AlumnoId);
            void setAlumnoOwner(const std::shared_ptr<Alumno> &AlumnoOwner);
            void setAsignaturaId(int AsignaturaId);
            void setAsignaturaOwner(const std::shared_ptr<Asignatura> &AsignaturaOwner);
    };
}