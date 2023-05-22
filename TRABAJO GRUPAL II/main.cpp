#include<iostream>
#include<string>
#include <fstream>
#include "bibliotecario.cpp"
#include "libro.cpp"

#include<queue>

using namespace std;

int main()
{
    system("cls");
    

    Libro libro_1("001","la odisea","genero literario","Homero");
    Libro libro_2("002","la iliada","literario","Homero");
    Libro libro_3("003","Cien anios de soledad","Realismo magico","Gabriel Garcia Marquez");
    Libro libro_4("004","El Quijote","Novela clásica","Miguel de Cervantes ");
    Libro libro_5("005","El pequenio libro de las matematicas"," matematicas aplicadas"," Lynda Gratton y Marcus du Sautoy");
    
    Libro libros[5] = {libro_1,libro_2,libro_3,libro_4,libro_5};
    int tamanio = sizeof(libros)/sizeof(libros[0]);

    Biblioteca bibliotecario_1("00000231","BIBLIOTECA DEL CONOCIMIENTO","jr.6 de agosto","973535433");

    Usuario usuario_1("0001","76254526","Melendrez Cruz","Manuel","002012","978464821","jr.tito jaime");
    Usuario usuario_2("0002","74753465","Vasquez Fernandez","Pedro","0020140312","974772783","jr.las palmas");

    Usuario usuarios[2]={usuario_1,usuario_2};
    
    //menu de opciones
    cout<<bibliotecario_1.getNombre_biblioteca()<<endl<<endl;
    cout<<"INGRESE QUE LIBRO ES EL QUE SE VA APRESTAR"<<endl;
    cout<<"1)."<<libro_1.getData()<<endl;
    cout<<"2)."<<libro_2.getData()<<endl;
    cout<<"3)."<<libro_3.getData()<<endl;
    cout<<"4)."<<libro_4.getData()<<endl;
    cout<<"5)."<<libro_5.getData()<<endl;
    int opcion;
    cin>>opcion;

    ofstream archivo_1("biblioteca.txt");
    archivo_1<<"USUARIO:"<<endl;
    archivo_1<<usuario_1.getDatos_usuarios();
    archivo_1<<"\nLIBROPRESTADO:"<<endl;
    for(int j=0;j<tamanio;j++)
    {
        if(j+1==opcion)
        {
            archivo_1<<libros[j].getData();

        }

    }

    //muestran dentro del archivo los libros que quedan 

    archivo_1<<"\n\nLIBROS QUE QUEDAN: "<<endl<<endl;
    for(int i=0;i<tamanio;i++)
    {
        if(i+1 != opcion)
        {
            archivo_1<<libros[i].getData();

        }
    }


    


   
    return 0;
    
    
}