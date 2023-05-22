#include<iostream>
#include<string>

#include "vehiculo.cpp"   //incluyo el archivo vehiculo en esta clase


using namespace std;

class Motocicleta : public Vehiculo   //en una herencia siempre se tiene que agregar el nombre de la clase que esta heredando
{
    //Atributos
    protected:
    string color_moto;         
    string marca_moto;

    public:
    
    //en el CONSTRUCTOR incluyo tanto los parametros de la presente clase como lo de la clase heredadora...
    //y tambien pongo el nombre y cuales son los parametros de la clase que esta heredando

    Motocicleta(string _color_moto ="",string _marca_moto ="",string _cilindrada_de_motor ="",string _num_asientos = "",string _num_ruedas ="",string _num_puertas ="",string _certificacion ="") : Vehiculo(_cilindrada_de_motor,_num_asientos,_num_ruedas,_num_puertas,_certificacion)
    {
        color_moto = _color_moto;
        marca_moto = _marca_moto;
    }

    //getter and setter

    string getColor_moto()
    {
        return color_moto;
    }

    void setColor_moto(string _color_moto)
    {
        color_moto = _color_moto;
    }

    string getMarca_moto()
    {
        return marca_moto;
       
    }

    void setMarca_moto(string _marca_moto)
    {
        marca_moto = _marca_moto;
    }

    string getDatos_motos() //funcion para agrupar y contaytenar las funciones de la presete clase
    {
        
        return "\nMARCA: " + getMarca_moto() +"\nCOLOR: " + getColor_moto() +  getDatos_vehiculo() + "\n\n" ;

    }  //resalto que en la concatenacion esta tambien una funcion de la clase heredadora

       
};