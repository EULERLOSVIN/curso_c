


//                                                             FECHA:16/04/2023

//EN ESTE CASO ESTAMOS CAMBIANDO VALOR DEUN EJERCICIO ECHO EN CLASES Y LUEGO DEBEMOS IMPRIMIR EL VALOR DEL NUEVO NUMERO ,SU DIRECCION DE MEMORIA Y EL NUMERO ANTIGUO TAMBIEN

#include <iostream>
using namespace std;
int main()
{
    system("cls");//limpiar pantalla
    
    
    int num = 5, i;      
    int *p;   //declarando la variable que representa al puntero
    
    p = &num; // muestra la direccion de memoria de la variable

    if(num==1)  //si se lee un 1, se imprime directamente que no es primo                                           
    {
        cout << "\nNo es primo" << endl;
    }
    else
    {
        i=2;          //i es el divisor
        while(num%i!=0) //mientras el numero sea divisible por el divisor
        {
            i++;      //siguiente divisor
        }
        //cuando sale del while, si el divisor es el propio numero
        //entonces el numero es primo
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
