//    20/04/2023

#include<iostream>
#include<string.h>
using namespace std;

#include<iostream>

class Estudiante
{
    private:
    string codigo_estudiante;
    string facultad;
    string correo;

    public:
    Estudiante(string _codigo,string _facultad,string _correo, string _apellios, string _nombres,string dni) : Persona(_apellios,_nombre,_dni)
    {
        codigo_estudiante = _codigo;
        facultad = _facultad;
    }

    //...................................................................................................................................................

    string getcodigo()
    {
        return codigo_estudiante;
    }
    void setcodigo_estudiante(string _codigoestudiante)
    {
        codigo_estudiante = _codigo_estudiante;
    }

    //...................................................................................................................................................

    string getApellidos()
    {
        return apellidos;
    }
    void setApellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }

    //.................................................................................................................................................

    string getNombres()
    {
        return nombres;
    }
    void setNombres(string _nombres)
    {
        nombres = _nombres;
    }

    //................................................................................................................................................

    string getCurso()
    {
        return curso;
    }
    void setCurso(string _curso)
    {
        curso = _curso;
    }

    //................................................................................................................................................

    string getFacultad()
    {
        return facultad;
    }
    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }
};