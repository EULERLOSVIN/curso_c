#include<iostream>
#include<string>
#include<fstream>   //libreria para hacer uso de archivos

#include "empleado.cpp"        //llamo a los otros archivos para que sean reconocidos en este
#include "departamento.cpp"

using namespace std;

int main()
{
    system("cls");
    
    //CREO UNA LISTA DE EMPLEADOS REYENANDO CON SUS DATOS SEGUN LOS PARAMETRO DE MI CLASE ( Empleado )

    Empleado empleado_1("Analista de datos","6000","5","Rolando","Yaro Balarca","78556738");
    Empleado empleado_2("Desarrollador de software","6500","7","Javier Fernando","Espinosa Benites","57635738");
    Empleado empleado_3("Diseniador grafico","5500","3","Alessandro","Tasayco Rodriguez","76376574");
    Empleado empleado_4("Gerente de proyectos","5700","4","Jorge Luis","Calderon Rojas","65264543");
    Empleado empleado_5("Soporte técnico","4500","2","Julio Cesar","Arevalo Caballero","78475683");
    Empleado empleado_6("Asistente administrativo","3800","3","Jose Humberto","Rodriguez Burga","45376543");
    Empleado empleado_7("Analista financiero","6700","4","Patricia Elizabeth","Bravo Cahua","24636784");
    Empleado empleado_8("Director General","9600","8","Cristhian Daniel","Hizquierdo Caja","83598593");
    Empleado empleado_9("Director de Tecnología","7000","5","David Angelo","Munios Caso","98746974");
    Empleado empleado_10("Director de Operaciones","8300","6","Viviana Vanessa","Gordella Chavez","78857467");
    
    //todos los empleados que e creado lo pongo dentro de un arreglo
    Empleado num_empleados[10] ={empleado_1,empleado_2,empleado_3,empleado_4,empleado_5,empleado_6,empleado_7,empleado_8,empleado_9,empleado_10};

    //averiguo el tamanio o cantidad de datos que hay en mi arreglo
    int tamanio_arreglo = sizeof(num_empleados)/sizeof(num_empleados[0]);

    //creo un solo departamento o empresa y ya que no tengo mas pues es solo uno no lo pongo en un arreglo
    //si tendria muchos departamentos lo pondria dentro de un arreglo tambien
    Departamento dep_1("Symantec Corporation ","SYMC"); 

    //DECLARO MI ARCHIVO

    ofstream  archivo1("trabajadores.txt");

    //verificamos si el archivo se abrio correctamente

    if(!archivo1.is_open())     //si este archivo no se abre
    {
        cout<<"ERROR AL ABRIR EL ARCHIVO"<<endl;

    }

    else
    {
        cout<<"EL ARCHIVO SE ABRIo CORRECTAMENTE"<<endl;
    }

    //MUESTRO LOS DATOS PERO SOLO DENTRO DEL ARCHIVO CREADO ("trabajadores.txt")

    archivo1<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<  "<<dep_1.getNombre_dep()<<"("<<dep_1.getSiglas()<<")  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
    
    for(int i=0;i<tamanio_arreglo;i++)
    {

        archivo1<<num_empleados[i].imprimir_empleado()<<endl<<endl;
    
    }

    archivo1.close();

    cout<<endl<<endl;
    
    return 0;
}