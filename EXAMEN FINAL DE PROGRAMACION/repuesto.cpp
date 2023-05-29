#include <iostream>
#include <string>
#include <vector>

using namespace std;
//para evitar que nos salga el error de redefinicion
#ifndef REPUESTO_H
#define REPUESTO_H

class Repuesto
{
    //atributos
    protected:
    string nombre;
    string codigo;
    double precio;
    int cantidad;
    string fechaRegistro;
    string categoria;

    public:  //constructor y parametros
    Repuesto(string _nombre ="", string _codigo = "", double _precio = 0, int _cantidad = 0, string _fechaRegistro="",string _categoria=""){
        nombre = _nombre;
        codigo = _codigo;
        precio = _precio;
        cantidad = _cantidad;
        fechaRegistro = _fechaRegistro;
        categoria = _categoria;
    }
    //metodos getter and setter
    string getNombre() const {
        return nombre;
    }

    void setNombre(const string& _nombre) {
        nombre = _nombre;
    }

    string getCodigo() const {
        return codigo;
    }

    void setCodigo(const string& _codigo) {
        codigo = _codigo;
    }

    double getPrecio() const {
        return precio;
    }

    void setPrecio(double _precio) {
        precio = _precio;
    }

    int getCantidad() const {
        return cantidad;
    }

    void setCantidad(int nuevaCantidad) {
        cantidad = nuevaCantidad;
    }

    string getFechaRegistro() const {
        return fechaRegistro;
    }

    void setFechaRegistro(const string& _fechaRegistro) {
        fechaRegistro = _fechaRegistro;
    }

    string getCategoria(){
        return categoria;
    }
    void setCategoria(string _categoria){
        categoria = _categoria;
    }

    
};
#endif






