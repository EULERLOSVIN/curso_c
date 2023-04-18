
//                                               FECHA: 13/03/2023

//HACER UN PROGRAMA Y DECLARAR UN ARREGO LIBROS  DE CAPACIDAD 5 .EL USUARIO DEBERA INGRESAR LOS VALORES PARA RELLENAR EL ARREGLO LUEGO 
//SE DEBE IMPRIMIR LA POSICION DEL ARREGLO Y LOS DATOS PERTENECIENTES A CADA POSICION

#include<iostream>
#include<conio.h>  //librería que me da acceso a usar el getch que sirve para cerrar el programa por teclado.

using namespace std; //usamos la entrada y salida de datos "cout" y "cin".

int main()
{
    system("cls");  //limpiar pantalla.
    string libros[5];  //declaro variable y elementos que se almacenaran en el array.

    int tamanio=sizeof(libros)/sizeof(libros[0]); //declaro y opero una división que me dará el tamaño de os datos en el arreglo.

    for(int i=0;i<tamanio;i++)  //bucle rotante segun el tamaño de la cantidad de datos.
    {
        int x=1; //declaro una variable y le asigno un valor.
        x=x+i;   //iterador.

        cout<<"libro "<<x<<endl; //el iterador siempre x=i+1 osea mayor a i en 1.
        cin>>libros[i];  //captura de los datos desde la posicion cero.

        
    }
    
    system("cls");
    for(int i=0;i<tamanio;i++) //bucle para imprimir el nombre de lo datos con su respectida posición.
    {
        cout<<"hubicacion ["<<i<<"] ====> "<<libros[i]<<endl; //muestra en pantalla todo lo dicho en el argumento anterior.
        
        
    }

    getch(); //sirve para cerrar el programa de manera manuel o mejor dicho por teclado.
    return 0;

}
