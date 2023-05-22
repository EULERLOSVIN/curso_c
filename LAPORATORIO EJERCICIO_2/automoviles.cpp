#include<iostream>
#include<string>

#include "vehiculo.cpp"           //llamo a el archivo de la clase cehiculo

using namespace std;

class Automovil : public Vehiculo     //en una herencia siempre se tiene que agregar el nombre de la clase que esta heredando
{
    //Atributos
    private:
    string color_auto;
    string marca_auto;

    public:
    
    //como estoy haciendo una herencia tengo que agregar despues de los parametros de la presente clase los parametro de la clase..
    //esta heredando y tambien poner el nombre de la clase heredadora y resaltar cuales son los pareametros agregados

    Automovil(string _color_auto = "",string _marca_auto = "",string _cilindrada_de_motor ="",string _num_asientos ="",string _num_ruedas ="",string _num_puertas ="",string _certificacion ="") : Vehiculo(_cilindrada_de_motor,_num_asientos,_num_ruedas,_num_puertas,_certificacion)
    {
        color_auto = _color_auto;
        marca_auto = _marca_auto;

    }

    string getColor_auto()
    {
        return color_auto;
    }

    void setColor_auto(string _color_auto)
    {
        color_auto = _color_auto;
    }

    string getMarca_auto()
    {
        return marca_auto;
    }

    void setMarca_auto(string _marca_auto)
    {
        marca_auto = _marca_auto;
    }

    string getDatos_auto()   //esta funcion me sirve para agrupar los datos de las demas funciones y concatenarlos 
    {
        return "\nMARCA: " + getMarca_auto() + "\nCOLOR: " + getColor_auto() +  getDatos_vehiculo() + "\n\n" ;
    }  //tambien resalto que  en la concatenacion esta una funcion de la clase heredadora

        
        

};

