#include<iostream>
#include<string>

using namespace std;

class Persona
{
    //Atributos

    protected:

    string apellidos;
    string nombres;
    string direccion;
    string dni;

    //Metodos y funciones

    public:

    Persona(string _apellidos,string _nombres,string _dni)                //constructor
    {
        apellidos = _apellidos;
        nombres = _nombres;
        dni = _dni;

    }

    //Metodos getter and setter

    string getapellidos()
    {
        return apellidos;
    }

    void setapellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }

    //.....................................................
    string getnombres()
    {
        return nombres;
    }

    void setnombres(string _nombres)
    {
        nombres = _nombres;
    }
    
    //.....................................................
    string getdireccion()
    {
        return direccion;
    }

    void setdireccion(string _direccion)
    {
        direccion = _direccion;
    }

    //......................................................
    string getdni()
    {
        return dni;
    }

    void setdni(string _dni)
    {
        dni = _dni;
    }

    //......................................................



 

};



/*int main()
{
    system("cls");

    Persona persona_1("Martinez Hurtado","Euler","jr 6 de agosto","76339466");

    cout<<"NOMBRES: "<<persona_1.getnombres()<<endl;
    cout<<"APELLIDOS: "<<persona_1.getapellidos()<<endl;




    cout<<endl<<endl;
    system("pause");
    return 0;


}
*/