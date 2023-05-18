#include <iostream>
#include <string>
#include <fstream>

#include "amigade_usuario.cpp"

using namespace std;

int main()
{
    system("cls");

    cout << "EMPRESA: " << "( AMERICAN AEROLINES )"<<endl;
    int opcion = 0;

    cout << "1.comprar pasaje " << endl;
    cout << "2.consultas" << endl;
    cout << "3.<<<salir>>" << endl;
    cin >> opcion;
    cin.ignore();

    Amiga_usuario amigas[100];
    //Amiga_usuario amiga
    
    switch(opcion)
    {      
        case 1:
        {
            string nombre_usuario = "",dni_usuario = "",contrasenia_usuario = "";
            Amiga_usuario viajes;  
            cout << "INGRESE SU NOMBRE Y APELLIDOS: ";
            getline(cin, nombre_usuario);
            cout << "INGRESE SU NUMERO DE DNI: ";
            getline(cin, dni_usuario);
            cout << "CREAR UNA CONTRASENIA: ";
            getline(cin, contrasenia_usuario);

            viajes.Llenar_user(nombre_usuario,dni_usuario,contrasenia_usuario);
       
            cout<<endl;

            cout<<"VUELOS DISPONIBLES:"<<endl;
            viajes.Vuelos_disponibles();
            
            cout<<endl;
            cout<<"ESCOGE EL NUMERO DE VUELO"<<endl;
            int opc;
            cin>>opc;
            
            int num_eleccion;
            string tipo_pago;
            
            cout<<"ELIGE MODALIDAD DE PAGO:"<<endl<<endl;
            cout<<"1.Tarejeta Visa ( BBVA )  "<<endl;
            cout<<"2.Tarjeta Visa ( BCP )"<<endl;
            cin>>num_eleccion;
            cin.ignore();
            if(num_eleccion == 1)
            {
                tipo_pago = "VISA ( BBVA )";
            }
            if(num_eleccion ==2)
            {
                tipo_pago = "VISA ( BCP )";
            }

            viajes.Rellenar_parametros_amiga(opc-1,tipo_pago);

            ofstream archivo_1("registro.txt",ios::app);
            archivo_1<<"REGISTRO DE VENTAS: "<<endl<<endl;
            archivo_1<<viajes.getDatos_amiga();
            
            break;
        }

        case 2:
        {
            string name,dni,password;
            cout<<"INGRESE NOMBRE Y APELLIDOS: ";
            getline(cin,name);
            cout<<"INGRES DNI: ";
            getline(cin,dni);
            cout<<"INGRESE CONTRASENIA: ";
            getline(cin,password);
            
            for(int i=0;i<5;i++)  //recorre los 100
            {
                if(name == amigas[i].getPassword())
                {
                    cout<<amigas[i].getDatos_amiga();
                }
            } 
            
            break;
        }
        

        case 3:
        {
            cout <<"GRACIAS POR SU VISITA "<<endl;
            break;
        }

        default:
        {
            cout << "opcion no valida" << endl;
            break;
        }
    }

    return 0;  
}