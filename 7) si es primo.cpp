
//                                     FECHA: 09/03/2023

//HCER UN PROGRAMA EN EL CUAL ASIGNES UN VALOR A UNA VARIABLE Y DECLARES TAMBIEN UN PUNTERO .LUEGO SE DEBE IMPRIMIR SI EL NUMERO ES PRIMO O NO
//Y TAMBIEN SE DEBE IMPRIMIRLA DIRECCION DE MEMORIA DEL DATO

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    // limpiar pantalla
    //declaración de variables
    int num = 5, i;
    int *p;
    
    p = &num; // muestra la direccion de memoria de la variable

    if(num==1)  //si se lee un 1, se imprime directamente que no es primo                                           
    {
        cout << "\nNo es primo" << endl;
    }
    else
    {
        i=2;          //i es el divisor
        while(num%i!=0) //mientras el número sea divisible por el divisor
        {
            i++;      //siguiente divisor
        }
        //cuando sale del while, si el divisor es el propio número
        //entonces el número es primo
        if(i==num)      
            cout << "\nel numero es Primo" << endl;   
        else
            cout << "\nNo es primo" << endl; 
    }
    cout <<"la direccion de memoria es "<< p << endl; // mostramos por pantalla la direccion de memoria que le asignamos a numero
   
}
