#include<iostream>
#include<string>
#include<vector>

#include "serviciotaller.cpp"


//para evitar la redefinicion de la clase
#ifndef EMPLEADO_H
#define EMPLEADO_H

class Empleado
{
    private:
    string nombre;
    string apellidos;
    string especialidad;
    int anosExperiencia;
    vector<ServicioTaller> serviciosAsignados;

    public:  // constructor y parametros, usamos el cosnt para evitar que se modifiquen
    Empleado(const string& nombre, const string& apellidos, const string& especialidad, int anosExperiencia)
    : nombre(nombre), apellidos(apellidos), especialidad(especialidad), anosExperiencia(anosExperiencia) {}
    //metodos getter and setter
    string getNombre() const
    {
        return nombre;
    }

    string getApellidos()const 
    {
        return apellidos;
    }

    string getEspecialidad() const
    {
        return especialidad;
    }

    int getAnosExperiencia() const
    {
        return anosExperiencia;
    }
    
   //metodo para asignar servicios, usando el almacenamiento
    void asignarServicio(const ServicioTaller& servicio)
    {
        serviciosAsignados.push_back(servicio);
    }
    // Método para mostrar los servicios asignados al empleado y todos los detalles del parametro
    void mostrarServiciosAsignados() const
    {
        cout << "Servicios realizados a " << nombre << " " << apellidos << ":" << endl;
        for (const ServicioTaller& servicio : serviciosAsignados)
        {
            cout << "TIPO DE SERVICIO: " << servicio.getNombre() << endl;
            cout << "DESCRIPCION: " << servicio.getDescripcion() << endl;
            cout << "TIEMPO QUE TOMA HACER EL SERVICIO: " << servicio.getTiempoEstimado() << " horas" << endl;
            cout << "FECHA DEL SERVICIO QUE SE REALIZO: "  << servicio.getFecha() << endl;
            cout << "===============================================================================" << endl;
        }
    }
    // Método para calcular el tiempo total de los servicios asignados al empleado
    int calcularTiempoTotal() const
    {
        int tiempoTotal = 0;
        for (const ServicioTaller& servicio : serviciosAsignados)
        {
            tiempoTotal += servicio.getTiempoEstimado();
        }
        return tiempoTotal;
    }

};
#endif

