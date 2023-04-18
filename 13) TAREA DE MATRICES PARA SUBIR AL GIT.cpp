#include<iostream>

using namespace std;

void mostrar_matriz(int matriz[5][4],int fila,int columna)
{
    cout<<"LA MATRIZ QUE TENEMOS ES LA SIGUIENTE:"<<endl<<endl;
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(matriz[i][j])
            {
                cout<<"\t"<<"|"<<matriz[i][j]<<"|  ";

            }
            

        }
        cout<<endl<<endl;

    }


}


int sumar_matriz(int matriz[5][4],int fila,int columna)
{   int suma_total=0;
 
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            suma_total = suma_total + matriz[i][j];
            
        }
        
    }

    

    int promedio_matriz = suma_total/20;
    
    cout<<"LA SUMA DE TODA LA MATRIZ ES = "<<suma_total;
    cout<<"\t"<<"====> PROMEDIO = "<<promedio_matriz;
    return suma_total;

}

int sumar_filas(int matriz[5][4],int fila,int columna)
{  
    cout<<"LA SUMA Y PROMEDIO DE CADA UNA DE LAS FILAS SON: "<<endl<<endl;
    for(int i=0;i<fila;i++)
    {
        int suma_xfila = 0;

        for(int j=0;j<columna;j++)
        {
            suma_xfila +=matriz[i][j];
        }
        cout<<"LA SUMA DE LA FILA"<<"["<<i<<"]"<<" = "<<suma_xfila;
        cout<<"\t"<<"====> "<<"PROMEDIO = "<<suma_xfila/4<<endl;
    }
    cout<<endl;

    
}

int sumar_columnas(int matriz[5][4],int fila,int columna)
{
    cout<<"LA SUMA Y PROMEDIO DE CADA UNO DE LA COLUMNAS SON:"<<endl<<endl;
    for(int i=0;i<columna;i++)
    {
        int suma_xcolumna = 0;
        for(int j=0;j<fila;j++)
        {
            suma_xcolumna += matriz[j][i];

        }
        cout<<"LA SUMA DE LA COLUMNA"<<"["<<i<<"]"<<" = "<<suma_xcolumna;
        cout<<"\t"<<"====> "<<"PROMEDIO = "<<suma_xcolumna/5<<endl;

    }
    cout<<endl;
        

    
    return 0;

}

int maximo_valor(int matriz[5][4],int fila,int columna)
{
    int valor_maximo =matriz[0][0];

    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(valor_maximo<matriz[i][j])
            {
                valor_maximo=matriz[i][j];


            }


        }

    }

    cout<<"EL DATO DE MAXIMO VALOR EN LA MATRIZ ES = "<<valor_maximo;

    return 0;

}

int minimo_valor(int matriz[5][4],int fila,int columna)
{
    int valor_minimo =matriz[0][0];

    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(matriz[i][j]<valor_minimo)
            {
                valor_minimo=matriz[i][j];


            }


        }

    }
    cout<<"EL DATO DE MINIMO VALOR EN LA MATRIZ ES = "<<valor_minimo;

    return 0;

}

int matriz_inversa(int matriz[5][4],int fila,int columna)
{
    cout<<"LA FORMA DE LA MATRIZ INVERTIDA ES LA SIGUIENTE"<<endl<<endl;
    int matriz_inversa[4][5];

    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            matriz_inversa[j][i] = matriz[i][j];

        }

    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"\t"<<"|"<<matriz_inversa[i][j]<<"|";
            

        }
        cout<<endl<<endl;
       

    }


}


int main()
{
    system("cls");
    
    int matriz[5][4]={{2,3,4,5},{6,7,8,9},{10,11,12,13},{14,15,16,17},{18,19,20,21}};

    mostrar_matriz(matriz,5,4);
    cout<<endl;
    sumar_matriz(matriz,5,4);
    cout<<endl<<endl;
    sumar_filas(matriz,5,4);
    cout<<endl;
    sumar_columnas(matriz,5,4);
    cout<<endl;
    maximo_valor(matriz,5,4);
    cout<<endl<<endl;
    minimo_valor(matriz,5,4);
    cout<<endl<<endl;
    matriz_inversa(matriz,5,4);
    


    cout<<endl<<endl<<endl;


    return 0;
}
