#include<iostream>
#include<string.h>
#include"curso.cpp"

using namespace std;

int main(){
    system("cls");
    Curso curso_1("0001"," programacion basica",4);
    Curso curso_2("0002"," desarrollo de software",5);
    Curso curso_3("0003"," desarrollo web",2);

    float nota1 , nota2 , nota3;
    
    Curso cursos[3] = {curso_1, curso_2, curso_3};
    for(int i = 0; i < 3; i++)
    {
        //cout<<"CURSO: "<<cursos[i].getDescripcion()<<endl<<endl;
        cout<<"INGRESE LAS NOTAS DEL CURSO DE : "<<cursos[i].getDescripcion()<<endl;
        cin>>nota1;
        cin>>nota2;
        cin>>nota3;
        curso_1.setNota_1(nota1);
        curso_1.setNota_2(nota2);
        curso_1.setNota_3(nota3);

        cout<<endl;
    }

    curso_1.getImprimir_datos();
    cout<<endl<<endl;
    curso_2.getImprimir_datos();
    cout<<endl<<endl;
    curso_3.getImprimir_datos();

    cout<<endl<<endl;
    system("pause");

    return 0;
}