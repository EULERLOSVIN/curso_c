// 20/04/2023

#include<iostream>
#include<string.h>

#include "facultad.cpp"

using namespace std;

int main()
{

    //system("cls");

    Facultad facu("001","facultad de ingenieria e informatica de sistemas","FIIS");
    Facultad facu_02("002","facultada de mecanica electrica","FIME");
    Facultad facu_03("003","facultad agronomia","agro");
    //cout<<facu.toString()<<endl;
    //facu.imprimir();

    Facultad facultades[3] = {facu,facu_02,facu_03};
    
    for(int i=0;i<3;i++)
    {
        facultades[i].imprimir();

    }

  

    for(int i=0;i<3;i++)
    {
       if(facultades[i].getSiglas() == "FIME")
       {
        facultades[i].setCodigo("004");

       }

        

        if(facultades[i].getCodigo() == "003")
        {
            facultades[i].setSiglas("AGRO");
        }

        

    }

    

    

    







    cout<<endl<<endl;
    system("pause");

    return 0;
}