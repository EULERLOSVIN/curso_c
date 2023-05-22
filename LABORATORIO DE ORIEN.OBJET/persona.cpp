
// fecha: 08/05/2023

//1. Implemente una clase persona que contenga como atributos nombres, apellidos, dni, fecha nacimiento, edad. asi mismo
//implemente una clase empleado que herede de persona, los atributos de empleado son puesto, sueldo y antiguedad.
//cree una clase departamento con los atributos de nombre y siglas que contenga un arreglo de 10 empleados registrados 
//imprima un reporte de departamento y sus empleados en txt 

//clase personaS

#include<iostream>
#include<string>          //libreria para declarar y ahcer uso d variables como cadena

using namespace std;   

class Persona                 //declaro mi clase
{
    //atributos
    protected:   //el protected lo pongo porque esta clase lo voya heredar a "empleado"

    string nombres;
    string apellidos;
    string dni;
    string fecha_nacimiento ;    //como voy a requerir su "dni" de la persona esta variable no lo voy a poner en el constructor
    string edad;                  //igualmente con esta variable su "dni" de una persona ya me estaria dando estos datos 

    public:

    Persona(string _nombres = "",string _apellidos = "",string _dni = "")   //constructor para iniciar la clase
    {
        nombres = _nombres;
        apellidos = _apellidos;   //solo agrego el uso de tres atributos que cosidero mas importantes para el proposito
        dni = _dni;
    }

    //getter and setter        =====> son funciones que me permiten manipular o usar los atrinutos de mi clase

    string getNombres()
    {
        return nombres;
    }

    void setNombres(string _nombres)
    {
        nombres = _nombres;

    }

    string getApellidos()
    {
        return apellidos;
    }

    void setApellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }

    string getDni()
    {
        return dni;
    }

    void setDni(string _dni)
    {
        dni = _dni;
    }

    string getFecha_nacimiento()
    {
        return fecha_nacimiento;
    }
    void setFecha_nacimiento(string _fecha_nacimiento)
    {
        fecha_nacimiento = _fecha_nacimiento;
    }

    string getEdad()
    {
        return edad;
    }

    void setEdad(string _edad)
    {
        edad = _edad;

    }

    string imprimir_persona()  //esta ultima funcion es para agrupar y mostrar los datos de las otras funciones;
    {
        return "NOMBRE: " + getNombres() + "\nAPELLIDOS: " + getApellidos() + "\nDNI: " + getDni();
        
    }

};
        