#include<iostream>
#include<string>
#include<fstream>

#include "tienda.cpp"   //solo llamo al archivo que se muestra y ya tendriamos acceso a todos los archivos hechos anteriormente


using namespace std;

int main()
{
    system("cls");    //limpiar pantalla para que no se muestre las letras que el compilador muestra por defecto
    
    //ELABORO MI LISTA DE MOTOS Y RELLENNO SIGUENDO EL ORDEN DE LOS PARAMETROS DEL CONSTRUCTOR DE LA CLASE   "Motocicleta"

    Motocicleta moto_1("rojo","Honda","60 cc","1","2","0","Certificacion Euro NCAP");
    Motocicleta moto_2("blanca","Yamaha","250 cc","1","3","2","Certificacion EPA");
    Motocicleta moto_3("amarillo","Kawasaki","180 cc","1","2","0","Certificacion CARB");
    Motocicleta moto_4("negro","Suzuki","1000 cc","1","2","0","Certificacion JIS");
    Motocicleta moto_5("Azul","Honda","150 cc","1","3","2","Certificacion INMETRO");

    //capturo dentro de un arreglo toda la lista de las motos
    Motocicleta motos[5] = {moto_1,moto_2,moto_3,moto_4,moto_5};
    
    //averiguo la cantidad o tamanio del arreglo
    int cantidad_motos = sizeof(motos)/sizeof(motos[0]);
 
    //ELABORA LA LISTA DE LOS AUTOS Y RELLENO SIGUIENDO EL ORDEN DE LOS PARAMETROS DEL CONSTRUCTOR DE LA CLASE    "Automovil"
    Automovil auto_1("rojo","Toyota","1.4 Litros","4","4","4","Certificacion de emisiones EPA");
    Automovil auto_2("verde","Volkswagen","1.6 Litros","6","4","4","Certificacion de seguridad: NHTSA");
    Automovil auto_3("Amarillo","Ford","1.7 Litros","4","4","4","Certificacion de calidad ISO");
    Automovil auto_4("blanco","Nissan","2.02 Litros","8","4","4","Certificacion de eficiencia de combustible EPA");
    Automovil auto_5("Negro","Honda","1.8 Litros","6","4","4","Certificacion de fabricante OEM ");
    Automovil auto_6("Blanco","Chevrolet","2 Litros","4","4","4","Certificacion de inspección técnica ITV");
    Automovil auto_7("Azul","Mercedes-Benz","2.4 Litros","4","4","4","Certificacion de conformidad CE");
    Automovil auto_8("Verde","BMW","2 Litros","4","4","4","Certificacion de seguridad eléctrica UL");
    Automovil auto_9("Rojo","Audi","1.8 Litros","4","4","4","Certificacion de seguridad vial NCAP");
    Automovil auto_10("Blanco","Hyundai","1.4 Litros","4","4","4","Certificacion de calidad ambiental LEED");
    
    //lo almaceno los objetos creados dentro de un arreglo
    Automovil autos[10] = {auto_1,auto_2,auto_3,auto_4,auto_5,auto_6,auto_7,auto_8,auto_9,auto_10};
    
    //averiguo la cantidad o tamanio del arreglo
    int cantidad_autos= sizeof(autos)/sizeof(autos[0]);
    

    //creo mi objeto tienda
    Tienda tienda_1("Derco");
    
    //almaceno mis objetos respecto a tiendas creados en un arreglo
    Tienda tiendas[1]={tienda_1};
    
    //averiguo la cantidad o tamanio 
    int cantidad_tiendas = sizeof(tiendas)/sizeof(tiendas[0]);

    

    //declaro mi archivo

    ofstream archivo1("tienda.txt");
    
    //bucle para comprobar si mi archivo se abrio o no
    
    if(!archivo1.is_open())
    {
        cout<<"ERROR AL ABRIR EL ARCHIVO"<<endl<<endl;
    }

    else
    {
        cout<<"EL ARCHIVO SE ABRIO CORRECTAMENTE"<<endl<<endl;

    }

    

    //IMPRIMIR DATOS SOLO DENTRO DE MI ARCHIVO;

    for(int i=0;i<cantidad_tiendas;i++)
    {
        archivo1<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<  TIENDA:"<<"( "<<tiendas[i].getNombre_tienda()<<")  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        archivo1<<"\n\n\n";

        archivo1<<"....................................................LISTA DE MOTOS:"<<endl<<endl<<endl;

        for(int j=0;j<cantidad_motos;j++)
        {
           archivo1<<motos[j].getDatos_motos(); //muestra la lista de motos con sus caracteristicas
        }

        archivo1<<"\n"<<"=========================================================================================================================================";
        archivo1<<"\n\n\n" << ".........................................................LISTA DE AUTOS: "<<endl;

        for(int k=0;k<cantidad_autos;k++)
        {
            archivo1<<autos[k].getDatos_auto();   //muestra la lista de autos con sus caracteristicas
        }
    }



    cout<<endl<<endl;

    return 0;
}