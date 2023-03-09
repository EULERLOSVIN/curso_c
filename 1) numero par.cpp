#include<iostream>

using namespace std;

int main()
{
    system("cls"); //borrar pantalla


    int numero;  //declaración de variable
    int *p;     //puntero;
    p=&numero;  //muestra la direccion de memoria de la variable

    cout<<"ingrese un numero"<<endl;
    cin>>numero;;   //captura el valor de la variable

     system("cls"); //limpiar pantalla

    if(numero%2==0)   //condicion
    {
        cout<<"es par"<<endl;   //muestra en pantalla si es par



    }

    else  //si no se ejecuta o cumple la condicion recien se ejecuta el else
    {

        cout<<"es impar"<<endl;  //muestra en pantalla si es impar
    }
   

    cout<<"la direccion de memoria es "<<p<<endl;    //muestra en pantalla la direccion de memoria
    cout<<"el valor de la variable es "*p;           //muestra el valor de la variable


    return 0;
}





