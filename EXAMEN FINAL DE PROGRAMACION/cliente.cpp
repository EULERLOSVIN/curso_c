#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;
#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente
{
    //parametros de la clase
    private:
    string nombre;
    string apellido;
    string direccion;
    string telefono;
    string fecha; // usamos el vector para acceder al almacenamiento y poder usar algunas funciones
    vector<string> serviciosRealizados;

    public: //metodos y constructores
    //usamos const para que no se modifiquen las variables
    Cliente(const string& nombre, const string& apellido, const string& direccion, const string& telefono, const string& fecha)
    : nombre(nombre), apellido(apellido), direccion(direccion), telefono(telefono), fecha(fecha) {}
    //metodos setter and getter
    string getNombre() const
    {
        return nombre;
    }

    string getApellido() const
    {
        return apellido;
    }

    string getDireccion() const
    {
        return direccion;
    }

    string getTelefono() const
    {
        return telefono;
    }
    
    string getFecha() const
    {
        return fecha;
    }
    //registro del servicio que recibe el cliente
    void registrarServicio(const string& servicio) 
    {
        //agregamos elementos al contenedor servicio
        serviciosRealizados.push_back(servicio);
    }
    //muestra los servicios con mas detalle
    void mostrarServiciosRealizados() const
    {
        cout << "Servicios realizados para " << nombre << " " << apellido << ":" << endl;
        cout << "fecha del servicio: " << fecha << endl;
        for (const string& servicio : serviciosRealizados)
        {
            cout << servicio << endl;
        }
    }
};
#endif

