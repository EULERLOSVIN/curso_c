#include<iostream>
#include<string>


using namespace std;

class Biblioteca
{
    //Atributos

    protected:
    string codigo_biblioteca;
    string nombre_biblioteca;
    string direccion_biblioteca;
    string telefono_biblioteca;
    
    public:
    Biblioteca(string _codigo_biblioteca ="",string _nombre_biblioteca ="",string _direccion_biblioteca ="",string _telefono_biblioteca ="")
    {
        codigo_biblioteca = _codigo_biblioteca;
        nombre_biblioteca = _nombre_biblioteca;
        direccion_biblioteca = _direccion_biblioteca;
        telefono_biblioteca = _telefono_biblioteca;

    }

    //gettter and setter
    string getCodigo()
    {
        return codigo_biblioteca;
    }

    void setCodigo(string _codigo_biblioteca)
    {
        codigo_biblioteca = _codigo_biblioteca;
    }

    string getNombre_biblioteca()
    {
        return nombre_biblioteca;
    }

    void setNombre_biblioteca(string _nombre_biblioteca)
    {
        nombre_biblioteca = _nombre_biblioteca;
    }

    string getDireccion()
    {
        return direccion_biblioteca;
    }

    void setDireccion(string _direccion_biblioteca)
    {
        direccion_biblioteca = _direccion_biblioteca;
    }

    string getTelefono()
    {
        return telefono_biblioteca;
    }

    void setTelefono(string _telefono_biblioteca)
    {
        telefono_biblioteca = _telefono_biblioteca;
    }
    //...............................................................................................................
   

    

};