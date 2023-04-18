
//clase base o clase padre

#include<iostream>
#include<string>


using namespace std;

class Animal
{
    //atributos
    protected:
    
    string familia;
    string ojos;
    int num_patas;
    string oreja;
    string cola;
    bool dientes;
   

    
    public:
    
    // CONSTRUCTOR

    Animal(string _familia, string _ojos, int _num_patas, string _oreja, string _cola, bool _dientes )
    {
        familia = _familia;
        ojos = _ojos;
        num_patas = _num_patas;
        oreja = _oreja;
        cola = _cola;
        dientes = _dientes;
    }

    //getter and setter
    
    string getfamilia()
    {
        return familia;
    }

    void setfamilia(string _familia)
    {
        familia = _familia;
    }
    //......................................................................................................................

    string getojos()
    {
        return ojos;
    }

    void setojos(string _ojos)
    {
        ojos = _ojos;
    }

    //......................................................................................................................

    int getnum_patas()
    {
        return num_patas;
    }

    void setnum_patas(int _num_patas)
    {
        num_patas = _num_patas;
    }
    //......................................................................................................................

    string getoreja()
    {
        return oreja;
    }
    
    void setoreja(string _oreja)
    {
        oreja = _oreja;
    }
    //.....................................................................................................................

    string getcola()
    {
        return cola;
    }

    void setcola(string _cola)
    {
        cola = _cola;
    }
    //......................................................................................................................

    bool getdientes()
    {

        return dientes;
    }

    void getdiente(bool _dientes)
    {
        dientes = _dientes;

    }


};

