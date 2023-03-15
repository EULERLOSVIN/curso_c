#include<iostream>

using namespace std;   //Estamos afirmando que utilizaremos el cout y el cin.

int main()
{
    system("cls");
    string productos[5]={"arroz","azucar","aceite","cafe","huevo"}; //declarando variable ,cantidad y elmentos en el array.
    int precio[5];  //declaramos la cantidad de elmentos que se almacenaran en la variable .

    int tamanio=sizeof(productos)/sizeof(productos[0]); //declaro variable y elaboro una división que luego me dara el tamaño del array.
   
    for(int i=0;i<tamanio;i++)   //bucle para pedir y capturar el precio del producto.
    {
        cout<<"Ingrese el precio del "<<productos[i]<<endl; //muestra en pantalla el nombre del producto y pide el precio;
        cin>>precio[i];  //captura el precio que ha ingresado el usuario.


    }
    system("cls");
   int tamanio2=sizeof(precio)/sizeof(precio[0])-1; //declaro variable,realizo una operación que me mostrará la cantidad del
                                                    //los datos en el arreglo que restado -1 me daria la cantidad del índice.

    for(int i=0;i<tamanio;i++)       //bucle rotante segun el tamaño del arreglo.
    {

        cout<<endl<<productos[i] <<" = "<<precio[i]<<" soles"; //muestra el nombre de los datos del array con su respectiva posición.
    }

    cout<<endl<<endl<<"El valor maximo del arreglo es "<<tamanio<<endl; //muestra el la cantidad de elementos en el arreglo.
    cout<<endl<<"El valor maximo del indice es "<<tamanio2;  //muestra el valor maximo del indice que inicia desde 0 .

   
    return 0;

}
