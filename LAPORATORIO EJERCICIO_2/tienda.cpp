#include<iostream>
#include<string>

#include "automoviles.cpp"             //creo una clase amiga llamando los archivos que se observan
#include "motocicleta.cpp"

using namespace std;

class Tienda 
{
    //Atributos

    protected:

    string nombre_tienda;
   
   //metodos y funciones
    public:

    Tienda(string _nombre_tienda = "")  //constructor
    {
        nombre_tienda = _nombre_tienda;
        
    }

    //getter and setter

    string getNombre_tienda()
    {
        return nombre_tienda;
    }

    void setNombre_tienda(string _nombre_tienda)
    {
        nombre_tienda = _nombre_tienda;
    }
    

};