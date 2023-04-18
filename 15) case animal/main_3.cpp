#include<iostream>
#include<string>

#include "perro.cpp"


using namespace std;

int main()
{
    system("cls");

   Perro dog_1(" ladra","pitbul","negro","mascotas","marrones",4,"2 orejas blancas","cola larga",1);

   dog_1.funciones_perro();
   dog_1.funciones_animal();
    cout<<endl<<endl;
    system("pause");
    return 0;
    
}