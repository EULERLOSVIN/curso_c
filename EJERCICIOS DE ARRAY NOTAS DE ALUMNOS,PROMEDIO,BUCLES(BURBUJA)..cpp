//SE TIENE UN ARREGLO DE CAPACIDAD 5 REALIZAR LO SIGUIENTE:

//El usuario,ingresa los valores numericos por teclado .
//Encontrar el numero mayor.
//Encontrar el numero menor.
//Encontrar los numero que se repite.
//Cuantas veces se repite.
//Encontrar la suma de los items del arreglo.
//Ordenar de mayor a menor.
//Ordenar de menor a mayor.
//hallar el promedio o media.
//remplazar la posición medio del arreglo por el valor de 25;

#include<iostream>

using namespace std;  //estamos diciendo que utilizaremos espacios de nombres "cout" y "cin" sin std.

int main()
{
    system("cls");  //limpiar pantalla para borrar datos que el compilador muestra por defecto.

    float numeros[5]; //declaroando variable con array de capacidad 5.

    int valores_estaticos[5];//declaroando variable con array de capacidad 5 
    //                 (servira para tener una copia de los datos del anterior array que luego utilizaremos al final del programa).

    float tamanio = sizeof(numeros)/sizeof(numeros[0]);  //esta operacion me arroja la cantidad de datos en el array.

    cout<<"INGRESE VALORES NUMERICOS"<<endl<<endl;   //mensaje que se muestra en pantalla. 

    int x=0;  //variable que servira para enumerar los valores.

    for (int i = 0; i < tamanio; i++) //bucle que se cuenta de forma prigresiva.
    {
        x=x+1;

        cout<<x<<" valor: "; // utilizamos el "x" que funciona como una enumeracion sucesiva para los vaolores.
        cin>>numeros[i];     //captura los numeros que se ingresan con su posicion respectiva.

        valores_estaticos[i] = numeros[i]; //se realiza la copia o una replica de los datos del array numeros[5];

        cout<<"\n";


  
    }

    int mayor=numeros[0]; //declaramos variable y le asignamos el valor de la primera posición.

    for (int i=1; i<tamanio; i++) //bucle de conteo progresivo
    {
        if(mayor<numeros[i])  //si el valor de la posición inicial es menor al valor de la posición que sigue segun el bucle.
        {                     //entonces se hace un cambio. la variable "mayor" toma el valor mayor y así de manera consecutiva
            mayor=numeros[i]; //se va quedando con el numero mayor entre los datos.

        }
  
    }

    cout<<"El numero mayor es : "<<mayor<<endl;  //se muestra en pantalla el número mayor.

    int menor=numeros[0]; //declaramos una variable y le asignamos el valor de la posición inicial del arreglo.

    for (int i=1; i<tamanio; i++) //bucle que empieza desde uno y que ará un conteo progresivo.
    {
        if(menor>numeros[i]) //si el valor de la posición inicial es mayor al valor de la posición que sigue segun el bucle
        {                    //entonces se hace un cambio de valor en la variable "menor"
          menor=numeros[i]; //la variable "menor" toma el menor valor asi de manera consecutiva .al final se queda con el menor valor
                         

        }
  
    }

    cout<<"El numero menor es: "<<menor<<endl; //se muestra en pantalla el valor del numero menor.


    int repite=0;    // declaramomos variable que nos ayudara en el bucle.   
    int informacion=0,contador=0;  // declaramomos variable que nos ayudara en el bucle.
    
    for(int i=0;i<tamanio;i++)  //bucle que contara e forma consecutiva.
    {  
         
        int veces_repetidas=1;  //le damos un valor al contador. 

        int numero_a_comparar=numeros[i]; //el bucle le asigna un valor a esta variable segun el valor del "i" en ese momento.

        for (int y=i+1; y<=tamanio; y++) //bucle que inicia desde 1 esto para que el valor anterior se compare 
        {                                //con el de la posición que sigue.

            if(numero_a_comparar==numeros[y]) //se compara la posición de valor "i" con la posición de valor "y".
            {                                 // "y" siempre es un valor mas que el de "i".

                veces_repetidas = veces_repetidas + 1;  // contador que cuenta la veces que se repite un numero.

                repite=numeros[y]; // la variable "repite" toma el valor del dato que se esta repitiendo.
  
            }
   
        }

        if(veces_repetidas>1)  //si la condición se cumple se ejecuta .
        {
            informacion=informacion + (contador + veces_repetidas); //el valor de la variable se incremente suegun el valor 
            //                                                       de los que lo componen.en especial del "contador".
            //                                                // esto para no repetir las comparaciones.
                                                    
            cout<<endl<<"El numero "<<repite<<" se repite "<<veces_repetidas<<" veces"; //se muestra en pantalla el numero y la veces
            //                                                                          que se repite ese numero.       
            i=informacion-1;  //el valor de i va a depender de esta operación ,es decir,que el valor de i cambia.
            //                 esto para tener la pocición de los

        }
        else
        {
            contador = contador + 1; //si no se cumple la condición anterior esta variable se incrementa en 1
            //                        esto para no repetir las comparaciones.
            //el contador sigue tomando un valor sumado en uno para luego incrementar a la variable "información".
            // ejemplo: si 2 2 2 3 4 en la primera vuelta cuenta 3 numero repetido_en la segunda vuelta el i empieza ...
            //  de comparar el 2 con 3 por eso tambien la variable "información" enlaza con este "contador" de otro modo este empezaría
            // a contar i=[1] que comprararía y=[2] y nuevamente se contaria la repetición.
        }


    }

    cout<<"\n";

    float suma=0; //declarando variable

    for (int i=0; i<tamanio; i++) //Bucle progresivo.
    {
        suma=suma + numeros[i]; //en el primer instante se suma 0 + el valor de la posicion [0] de manera que "suma" ... 
        //                   toma el valor de esa operacion ,luego sigue sumando consecutivamente los numeros y sigue tomando  
        //                   o incrementando su valor.finalmente tendremos la suma de todos los datos.
    }
    cout<<"La suma de los numeros es : "<<suma<<endl; // se muestra en pantalla la suma de los numeros.
    
    int descendente=0; //declaro variable que se trabajará en el bucle.
    cout<<"EL ORDEN DESCENDENTE ES: "; //mensaje que se mostrará en pantalla

    for(int i=0;i<tamanio;i++)    //bucle que realiza un conteo progresivo desde 0.                
    {                           
        for(int y=i+1;y<tamanio;y++)//bucle que realiza un conteo progresivo desde 1.
        {
            if(numeros[i] < numeros[y])  // condicional que compara.si la condicion se cumple se ejecuta.
            {
                descendente=numeros[i]; // la variable toma el valor del numero menor.
                numeros[i]=numeros[y];  // realizamos un cambio .Le asignamos el valor de la posición "y" a la posición i;
                numeros[y]=descendente; //en este caso  le asignamos a la posicion "y" el valor de la posición "i" es decir..
                //                      el valor de "descendententes". y así se van ordenando de manera consecutiva siempre dejando 
                //                     al mayor valor al principio.(se ordenan de mayor a menor).
                
                
            }
  

        }

    }

    for(int i=0;i<tamanio;i++) //bucle que realiza un conteo progresivo iniciando desde 0.
    {
        cout<<"  "<<numeros[i]; //muestra en pantalla el valor segun la posicion asignada por el valor de "i"
    }


    cout<<"\n";//cambio o salto de línea.
    int ascendente=0; //declaramos la variable que trabajaremos en el bucle.
    cout<<"EL ORDEN ASCENDENTE ES: "; //se muestra un mensaje en pantalla.

    for(int i=0;i<tamanio;i++) //bucle que realiza un conteo progresivo e inicia desde 0.
    {

        for(int y=i+1;y<tamanio;y++) //bucle que realiza un conteo progresivo e inicia desde el 1
        {
            if(numeros[i]>numeros[y]) //condicion que si se cumple se ejecuta.
            {
                ascendente=numeros[i];  //captura el valor del numero mayor.
                numeros[i]=numeros[y];  //se hace un cambio de valores.al de la posicion "i" se le da el valor de 
                numeros[y]=ascendente;  //la posición "y". y a la posicion "y" el valor de la posición "i" o ...
                //                       como se ve el valor de ascendente que es lo mismo.

                
            }

        }


    }

    for(int i=0;i<tamanio;i++) //bucle que realiza una cuenta progresiva desde 0
    {
        cout<<"  "<<numeros[i]; //muestra en pantalla el valor segun la posicion asignada por el valor de "i"
    }
    cout<<"\n"; //salto de línea
    
    float promedio=0; //declaro variable que se usará para el promedo aritmetico.
    promedio=suma/tamanio;  //operacíon que me arroja el promedio

    cout<<"EL PROMEDIO O MEDIA ARITMETICA DE LOS NUMEROS ES = "<<promedio; //mensaje que me muestra el promedio.
    cout<<"\n"; //salto de línea

    cout<<"\n"; //salto de línea
    cout<<"DESPUES DE CAMBIAR EL VALOR DE LA POSICION CENTRAL DE LOS NUMEROS INGRESADOS DEL ARREGLO POR 25 EL ORDEN ES LO SIGUIENTE:";
    
    for(int i=0;i<tamanio;i++) //bucle que realiza una cuenta progresiva desde 0
    {
        if(i==2) //si se cumple la condicion ingresa a ejecutar lo que contiene.
        {
            valores_estaticos[i]=25; //como se ve  valores_estaticos[i] tiene el orden real de los numeros ingresados.
            //                       y como i=2 en esta parte lo rempasa el valor de la posición 2 es decir en..
            //                       valores_estaticos[2] es remplazado por 25 .dicho valor se ubica en esa posición.


        }
        cout<<endl<<"posicion["<<i<<"]"<<" = "<<valores_estaticos[i];//muestra en pantalla la posición y sus valores del array
        //                                                           después de cambiar el valor de posición medio.

    }

    cout<<"\n";
    cout<<"\n";
    return 0;
    

}
