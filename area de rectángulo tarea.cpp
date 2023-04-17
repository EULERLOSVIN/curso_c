
//                                       FECHA: 05/03/2023                                      

// CREAR UN PROGRAMA CON UNA FUNCION PARA CALCULAR EL AREA 

#include<iostream>

using namespace std;

int area_rectangulo(int base,int altura)
{
    int area=0;  //declarando variable.
    area=(base*altura);  //opreación.

    cout<<"El area del rectangulo es = "<<area; //muestra en pantalla el resultado.

    return area;
}

int requisitos()   //no hay nada dentro de los parentisis porque no tenemos ningún valor que va entrar en la función.
{
    int base, altura;
    cout<<"PARA CALCULAR EL AREA DEL RECTANGULO "<<endl<<endl; //presentación del programa.
    cout<<"INGRESE LA MEDIDA DE LA BASE: "<<endl;  //sugerencia.
    cin>>base;            //captura el primer dato.
    cout<<"INGRESE LA MEDIDA DE LA ALTURA: "<<endl; //sugerencia.
    cin>>altura;          //captura el segundo dato.
    system("cls");        // esta parte me permite borrar todo lo que se mostro en pantalla anteriormente.

    area_rectangulo(base,altura);  /*llamamos a esta función para que se ejecute en esta parte del algoritmo el cual
                                     tomara los valores (base) y (altura) que fueron ingresados.*/
                                
    cout<<"\n";   //para que no salga pegado a el texto del compilador y se pueda ver mkejor.
    cout<<"\n";

    return 0;
}



int main()  //función principal.
{
    system("cls");  //agregamos esto para borrar el texto del compilador y se pueda observar mejor los datos.
    
   requisitos();   //llamamos a la función requisitos para que se ejecute en esta parte del algoritmo.
   
    return 0;
}


