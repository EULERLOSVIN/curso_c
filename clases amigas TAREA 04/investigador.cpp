#include <iostream>
#include <string>

using namespace std;

class Investigador
{
    // Atributos

    private:
    string codigo;
    string especialidad;
    string libros_publicados;

    public:
    Investigador(string _codigo = "", string _especialidad = "",string _libros_publicados = "")
    {
        codigo = _codigo;
        especialidad = _especialidad;
        libros_publicados = _libros_publicados;
    }

    // getter and setter

    string getCodigo()
    {
        return codigo;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getEspecialidad()
    {
        return especialidad;
    }

    void setEspecialidad(string _especialidad)
    {
        especialidad = _especialidad;
    }

    string getLibros()
    {
        return libros_publicados;
    }

    void setLibros(string _libros_publicados)
    {
        libros_publicados=_libros_publicados;
    }

    

    string getDatos_investigador()
    {
        cout << "\n";
        cout << "CODIGO: " + getCodigo();
        cout << "ESPECIALIDAD: " + getEspecialidad();
        cout<<"Libros publicados: " + getLibros();

        return "";
    }

   
};