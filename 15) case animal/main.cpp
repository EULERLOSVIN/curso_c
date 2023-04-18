#include<iostream>
#include<string>

//#include "murcielago.cpp"
#include "gato.cpp"


using namespace std;

int main()
{
    system("cls");

   //OBJETO GATO DE LA CLASE GATO

   Gato gato_1(7,1,1,"felino","azules",4,"pequenias","blancos",1);
   gato_1.funciones_gato();
   gato_1.funciones_animal();
   cout<<gato_1.getvidas();
   
   //....................................................................................................

   //OBJETO MURCIELAGO DE LA CLASE MURCIELAGO

   /*Murcielago murcielago_1("insectos","cuevas","2 alas","chiroptera","rojos",4,"pequenias","negra",2);
   murcielago_1.funciones_animal();
   murcielago_1.funciones_murcielago();

    
    cout<<endl<<endl;
    system("pause");
    return 0;
    */
}