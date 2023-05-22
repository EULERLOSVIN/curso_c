// 20/04/2023

#include<iostream>
#include<string.h>
using namespace std;

class Facultad
{
    //Atributos
    
    private:
    string codigo;
    string nombre;
    string siglas;

    //metodos y funciones
    public:

    Facultad(string _codigo, string _nombre, string _siglas)
    {
     codigo = _codigo;
     nombre= _nombre;
     siglas = _siglas;
    }

    //getter and setter
    //..............................................................................................................................................

    string getCodigo()
    {
        return codigo;
    }
    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    //..............................................................................................................................................

    string getnombre()
    {
        return nombre;
    }
    void setnombre(string _nombre)
    {
        nombre = _nombre;
    } 
    
    //..............................................................................................................................................

    string getSiglas()
    {
        return siglas;
    }
    void setSiglas(string _siglas)
    {
        siglas = _siglas;
    }

    string toString()
    {
        string descripcion = codigo + " " + nombre +" " + siglas;

        return descripcion;
    }
    
    string imprimir()
    {
        cout<< codigo <<"\t"<<nombre<<"\t"<<siglas<<"\n";

    }

};

