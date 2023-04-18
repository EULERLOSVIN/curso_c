#include<iostream>
#include<string>

#include "animal.cpp"

using namespace std;

class Gato : Animal 
{
    private:

    int vidas;
    bool maulla;
    bool es_domesticado;


    public:

    Gato(int _vidas, bool _maulla, bool _es_domesticado, string _familia, string _ojos, int _num_patas, string _oreja, string _cola, bool _dientes) : Animal(_familia,_ojos,_num_patas,_oreja,_cola,_dientes)
    {
        vidas = _vidas;
        maulla = _maulla;
        es_domesticado = _es_domesticado;

    }
    //...............................................................................................................
    int getvidas()
    {
        return vidas;
    }

    void setvidas(int _vidas)
    {
        vidas = _vidas;
    }
    //................................................................................................................
    bool getmaulla()
    {
       
        return maulla;
    }

    void setmaulla(bool _maulla)
    {
        maulla = _maulla;
    }
    //...............................................................................................................
    bool getes_domesticado()
    {
        
        return es_domesticado;
    }

    void setes_domesticado(bool _es_domesticado)
    {

        es_domesticado = _es_domesticado;


    }

    //=================================================================================================================
    
    //funciones de la clase gato

    void funciones_gato()
    {
        cout<<getvidas()<<endl;
        cout<<getmaulla()<<endl;
        cout<<getes_domesticado()<<endl;
    }
    //............................................................................................................

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