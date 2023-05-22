#include <iostream>
#include <string>
#include "profesor_investigador.cpp"

using namespace std;

int main()
{
    // CREO LOS OBJETOS PARA PROFESORES

    Profesor_investigador prof1("jose", "22875545", "FISS");
    Profesor_investigador prof2("Luis", "78246276", "FIIA");
    Profesor_investigador prof3("Wilian Arce","78486213","FZ");
    Profesor_investigador prof4("Raul","71365117","FIME");
    Profesor_investigador prof5("Fernando","55676346","FICSA");

    Profesor profesores[5]={prof1,prof2,prof3,prof4,prof5};
    
    //IMPRIMIMOS LOS DATOS

    int cantidad = sizeof(profesores)/sizeof(profesores[0]);
    for(int i =0 ;i<cantidad;i++)
    {
        profesores[i].getDatos_doc();
    }

    //CREO LOS OBJETOS PARA INVESTIGADORES

    Investigador invetigador_1("002018054","Disenio de sistemas de informacion");
    Investigador invetigador_2("002017034","Disenio, construccion y mantenimiento de sitios web");
    Investigador invetigador_3("002016023","Administracion de redes ");
    Investigador invetigador_4("002020045","Evaluación y aplicacion de software y hardware");
    Investigador invetigador_5("002019017","Seguridad informatica");


    Investigador investigadores[5]={invetigador_1,invetigador_2,invetigador_3,invetigador_4,invetigador_5};

    
    
}