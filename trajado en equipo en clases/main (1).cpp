#include <string>
#include <fstream> // manejo de archivos txt file stream
//llamado a la clase
#include "estudiante.cpp"

using namespace std;

int main(){
    system("cls");
    //crear facultades
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de de Zootecnia", "FZ");

    // Estudiantes de FIIS
    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    est1.setFacultad(facu1);
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    est2.setFacultad(facu1);
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    est3.setFacultad(facu1);
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
    est4.setFacultad(facu1);
    // Estudiantes de ZOOTECNIA
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    est5.setFacultad(facu2);
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    est6.setFacultad(facu2);
    Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    est7.setFacultad(facu2);
    Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
    est8.setFacultad(facu2);

    // crear cursos
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseño de BD", 3);
    Curso curs_3("0003", "Sotfware I", 3);
    Curso curs_4("0004", "Sotfware II", 4);
    Curso curs_5("0005", "Gestion de procesos", 4);
    //cursos para zoo
    Curso curs_6("0006", "Platano I", 4);
    Curso curs_7("0007", "Arroz I", 3);
    Curso curs_8("0008", "Matematica Basica", 3);
    Curso curs_9("0009", "BIO II", 4);
    Curso curs_10("00010", "Lenguaje", 4);
    
    // agregando cursos para est1
    /*est1.agregarCurso(curs_1);
    est1.agregarCurso(curs_2);
    est1.agregarCurso(curs_3);
    est1.agregarCurso(curs_4);
    est1.agregarCurso(curs_5);
    est1.agregarCurso(curs_1);*/

    //mostrar los cursos registrados al est1
    /*est1.mostrarCursos();
    est1.ingresarNotas();
    est1.mostrarCursos();*/

    //cursos para estudiante 2
    /*est2.agregarCurso(curs_1);
    est2.agregarCurso(curs_2);
    est2.agregarCurso(curs_3);
    est2.agregarCurso(curs_4);
    est2.agregarCurso(curs_5);*/
    //mostrar los cursos registrados al est2
    /*est2.mostrarCursos();
    est2.ingresarNotas();
    est2.mostrarCursos();*/

    //cursos para el estudiante n°3 de la FIIS
    /*est3.agregarCurso(curs_1);
    est3.agregarCurso(curs_2);
    est3.agregarCurso(curs_3);
    est3.agregarCurso(curs_4);
    est3.agregarCurso(curs_5);*/
    //mostrar los cursos registrados al est3
    /*est3.mostrarCursos();
    est3.ingresarNotas();
    est3.mostrarCursos();*/

    //cursos para el estudiante n°4 de la FIIS
    /*est4.agregarCurso(curs_1);
    est4.agregarCurso(curs_2);
    est4.agregarCurso(curs_3);
    est4.agregarCurso(curs_4);
    est4.agregarCurso(curs_5);
    //mostrar los cursos registrados al est4
    /*est4.mostrarCursos();
    est4.ingresarNotas();
    est4.mostrarCursos();*/
    
    //crear una lista de estudiantes
    Estudiante list_est[8] ={est1,est2,est3,est4,est5,est6,est7,est8};
    //Estudiante list_est2[2];
    //string _codigo, _correo, _apellido, _nombre, _dni;
    //int opcion = 0; //para elegir la facultad
    //int valor = sizeof(list_est2) /sizeof(list_est2[0]); //la cantidad de arreglos
    /*for (int i = 0; i < valor; i++){
        _codigo = "";
        _correo = ""; 
        _apellido = ""; 
        _nombre = ""; 
        _dni = "";
        cout<<"ingrese los datos del estudiante(codigo, correo, apellido, nombre, dni)";
        cin>>_codigo;
        cin>>_correo;
        cin>>_apellido;
        cin>>_nombre;
        cin>>_dni;
        list_est2[i] = Estudiante(_codigo, _correo, _apellido, _nombre, _dni);
        cout<<"seleccione una facultad \n";
        cout<<"1: FISS \n";
        cout<<"2: ZOO \n";
        cin>>opcion;
        if(opcion == 1){ //FIIS
            list_est2[i].setFacultad(facu1);
        }
        if(opcion == 2){ //ZOO
            list_est2[i].setFacultad(facu2);
        }
    }*/

    for (int i = 0; i < 8; i++){
        //agregar los cursos
        if(list_est[i].getFacultad().getSigla()== "FIIS"){
            list_est[i].agregarCurso(curs_1);
            list_est[i].agregarCurso(curs_2);
            list_est[i].agregarCurso(curs_3);
            list_est[i].agregarCurso(curs_4);
            list_est[i].agregarCurso(curs_5);
        }
        if(list_est[i].getFacultad().getSigla()== "FZ"){
            list_est[i].agregarCurso(curs_6);
            list_est[i].agregarCurso(curs_7);
            list_est[i].agregarCurso(curs_8);
            list_est[i].agregarCurso(curs_9);
            list_est[i].agregarCurso(curs_10);
        }
        list_est[i].getFacultad().imprimir();
        cout<<"************************\n";
        list_est[i].getDatos();
        cout<<"************************\n";
        list_est[i].mostrarCursos();
        cout<<"************************\n";  
    }
     
    return 0;
}