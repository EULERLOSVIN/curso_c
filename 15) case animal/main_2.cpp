#include<iostream>
#include<string>

#include "murcielago.cpp"


using namespace std;

int main()
{
    system("cls");

   
   //....................................................................................................

   //OBJETO MURCIELAGO DE LA CLASE MURCIELAGO

   Murcielago murcielago_1("insectos","cuevas","2 alas","chiroptera","rojos",4,"pequenias","negra",2);
   murcielago_1.funciones_animal();
   murcielago_1.funciones_murcielago();

    
    cout<<endl<<endl;
    system("pause");
    return 0;
    
}