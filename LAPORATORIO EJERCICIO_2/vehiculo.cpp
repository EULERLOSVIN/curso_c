//Elabora un programa que implemete una clase denominada vehiculo que contenga los siguientes atributos: cilindarada de motor ;numero
//de asientos, numero de ruedas ,numero de puettas,certificacion de seguridad . implemente dos clases automoviles  y motocicleta  que
//hereden los atributos de vehiculo, y contengan atributos de color y marca  se desea contar con un arreglo de 10 automoviles 
//y 5 motocicletas.implementar un metodo para imprimir un reporte con la siguiente estructura nombre de la tienda ,lista de automoviles
// a detalle y lista motocicletas


#ifndef VEHICULO_H   //como esta clase se va heredar a dos clases "automoviles" y  "motocicleta" luego en el "main" voy.....
#define VEHICULO_H   //a tener que llmamar a estas dos clases tambien entonces me va a salir error al compilar porque.......
//                   se esta practicamente hay doble existencia de heredacien en las dos clases mencionadas.....
//      entonces para solucionar este problema se utiliza estas librerias 


#include<iostream>
#include<string>            //libreria para el uso de cadenas

using namespace std;     

class Vehiculo           //nombre de mi clase
{
    //Atributos
    protected:
    string cilindrada_de_motor;
    string num_asientos;
    string num_ruedas;
    string  num_puertas;
    string certificacion;

    public:
    
    //costructor               sirve para inicializar mi clase

    Vehiculo(string _cilindrada_de_motor="",string _num_asientos="",string _num_ruedas="",string _num_puertas="",string _certificacion="")
    {
        cilindrada_de_motor = _cilindrada_de_motor;
        num_asientos = _num_asientos;
        num_ruedas = _num_ruedas;
        num_puertas = _num_puertas;
        certificacion = _certificacion; 


    }

    //getter and setter     =====> son funciones que me permiten manipular o usar los atributos de mi clase

    string getCilindrada()
    {
        return cilindrada_de_motor ;

    }

    void setCilindrada(string _cilindrada_de_motor)
    {
        cilindrada_de_motor = _cilindrada_de_motor;
    }

    string getNum_asientos()
    {
        return num_asientos;
    }

    void setNum_asientos(string _num_asientos)
    {
        num_asientos = _num_asientos;
    }

    string getNum_ruedas()
    {
        return num_ruedas;
    }

    void setNum_ruedas(string _num_ruedas)
    {
        num_ruedas = _num_ruedas;
    }

    string getNum_puertas()
    {
        return num_puertas;
    }

    void setNum_puertas(string _num_puertas)
    {
        num_puertas = _num_puertas;
    }

    string getCertificacion()
    {
        return certificacion;

    }

    void setCertificacion(string _Certificacion)
    {
        certificacion = _Certificacion;
    }

    string getDatos_vehiculo()     //esta funcion agrupa y concanetana los datos de todas las funciones de mi clase
    {
        return "\nCILINDRADA: " + getCilindrada() + "\nNUMERO DE ACIENTOS: " + getNum_asientos() + "\nCERTIFICACION: " + getCertificacion();
    }
        




};
#endif //VEHICULO_H               esto es parte de la libreria que agregue al comienzo pero es necesario poner el #endif al final