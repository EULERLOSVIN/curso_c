#include<iostream>

using namespace std;  //estamos diciendo que usaremos los espacios de nombres cout y cin;



int casos(int numero_mes) //esta función está capturando el valor de la variable (numero_mes)  .
{                         //dentro de esta función también analizaremos los casos.
    

    switch(numero_mes)   //es una condicional multiple para evaluar el numero de caso al que pertenese el valor ingresado.
    {

    case 1:
    cout<<"ENERO";
    break;

    case 2:
    cout<<"FEBRERO";
    break;


    case 3:
    cout<<"MARZO";
    break;


    case 4:
    cout<<"ABRIL";
    break;


    case 5:
    cout<<"MAYO";
    break;

    case 6:
    cout<<"JUNIO";
    break;


    case 7:
    cout<<"JULIO";
    break;


    case 8:
    cout<<"AGOSTO";
    break;



    case 9:
    cout<<"SEPTIEMBRE";
    break;


    case 10:
    cout<<"OCTUBRE";
    break;



    case 11:
    cout<<"NOVIEMBRE";
    break;


    case 12:
    cout<<"DICIEMBRE";
    break;

    default:   //si no se culple ninguno de los casos anteriores se ejecutará.
    {
        cout<<"valor no valido";


    }

    }

    


 return 0;
}


int main()  //función principal.
{
    int numero_mes;  //declarando funciones.
    system("cls");   //borra todo la información que se mostro anteriormente pero lo conserva internamente.

    cout<<"INGRESE EL NUMERO DE MES"<<endl;
    cin>>numero_mes;   //captura la información o el valor ingresado y lo gurada en la variable.

    casos(numero_mes);  //llamamos a esta función para que se ejecute dentro de esta función.

    return 0;
}





