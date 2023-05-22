
// bibliotecario, usuario
#include <iostream>
#include <string>
#include "biblioteca.cpp"
#include "libro.cpp"
#include "persona.cpp"

using namespace std;

class Bibliotecario : Persona
{
    // atributo
    private:
    string codigo_biblioteca;
    Biblioteca biblioteca;

    public:
    Bibliotecario (string _codigo_biblioteca = "", string _dni = "", string _apellidos = "", string _nombres = "", string _correo = "", string _telefono = "", string _direccion = "") : Persona(_dni, _apellidos, _nombres, _correo, _telefono, _direccion)
    {
        codigo_biblioteca = _codigo_biblioteca;
    }

    // getter and setter

    string getCodigo()
    {
        return codigo_biblioteca;
    }

    void setCodigo(string _codigo_biblioteca)
    {
        codigo_biblioteca = _codigo_biblioteca;
    }

    Biblioteca getBiblioteca()
    {
        return biblioteca;
    }

    void setBiblioteca(Biblioteca _biblioteca)
    {
        biblioteca = _biblioteca;
    }
};


class Usuario : Persona
{
    // atributo
    private:
    string codigo_usuario;
    Libro libros[5];

    public:
    Usuario(string _codigo_usuario = "", string _dni = "", string _apellidos = "", string _nombres = "", string _correo = "", string _telefono = "", string _direccion = "") : Persona(_dni, _apellidos, _nombres, _correo, _telefono, _direccion)
    {
        codigo_usuario = _codigo_usuario;
    }

    // getter and setter

    string getCodigo()
    {
        return codigo_usuario;
    }

    void setCodigo(string _codigo_usuario)
    {
        codigo_usuario = _codigo_usuario;
    }

    string getDatos_usuarios()
    {
        return ""+getDatos_persona();
    }
   
    string getLibros(int _libro)
    {
        return libros[_libro].getData();
    }

   


};