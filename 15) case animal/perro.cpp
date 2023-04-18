#include<iostream>
#include<string>

#include "animal.cpp"

using namespace std;

class Perro : Animal
{
    private:

    string ladra;
    string raza;
    string color;
    
    public:

    Perro (string _ladra,string _raza, string _color,string _familia, string _ojos, int _num_patas, string _oreja, string _cola, bool _dientes) : Animal( _familia, _ojos, _num_patas,_oreja,_cola,_dientes )
    {
        ladra = _ladra;
        raza = _raza;
        color = _color;
    }

    //..................................................................................................................

    string getladra()
    {
        return ladra;
    }

    void setladra(string _ladra)
    {
        ladra = _ladra;
    }
    //..................................................................................................................

    string getraza ()
    {
        return raza;
    }

    void setraza(string _raza)
    {
        raza = _raza;
    }
    //.................................................................................................................

    string getcolor()
    {
        return color;
    }

    void setcpolor(string _color)
    {
        color = _color;
    }

    //==================================================================================================================

    //funciones_perro

    void funciones_perro()
    {
        cout<<"El perro "<<getladra()<<endl,
        cout<<"De raza: "<<getraza()<<endl;
        cout<<"color :"<<getcolor()<<endl;
    }

    void funciones_animal()
    {
        cout<<"familia :"<<getfamilia()<<endl;
        cout<<"ojos : "<<getojos()<<endl;
        cout<<"cuantas patas tiene? "<<getnum_patas()<<" patas"<<endl;
        cout<<"Tiene orejas? :"<<getoreja()<<endl;
        cout<<"tiene cola ? :"<<getcola()<<endl;
        cout<<"tiene dientes? :"<<getdientes()<<endl;
    }
    


};
