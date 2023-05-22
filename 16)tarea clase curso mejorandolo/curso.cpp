// 20/04/2023

#include<iostream>
#include<string.h>
using namespace std;

class Curso{
    private:
    string codigo;
    string descripcion;
    int credito;
    float nota_1;
    float nota_2;
    float nota_3;

    //METODOS Y FUNCIONES
    public:
    Curso(string _codigo, string _descripcion, int _credito/*/, float _nota_1, float _nota_2, float _nota_3/**/)
    {
        codigo = _codigo;
        descripcion = _descripcion;
        credito = _credito;
        /*nota_1 = _nota_1;
        nota_2 = _nota_2;
        nota_3 = nota_3;*/
    }

    //...............................................................................................................................................

    //GETTER AND SETTER
    string getCodigo()
    {
        return codigo;
    }
    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    //...............................................................................................................................................

    string getDescripcion()
    {
        return descripcion;
    }
    void setDescripcion(string _descripcion)
    {
        descripcion = _descripcion;
    }
    //...............................................................................................................................................

    int getCredito(){
        return credito;
    }

    void setCredito(int _credito)
    {
        credito = _credito;
    }
    //.................................................................................................................................................

    float getNota_1()
    {
        return nota_1;
    }

    void setNota_1(float _nota_1){
        nota_1 = _nota_1;
    }

    //..................................................................................................................................................

    float getNota_2()
    {
        return nota_2;
    }

    void setNota_2(float _nota_2)
    {
        nota_2 = _nota_2;
    }
    //..................................................................................................................................................

    float getNota_3()
    {
        return nota_3;
    }
    void setNota_3(float _nota_3)
    {
        nota_3 = _nota_3;
    }
    //...................................................................................................................................................

    float promedio()
    {
        float promedio = 0;
        promedio = (nota_1 + nota_2 + nota_3)/3;
        
        return promedio;
    }
    
    //...................................................................................................................................................
    void getImprimir_datos()
    {
        cout<<"EL CODIGO DEL ESTUDIANTE ES: "<<getCodigo()<<endl;
        cout<<"EL CURSO ES: "<<getDescripcion()<<endl;
        cout<<"EL CURSO TIENE "<<getCredito()<<" CREDITOS"<<endl;
        cout<<"EL PROMEDIO ES: "<<promedio();
    }
};
