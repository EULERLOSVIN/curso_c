//amiga de usuario

#include<iostream>
#include <string>

#include "usuario.cpp"
#include "vuelo.cpp"

using namespace std;

class Amiga_usuario : public Vuelo, public Pago
{
    private:
    string nombre;
    string dni;
    string contrasenia;
    //Usuario user;
    Vuelo vuelos[5];

    public:
    Amiga_usuario(string _nombre="", string _dni="", string _contrasenia="",string _origen="", string _destino="", string _empresa="", string _hora_salida="",string _hora_llegada="", string _tipoTransporte="",int _precio_vuelo = 0,string _modalidad_pago ="",string _afirmacion_pago = "") : Vuelo(_origen,_destino,_empresa,_hora_salida,_hora_llegada,_tipoTransporte,_precio_vuelo),Pago(_modalidad_pago,_afirmacion_pago)
    {
     nombre = _nombre;
     dni = _dni;
     contrasenia = _contrasenia;

    }

    string getNombre_clon()
    {
        return nombre;

    }
    void setNombre_clon(string _nombre)
    {
        nombre = _nombre;
        //user.setNombre(_nombre);  
    }

    string getDoc_identidad()
    {
        return dni;
    }

    void setDoc_identidad(string _dni)
    {
        dni = _dni;
        //user.setDni(_dni);

    }

    string getPassword()
    {
        return contrasenia;
    }

    void setPassword(string _contrasenia)
    {
        contrasenia = _contrasenia;
        //user.setContrasenia(_contrasenia);
    }

    void Llenar_user(string _nombre,string _dni,string _contrasenia)
    {
        setNombre_clon( _nombre);
        setDoc_identidad(_dni);
        setPassword(_contrasenia);


    }


    //........................................
    
    void Vuelos_disponibles()
    {
        //creo lugares disponibles donde la empresa realiza biajes(objetos)

        Vuelo vuelo_1("Espania","Nueva York, Estados Unidos","American Airlines","8.00 am","11.00 pm","Avion",100);
        Vuelo vuelo_2("Ciudad de Mexico, Mexico","Cancun, Mexico","American Airlines","10.00 am","8.00 pm","Avion",124);
        Vuelo vuelo_3("Nueva York","Los Ángeles","American Airlines","11.30 am","8.30 pm","avio",560);
        Vuelo vuelo_4(" Madrid","Paris","American Airlines","9.30 am","7.40 pm","avion",500);
        Vuelo vuelo_5("Cancun","Playa del Carmen","American Airlines","12.00 am","10.30 pm","avion",600);


        Vuelo vuelos[5] = {vuelo_1,vuelo_2,vuelo_3,vuelo_4,vuelo_5};

        for(int i=0;i<5;i++)
        {
            cout<<i+1<<")"<<vuelos[i].getDatos_vuelos();
            cout<<endl;
        }  
        
    }

    void Rellenar_parametros_amiga(int _option,string _tipo_pago)
    {

        
        Vuelo vuelo_1("Espania","Nueva York, Estados Unidos","American Airlines","8.00 am","11.00 pm","Avion",100);
        Vuelo vuelo_2("Ciudad de Mexico, Mexico","Cancun, Mexico","American Airlines","10.00 am","8.00 pm","Avion",124);
        Vuelo vuelo_3("Nueva York","Los Ángeles","American Airlines","11.30 am","8.30 pm","avio",560);
        Vuelo vuelo_4(" Madrid","Paris","American Airlines","9.30 am","7.40 pm","avion",500);
        Vuelo vuelo_5("Cancun","Playa del Carmen","American Airlines","12.00 am","10.30 pm","avion",600);


        Vuelo vuelos[5] = {vuelo_1,vuelo_2,vuelo_3,vuelo_4,vuelo_5};


        setOrigen(vuelos[_option].getOrigen());
        setDestino(vuelos[_option].getDestino());
        setEmpresa(vuelos[_option].getEmpresa());
        setHora_salida(vuelos[_option].getHora_salida());
        setHora_llegada(vuelos[_option].getHora_llegada());
        setTipoTransporte(vuelos[_option].getTipoTransporte());
        setPrecio_vuelo(vuelos[_option].getPrecio_vuelo());
        setModalidad_pago(_tipo_pago);
        setAfirmacion_pago("cancelado");
        
    }
    
   string getDatos_amiga()
   {
        return "\nNOMBRE Y APELLIDOS: " + getNombre_clon() + "\nDNI: " + getDoc_identidad() + getDatos_vuelos() + Datos_pago();

   }
    
};

