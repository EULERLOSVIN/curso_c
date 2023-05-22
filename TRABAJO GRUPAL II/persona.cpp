#include<iostream>
#include<string>

using namespace std;

class Persona
{
    protected:
    string dni;
    string apellidos;
    string nombres;
    string correo;
    string telefono;
    string direccion;

    public:

    Persona(string _dni = "",string _apellidos = "",string _nombres = "",string _correo ="",string _telefono ="",string _direccion = "")
    {
        dni = _dni;
        apellidos = _apellidos;
        nombres = _nombres;
        correo = _correo;
        telefono = _telefono;
        direccion = _direccion;
    }

    //getter and setter

    string getDni()
    {
        return dni;
    }

    void setDni(string _dni)
    {
        dni = _dni;
    }

    string getApellidos()
    {
        return apellidos;
    }

    void setApellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }

    string getNombres()
    {
        return nombres;
    }

    void setNombres(string _nombres)
    {
        nombres = _nombres;
    }

    string getCorreo()
    {
        return correo;
    }

    void setCorreo(string _correo)
    {
        correo = _correo;
    }

    string getTelelefono()
    {
        return telefono;
    }

    void setTelefono(string _telefono)
    {
        telefono = _telefono;
    }

    string getDireccion()
    {
        return direccion;
    }

    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }

    string getDatos_persona()
    {
        return "\nNOMBRES: " + getNombres() + "\nAPELLIDOS: " + getApellidos() + "\nDNI: " + getDni() + "\nCORREO: " + getCorreo() + "TELEFONO: " + getTelelefono() + "DIRECCION: " + getDireccion() + "\n";
    }
    

};