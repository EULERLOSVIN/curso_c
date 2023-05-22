#include<iostream>
#include<string>

#ifndef LIBRO_H
#define LIBRO_H

using namespace std;

class Libro
{
    //atributo
    protected:
    string codigo;
    string titulo;
    string categoria;
    string autor;
    
    public:
    Libro(string _codigo = "",string _titulo = "",string _categoria = "",string _autor = "")
    {
        codigo = _codigo;
        titulo = _titulo;
        categoria = _categoria;
        autor = _autor;
    }

    string getCodigo()
    {
        return codigo;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getTitulo()
    {
        return titulo;
    }

    void setTitulo(string _titulo)
    {
        titulo = _titulo;
    }

    string getCategoria()
    {
        return categoria;
    }

    void setCategoria(string _categoria)
    {
        categoria = _categoria;
    }

    string getAutor()
    {
        return autor;
    }

    void setAutor(string _autor)
    {
        autor = _autor;
    }

    string getData()
    {
        return "\nCODIGO DE LIBRO: " + getCodigo() + "\nTITULO: " +getTitulo() + "\nCATEGORIA: " + getCategoria() + "\nAUTOR: " + getAutor() + "\n";
    }


};
#endif//
