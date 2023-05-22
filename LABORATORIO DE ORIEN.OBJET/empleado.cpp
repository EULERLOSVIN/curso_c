//calse empleado que esta heredando de la clase persona

#include <iostream>
#include <string>

#include "persona.cpp"    //se esta llamando el archivo de "persona" para que sea reconocido aqui tambien junto con sus funciones

using namespace std;

class Empleado : public Persona     //como es una herencia agregamos a clase persona como publico
{
    //atributos
    protected:
    string puesto;
    string sueldo;
    string antiguedad;

    
    //como es una herencia en el constructor pongo tambien los parametros de la funcion de la que esta heredando
    //tambien pongo al final la clases que esta heredando y pongo cuales son los parametros que le esta pasando a esta clase

    public:
    Empleado(string _puesto = "", string _sueldo = "", string _antiguedad = "", string _nombres = "", string _apellidos = "", string _dni = "") : Persona(_nombres, _apellidos, _dni)
    {
        puesto = _puesto;
        sueldo = _sueldo;
        antiguedad = _antiguedad;
    }

    //getter and setter     =====> son funciones que me permiten manipular o usar los atrinutos de mi clase

    string getPuesto() 
    {
        return puesto;
    }

    void setPuesto(string _puesto) 
    {
        puesto = _puesto;
    }

    string getSueldo()
    {
        return sueldo;
    }

    void setSueldo(string _sueldo) 
    {
        sueldo = _sueldo;
    }

    string getAntiguedad()
    {
        return antiguedad;
    }

    void setAntiguedad(string _antiguedad)
    {
        antiguedad = _antiguedad;
    }

    string imprimir_empleado()   //agrupo los datos de mis funciones y tambien llamo a una funcion de persona y lo concateno
    {
        return imprimir_persona() + "\nPUESTO: " + getPuesto() + "\nSUELDO: " + getSueldo() + "\nANTIGUEDAD: " + getAntiguedad() + " años";
       
    }


};
        

        

