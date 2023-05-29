#include <iostream>
#include <fstream>
#include <string>
#include "tiendaRepuesto.cpp"
#include "empleado.cpp"
#include "cliente.cpp"

using namespace std;

// Función para imprimir los datos de los repuestos
void imprimirDatosRepuestos(ofstream& archivo)
{
    // Redirigir la salida estándar hacia el archivo
    streambuf* coutbuf = cout.rdbuf();
    cout.rdbuf(archivo.rdbuf());

    TiendaRepuestos tienda;

    // Agregar algunos repuestos a la tienda
    tienda.agregarRepuesto("Llanta", "LL001", 200.0, 5,"11/03/2023","Neumaticos");
    tienda.agregarRepuesto("Aceite de motor", "AM002", 50.0, 10,"17/02/2023", "Lubricante");
    tienda.agregarRepuesto("Filtro de aire", "FA003", 20.0, 8,"22/08/2023", "Lubricante");
    tienda.agregarRepuesto("Casco","ls2",150,18,"28/04/2023","accesorios");

    // Mostrar el stock de productos por fecha de registro
    tienda.mostrarStockPorFecha();
    tienda.mostrarRepuestosNoVendidos();
    

    // Restaurar la salida estándar
    cout.rdbuf(coutbuf);
}

// Función para obtener los datos de los servicios y empleados
void obtenerDatosServicios(ofstream& archivo)
{
    // Redirigir la salida estándar hacia el archivo
    streambuf* coutbuf = cout.rdbuf();
    cout.rdbuf(archivo.rdbuf());

    // Crear servicios
    ServicioTaller servicio1("Cambio de aceite", "Realizar el cambio de aceite del motor", 1, "03/2/2023");
    ServicioTaller servicio2("Reparación de frenos", "Reparar o reemplazar los componentes del sistema de frenos", 2,"04/05/2023");
    ServicioTaller servicio3("Mantenimiento de suspension", "Realizar el mantenimiento y ajuste de la suspension", 3,"24/01/2023");

    // Crear empleados
    Empleado empleado1("Pedro", "Rengifo", "Mecanico", 5);
    Empleado empleado2("Daniel", "Fernandez", "Pintor de vehiculo", 3);

    // Asignar servicios a los empleados
    empleado1.asignarServicio(servicio1);
    empleado1.asignarServicio(servicio2);
    empleado2.asignarServicio(servicio3);

    // Mostrar servicios asignados y tiempo total por empleado
    empleado1.mostrarServiciosAsignados();
    cout << "TIEMPO TOTAL PARA " << empleado1.getNombre() << " " << empleado1.getApellidos() << ": " << empleado1.calcularTiempoTotal() << " horas" << endl;
    cout << endl;
    empleado2.mostrarServiciosAsignados();
    cout << "TIEPO TOTAL PARA " << empleado2.getNombre() << " " << empleado2.getApellidos() << ": " << empleado2.calcularTiempoTotal() << " horas" << endl;

    // Restaurar la salida estándar
    cout.rdbuf(coutbuf);
}

// Función para obtener los datos de los clientes
void obtenerDatosClientes(ofstream& archivo)
{
    // Redirigir la salida estándar hacia el archivo
    streambuf* coutbuf = cout.rdbuf();
    cout.rdbuf(archivo.rdbuf());


    // Crear clientes
    Cliente cliente1("ROdrigo", "Cespedez", "Av. La florida,Trujillo", "8726864","12/03/2023");
    Cliente cliente2("Gloria", "Fernandez", "Av. Tupac Amaru, Trujillo", "987654321", "11/01/2023");
    Cliente cliente3("Roiber", "Vasquez", "Av. Santa Ana, Trujillo", "456789123", "30/04/2023");

    // Registrar servicios para cada cliente
    cliente1.registrarServicio("Cambio de neumaticos");
    cliente1.registrarServicio("Reparación de acelerador");
    cliente2.registrarServicio("Mantenimiento de suspensión");
    cliente2.registrarServicio("Cambio de batería");
    cliente2.registrarServicio("Alineación y balanceo");
    cliente3.registrarServicio("Reparación de motor");

    // Mostrar servicios realizados para cada cliente
    cliente1.mostrarServiciosRealizados();
    cout << endl;
    cliente2.mostrarServiciosRealizados();
    cout << endl;
    cliente3.mostrarServiciosRealizados();

    // Identificar clientes más frecuentes
    map<string, int> frecuenciaClientes;
    frecuenciaClientes[cliente1.getNombre()]++;
    frecuenciaClientes[cliente2.getNombre()]++;
    frecuenciaClientes[cliente2.getNombre()]++;

    cout << "Clientes más frecuentes:" << endl;
    for (const auto& pair : frecuenciaClientes)
    {
        cout << "Cliente: " << pair.first << ", frecuencia: " << pair.second << endl;
    }

    // Restaurar la salida estándar
    cout.rdbuf(coutbuf);
}

// Función para imprimir texto en un color específico
void printInColor(const std::string& text, int colorCode)
{
    std::cout << "\033[" << colorCode << "m" << text << "\033[0m";
}


int main()
{
    int opcion;

    ofstream archivo("Reporte.txt"); // Abre el archivo

    do
    {
        cout << endl << endl;
        cout << "BIENVENIDOS " << endl<<endl;
        cout << endl << endl;
        // Imprimir la palabra "MOTORIN" en colores
        
        printInColor("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n", 34); // 
        printInColor("||                                                  ||\n", 33); // 
        printInColor("||  M   M   OOO  TTTTTTTT  OOO   RRRR   II   N   N  ||\n", 33); // 
        printInColor("||  MM MM  O   O    ||    O   O  R   R  II   NN  N  ||\n", 33); // 
        printInColor("||  M M M  O   O    ||    O   O  RRRR   II   N N N  ||\n", 33); // 
        printInColor("||  M   M  O   O    ||    O   O  R  R   II   N  NN  ||\n", 33); // 
        printInColor("||  M   M   OOO     ||     OOO   R   R  II   N   N  ||\n", 33); // 
        printInColor("||                                                  ||\n", 33); //
        printInColor("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n", 34); //
        std::cout << "                     __o" << std::endl;
    std::cout << "                  _ \<_/" << std::endl;
    std::cout << "                 (_)>(_)    " << std::endl;
    std::cout << "                    ||      " << std::endl;
    std::cout << "             _______||_______" << std::endl;
    std::cout << "             //\\          /\\" << std::endl;
    std::cout << "            */  \\________/  \\*" << std::endl;
        

    
        cout << endl << endl;

        cout << "MENU" << endl;
        cout << "1. OBTENER DATOS DEL PRODUCTO" << endl;
        cout << "2. OBTENER DATOS DE LOS SERVICIOS Y EMPLEADOS" << endl;
        cout << "3. MOSTRAR DATOS DE LOS CLIENTES" << endl;
        cout << "4. Exit" << endl;
        cout << "marque una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            //los datos capturados se muestran en el archivo txt
            imprimirDatosRepuestos(archivo);
            break;
        case 2:
            obtenerDatosServicios(archivo);
            break;
        case 3:
            obtenerDatosClientes(archivo);
            break;
        case 4:
            cout << "Saliendo ......" << endl;
            break;
        default:
            cout << "Opcion invalida. intente de nuevo" << endl;
            break;
        }

        cout << endl;
      //el bucle se repetira hasta mientras el numero sea diferente de las opciones
    } while (opcion != 4);

    archivo.close(); // Cierra el archivo

    return 0;
}
