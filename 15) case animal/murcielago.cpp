#include<iostream>
#include<string>
#include "animal.cpp"

using namespace std;

class Murcielago : Animal
{
    private:

    string alimentacion;
    string habitat;
    string alas;
    
    public:

    Murcielago(string _alimentacion,string _habitat,string _alas,string _familia, string _ojos, int _num_patas, string _oreja, string _cola, bool _dientes) : Animal(_familia,_ojos,_num_patas,_oreja,_cola,_dientes)
    {
        alimentacion = _alimentacion;
        habitat = _habitat;
        alas = _alas;
    }
    //...................................................................................................................
    string getalimentacion()
    {
        return alimentacion;
    }
    
    void setalimentacion(string _alimentacion)
    {
        alimentacion = _alimentacion;
    }

    //...................................................................................................................

    string gethabitat()
    {
        return habitat;
    }

    void sethabitat(string _habitat)
    {
        habitat = _habitat;
    }

    //...................................................................................................................

    string getalas()
    {
        return alas;
    }

    void setalas(string _alas)
    {
        alas = _alas;
    }
    
    //===================================================================================================================
    
    //funciones de la clase murcielago

    void funciones_murcielago()
    {
        cout<<getalimentacion()<<endl;
        cout<<gethabitat()<<endl;
        cout<<getalas()<<endl;
    }
    //....................................................................................................................

    //funciones de la clase animal

    void funciones_animal()
    {
        cout<<getfamilia()<<endl;
        cout<<getojos()<<endl;
        cout<<getnum_patas()<<endl;
        cout<<getoreja()<<endl;
        cout<<getcola()<<endl;
        cout<<getdientes()<<endl;
    }

};