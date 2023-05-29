#include<iostream>
#include<string>

#include "repuesto.cpp"


#ifndef TIENDAREPUESTO_H
#define TIENDAREPUESTO_H

class TiendaRepuestos
{
    private:
    //usamos un vector para poder almacenar los atributos de repuesto
    vector<Repuesto> repuestos;

    public:
    //funcion donde estan los parametros para agregar los productos o repuestos
    void agregarRepuesto(const string& nombre, const string& codigo, double precio, int cantidad, const string& fechaRegistro, const string& categoria)
    {
        Repuesto nuevoRepuesto(nombre, codigo, precio, cantidad,fechaRegistro,categoria);
        //podemos manipular los atributos
        repuestos.push_back(nuevoRepuesto);
    }
    //funcion que nos permite actualizar  si hay cambios 
    void actualizarStock(const string& codigo, int cantidad)
    {
        for (Repuesto& repuesto : repuestos)
        {
            if (repuesto.getCodigo() == codigo)
            {
                repuesto.setCantidad(repuesto.getCantidad() + cantidad);
                cout << "Stock actualizado para el repuesto \"" << repuesto.getNombre() << "\"." << endl;
                return;
            }
        }
        cout << "No se encontró ningún repuesto con el código \"" << codigo << "\"." << endl;
    }

    //funcion que nos muestra los productos con todos sus datos

    void mostrarStockPorFecha() const
    {
        cout << "Stock de productos por fecha de registro:" << endl;
        for (const Repuesto& repuesto : repuestos)
        {
            
            cout << "NOMBRE DEL REPUESTO: " << repuesto.getNombre() << endl;
            cout << "CODIGO DEL PRODUCTO: " << repuesto.getCodigo() << endl;
            cout << "PRECIO: " << repuesto.getPrecio() <<" Soles"<< endl;
            cout << "CANTIDAD DISPONIBLE: " << repuesto.getCantidad() << endl;
            cout << "FECHA DE REGISTRO: " << repuesto.getFechaRegistro() << endl;  // Mostrar "N/A" si no hay atributo de fecha de registro
            cout << "CATEGORIA: Repuestos" <<endl;          // Mostrar "N/A" si no hay atributo de categoría
            cout << "================================================" << endl;
        }
    }
    
    //funcion que nos mustra los productos disponibles
    void mostrarRepuestosDisponibles() const
    {
        cout << "REPUESTOS DISPONIBLES:" << endl;
        for (const Repuesto& repuesto : repuestos)
        {
            cout << "NOMBRE DEL PRODUCTO: " << repuesto.getNombre() << endl;
            cout << "CODIGO: " << repuesto.getCodigo() << endl;
            cout << "PRECIO: " << repuesto.getPrecio() <<" Soles"<< endl;
            cout << "CANTIDAD DISPONIBLE: " << repuesto.getCantidad() << endl;
            cout << "=================================================" << endl;
        }
    }

    //nos muestra los repuestos que no se venden
    void mostrarRepuestosNoVendidos() const
    {
        cout << "REPUESTOS QUE NO SE VENDIERON:" << endl;
        bool encontrados = false;
        for (const Repuesto& repuesto : repuestos)
        {
            if (repuesto.getCantidad() == 0)
            {
                cout << "NOMBRE: " << repuesto.getNombre() << endl;
                cout << "CODIGO: " << repuesto.getCodigo() << endl;
                cout << "PRECIO: " << repuesto.getPrecio() <<" Soles" << endl;
                cout << "========================================" << endl;
                encontrados = true;
            }
        }
        if (!encontrados)
        {
            cout << "No hay repuestos no vendidos." << endl;
        }
    }
};
#endif