#include<iostream>
#include <string>

//#ifdef USUARIO_H
//#define USUARIO_H
using namespace std;

class Usuario 
{
    protected:
    string nombre;
    string dni;
    string contrasenia;
    public:
    Usuario(string _nombre="", string _dni="", string _contrasenia="")
    {
     nombre = _nombre;
     dni = _dni;
     contrasenia = _contrasenia;
    }
    string getNombre() 
    {
     return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getDni()
    {
     return dni;
    }
    void setDni(string _dni)
    {
        dni = _dni;
    }
    
    string getContrasenia() 
    {
        return contrasenia;
    }
    void setContrasenia(string _contrasenia)
    {
        contrasenia = _contrasenia;   
    }

    string getDatos_usuario()
    {
        return "\nNOMBRE Y APELLIDOS: " + getNombre() + "\nDNI: " + getDni();
    }
        
       
};

//#endif // USUARIO_H

