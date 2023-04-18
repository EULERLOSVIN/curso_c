
//                                         FECHA:  12/03/2023

//HACER UN PROGRAMA CON UN ARREGLO DE CAPACIDAD 5 Y ASIGNAR VALORES EN CADA POSICION DEL ARREGLO.LUEGO CAMBIAR EL VALOR DEL DATO 3 POR 
//COMPUTADORA

#include<iostream>
#include<conio.h>  //para hacer uso del getch que sirve para cerrar el programa por teclado

using namespace std;  //Estamos diciendo que usaremos el cout y cin (entrada y salidas de datos)

int main()
{
    system("cls"); //limpiar pantalla , para que se vea mejor despues de compilar.

    string productos[5]={"arroz","azucar","aceite","cafe","huevo"};  //declaracion de variable y canidad de elementos en el array.
    productos[2]="computadora";  //remplazando el valor de la pocicion 3.

    int tamanio=sizeof(productos)/sizeof(productos[0]); //esta divición me me da la cantidad de elmentos que tiene el arreglo.

    for(int i=0;i<tamanio;i++)  //bucle con for para imprimir los datos dentro de mi arreglo segun su posición.
    {
        cout<<"productos["<< i<<"] =  "<<productos[i]<<endl;  /*Muestra los datos dentro del arreglo con su respectivo indice 
                                                                          con su respectiva poccición*/

    }

    getch();
    return 0;

}


