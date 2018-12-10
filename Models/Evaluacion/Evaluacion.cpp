//
// Created by cheetos on 10/12/18.
//

#include "Evaluacion.h"
#include "../Alumno/Alumno.h"
#include "../Asignatura/Asignatura.h"

namespace Models
{
    Evaluacion::Evaluacion(std::string Name) : AcademyBase()
    {
        this->setName(Name);
    }

    const int & Evaluacion::getId() const
    {
        return AcademyBase::getId();
    }

    std::string const & Evaluacion::getName() const
    {
        return AcademyBase::getName();
    }

    float const & Evaluacion::getNota() const {
        return Nota;
    }

    int const & Evaluacion::getAlumnoId() const {
        return AlumnoId;
    }

    const std::shared_ptr<Alumno> &Evaluacion::getAlumnoOwner() const {
        return AlumnoOwner;
    }

    int Evaluacion::getAsignaturaId() const {
        return AsignaturaId;
    }

    const std::shared_ptr<Asignatura> &Evaluacion::getAsignaturaOwner() const {
        return AsignaturaOwner;
    }

    void Evaluacion::setName(std::string Name)
    {
        AcademyBase::setName(Name);
    }

    void Evaluacion::setNota(float Nota) {
        this->Nota = Nota;
    }

    void Evaluacion::setAlumnoId(int AlumnoId) {
        this->AlumnoId = AlumnoId;
    }

    void Evaluacion::setAlumnoOwner(const std::shared_ptr<Alumno> &AlumnoOwner) {
        this->AlumnoOwner = nullptr;
        this->AlumnoOwner = AlumnoOwner;
    }

    void Evaluacion::setAsignaturaId(int AsignaturaId) {
        this->AsignaturaId = AsignaturaId;
    }

    void Evaluacion::setAsignaturaOwner(const std::shared_ptr<Asignatura> &AsignaturaOwner) {
        this->AsignaturaOwner = nullptr;
        this->AsignaturaOwner = AsignaturaOwner;
    }
}
