//esta es mi clase independiente que no heredan ni le heredan pero sera de utilidad

#include<iostream>
#include<string>       //libreria para hacer uso de funcionalidades de cadena


using namespace std;

class Departamento 
{
    //Atributos
    public:
    string nombre_dep;
    string siglas;
   
    Departamento(string _nombre_dep = "",string _siglas = "")   //constructor
    {
        nombre_dep = _nombre_dep;
        siglas = _siglas;
    }
    
    //getter and setter     =====> son funciones que me permiten manipular o usar los atrinutos de mi clase

    public:
    string getNombre_dep()
    {
        return nombre_dep;
    }

    void setNombre_dep(string _nombre_dep)
    {
        nombre_dep = _nombre_dep;
    }

    string getSiglas()
    {
        return siglas;
    }

    void setSiglas(string _siglas)
    {
        siglas = _siglas;
    }


   string Datos_depa()
    {   
    
        cout<<"DEPARATAMENTO: "<<getNombre_dep() + "   SIGLAS: " <<getSiglas()<<endl;

        return "";
          
    }    

};

