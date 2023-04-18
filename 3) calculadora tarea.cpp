
//                                            FECHA : 05/03/2023

//HACER UNA CALCULADORA CON LAS OPERACIONES BASICAS,CON UN MENU DE ELECCION PARA EL USUARIO Y CREAR FUNCIONES PARA CALCULAR CADA UNA DE ELLAS
#include<iostream>

using namespace std;

int suma(int a,int b)  //esta función me permitirá realizar la suma de los valores ingresados.
{
    int resultado=a+b;         //se realiza la suma.

    cout<<"EL RESULTADO ES = "<<resultado; //se muestra el resultado en pantalla.

    return resultado;
}

int resta(int a,int b)  //esta función me permitirá realizar la resta e los valores ingresados.
{
    int resultado=a-b;          //se realiza la resta.
    cout<<"EL RESULTADO ES = "<<resultado;  //se muestra el resultado en pantalla.

    return resultado;
}

int multiplicacion(int a,int b) //esta función me permitirá realizar la multiplicación de los valores ingresados.
{
    int resultado=a*b;          //se realiza la multiplicación.
    cout<<"EL RESULTADO ES = "<<resultado;  //se muestra el resultado en pantalla.

    return resultado;
}

float division(float a,float b) //esta función me permitirá realizar la división de los valores ingresados.
{
    double resultado=a/b;              //se realiza la división.
     cout<<"EL RESULTADO ES = "<<resultado;  //se muestra el resultado en pantalla.

    return resultado;
}


double casos(int opcion)  //esta función me permitirá evaluar el caso según la opción que elijió el usuario.
{
    float a,b; //declarando variables;

    
    switch(opcion)  //el switch me permite evaluar los casos de cada opción mostrada anteriormente.
    {

        case 1:
           
           system("color 01");  //esta parte sirve para cambiar el color del texto en el caso 1 (azul).
           cout<<"INGRESE EL PRIMER VALOR "<<endl; 
           cin>>a;   //captura el primer valor.
           cout<<"INGRESE EL SEGUNDO VALOR "<<endl;
           cin>>b;   //captura el segundo valor.
           suma(a,b);     /*llamamos a la función suma para que se ejecute el cual nos permitirá...
                          optener y mostrar el resultado.*/

           break;  //se usa para que ya no siga comparando o ejecutando los demás casos.


        case 2:

           system("color 02");   //esta parte sirve para cambiar el color del texto en el caso 2 (verde).
           cout<<"INGRESE EL PRIMER VALOR"<<endl;
           cin>>a;   //captura el primer valor.
           cout<<"INGRESE EL SEGUNDO VALOR"<<endl;
           cin>>b;   //captura el segundo valor.
           resta(a,b);  /*llamamos a la función resta para que se ejecute el cual nos permitirá...
                        optener y mostrar el resultado.*/

           break;  //se usa para que ya no siga comparando o ejecutando los demás casos.

        case 3:
           
           system("color 04");   //esta parte sirve para cambiar el color del texto en el caso 3 (rojo).
           cout<<"INGRESE EL PRIMER VALOR"<<endl;
           cin>>a;    //captura el primer valor.
           cout<<"INGRESE EL SEGUNDO VALOR"<<endl;
           cin>>b;     //captura el segundo valor.

           multiplicacion(a,b); /*llamamos a la función multiplicación para que se ejecute el cual nos permitirá...
                                optener y mostrar el resultado.*/

           break;  //se usa para que ya no siga comparando o ejecutando los demás casos.

        case 4:
           system("color 06");  //esta parte sirve para cambiar el color del texto en el caso 4 (amarillo).
           cout<<"INGRESE EL PRIMER VALOR  "<<endl;
           cin>>a;    //captura el primer valor.
           cout<<"INGRESE EL SEGUNDO VALOR"<<endl;
           cin>>b;    //captura el segundo valor.

           division(a,b);   /*llamamos a la función división para que se ejecute el cual nos permitirá...
                            optener y mostrar el resultado.*/

         break;  //se usa para que ya no siga comparando o ejecutando los demás casos.

        default:     //en caso de que no se ingrese ningún valor perteneciente a las opciones se ejecutará.
       {
            cout<<"opcion no valida";

        }

    }





}

int main()
{
    system("cls");  /*Esta parte del código se a agregado por cuestión de estética porque me permitirá borrar los datos...
                      o texto que aparece en el compilador*/
                    

    cout<<"ELIJA LA OPERACION QUE DESEA REALIZAR"<<endl<<endl; //esta parte esta funcionando como un menú de elección
    cout<<"1.Suma"<<endl;                                      //pues permitira al usuario elejir el de tipo de operación.
    cout<<"2.Resta"<<endl;
    cout<<"3.multiplicacion"<<endl;
    cout<<"4.division"<<endl;
    cout<<"\n";
    cout<<"\n";
    int opcion;
    cin>>opcion;        //se captura la opción o el número  que el usuario a escogido.
    system("cls");      //borramos los datos para que no se almacene en pantalla pero la información permanece internamente.

    casos(opcion);

    
    return 0;
}

