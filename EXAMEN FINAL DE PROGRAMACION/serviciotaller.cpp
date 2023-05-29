#include <iostream>
#include <string>
#include <vector>

using namespace std;
#ifndef SERVICIOTALLER_H
#define SERVICIOTALLER_H

class ServicioTaller
{
    private:
    string nombre;
    string descripcion;
    int tiempoEstimado;
    string fecha;

    public:  // constructor y parametros
    ServicioTaller(const string& nombre, const string& descripcion, int tiempoEstimado, string fecha)
    : nombre(nombre), descripcion(descripcion), tiempoEstimado(tiempoEstimado), fecha(fecha) {}
    //getter and setter
    string getNombre() const
    {
        return nombre;
    }

    string getDescripcion() const
    {
        return descripcion;
    }

    int getTiempoEstimado() const
    {
        return tiempoEstimado;
    }

    string getFecha() const
    {
        return fecha;
    }
};
#endif
