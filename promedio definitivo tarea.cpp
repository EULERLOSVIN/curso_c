#include<iostream>

using namespace std;  //estamos afirmando que usaremos el espacio de nombre cout y cin

float promedio(float nota1,float nota2,float nota3)  //en esta funcion se integran los datos (nota1),(nota2) y (nota3);
{
    float promedio = 0;  //declarando variable.

    promedio=(nota1 + nota2 + nota3)/3;  //operación

    cout<<"EL PROMEDIO ES = "<<promedio;


}

int main()
{
    system("cls");    //se agrega por estética para no mostrar los datos o texto que muestra x defeco al compilarse .
    float nota1,nota2,nota3;  //se esta declarando el tipo de variables que vamos a usar.
    cout<<"INGRESE NOTA 1"<<endl;  //texto que pide el ingreso del dato.
    cin>>nota1;  //captura el primer dato.
    cout<<"INGRESE NOTA 2"<<endl;
    cin>>nota2;   //captura el segundo dato.
    cout<<"INGRESE NOTA 3"<<endl;
    cin>>nota3;  //captura el tercer dato;
    system("cls");

    promedio(nota1,nota2,nota3);  //aquí llamamos a la función (promedio) para que se ejecute en esta función.


    return 0;

}








