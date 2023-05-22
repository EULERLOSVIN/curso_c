// clase hija

#include <iostream>
#include <string>

#include "profesor.cpp"
#include "investigador.cpp"

using namespace std;

class Profesor_investigador : public Profesor, public Investigador
{

    public:
    Profesor_investigador( string _nombres = "", string _dni = "", string _facultad = "", string _codigo = "", string _especialidad = "",string _libros_publicados = "") : Profesor(_nombres, _dni, _facultad), Investigador(_codigo, _especialidad,_libros_publicados)
    {
        
    }

    void getDatos()
    {
        cout<<"DATOS DE LOS PROFESORES: ";
        getDatos_investigador();
        cout<<"\n\n";

        cout<<"DATOS DE INVESTIGADORES: "<<endl;
        getDatos_doc();

    }


    
};
