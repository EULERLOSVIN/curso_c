#include <iostream>
using namespace std;
int main()
{
    system("cls");
    
    
    int num = 5, i;      // limpiar pantalla
    int *p;   //declarando la variable que representa al puntero
    
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
    cout << "el numero es " << num << endl;
    cout <<"la direccion de memoria es "<< p << endl; // mostramos por pantalla la direccion de memoria que le asignamos a numero
    *p = 53; // asignar un nuevo valor a la variable
    cout << "el  nuevo numero es " << num;
}