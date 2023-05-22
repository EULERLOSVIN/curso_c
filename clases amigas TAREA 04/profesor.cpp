#include <iostream>
#include <string>

using namespace std;

class Profesor
{
    // Atributos
private:
    string nombres;
    string dni;
    string facultad;

public:
    Profesor(string _nombres = "", string _dni = "", string _facultad = "") // costructor
    {
        nombres = _nombres;
        dni = _dni;
        facultad = _facultad;
    }

    // getter and setter

    string getNombres()
    {
        return nombres;
    }

    void setNombres(string _nombres)
    {
        nombres = _nombres;
    }

    void setDni(string _dni)
    {
        dni = _dni;
    }
    string getDni()
    {
        return dni;
    }

    string getFacultad()
    {
        return facultad;
    }

    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }

    string getDatos_doc()
    {
        cout << "\n";
        cout << "DOCENTE: " + getNombres()<<endl;
        cout << "DNI: " + getDni()<<endl;
        cout << "FACULTAD: " + getFacultad()<<endl;

        return "";
    }
};