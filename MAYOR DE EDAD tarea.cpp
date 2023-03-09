#include<iostream>

using namespace std; //estamos diciendo que vamos a usar los espacios de nombre cout y cin.

int calcular_edad(int anio_nacimiento)  //en esta función se esta integrando el valor de la variable (anio_nacimiento)
{
    int edad;  //declarando variable.

    edad = 2023 - anio_nacimiento;  //operación .
    cout<<"USTED TIENE "<<edad<<" ANIOS"<<endl;   //aquí muestra en pantalla la edad.

    if(edad<18 )  //primera condición.
    {
        cout<<"POR LO TANTO ES MENOR DE EDAD";

    }

    else  //si no se cumple el anterior recien se ejecuta esta condición.
    {
        cout<<"POR LO TANTO ES MAYOR DE EDAD";
       
    }

    
    
    return edad;

}

int main()
{
    int anio_nacimiento; //declarando variable.
    system("cls");  //para que no salgan los datos anteriores.

    cout<<"INGRESE SU ANIO DE NACIMIENTO "<<endl;
    cin>>anio_nacimiento;  //captura el valor ingresado en esta variable.

    system("cls");  //se está usando para borrar los datos anteriores que permaneceran de manera interna.

    calcular_edad(anio_nacimiento);   //llamamos a está función para que se ejecute dentro de esta función.


    return 0;
}

