#include <iostream>
#include "alumno.h"
#include "curso.h"
#include "ListaAlumnos.h"
#include "ListaCursos.h"


void imprimirMenu(){
    std::cout << "Bienvenido al menu: principal." << std::endl;
	    std::cout << "Ingrese la accion que quiere ejecutar: " << std::endl;
	    std::cout << "1) Gestion de alumnos" << std::endl;
        std::cout << "2) Gestion de cursos" << std::endl;
        std::cout << "3) Inscripcion de alumnos" << std::endl;
        std::cout << "4) Gestion de notas" << std::endl;
        std::cout << "5) Reportes" << std::endl;
}

void eliminarAlumno(){
    
}
void buscarAlumno() {
    
}
void registrarAlumno(){
	int id;
    std:: string nombre;
    std:: string apellido;
    std:: string carrera;
    int diaIngreso;
    int mesIngreso;
    int anoIngreso;

    std::cout <<"Ingrese el ID del alumno:" << std::endl;
    std::cin >>id;
    std::cout<<" Ingrese el nombre del alumno:" <<std::endl;
    std::cin>>nombre;
    std:: cout<<"Ingrese el apellido del alumno:" <<std::endl;
    std::cin>>apellido;
    std::cout<<"Ingrese la carrera del alumno:" <<std::endl;
    std::cin>>carrera;
    std::cout<<"Ingrese el dia de ingreso del alumno:" <<std::endl;
    std::cin>>diaIngreso;
    while (diaIngreso> 31 || diaIngreso < 1){
        std::cout << "Ingrese un dia valido: " << std::endl;
        std::cin >> diaIngreso;
    }
    std::cout<<"Ingrese el mes de ingreso del alumno:" <<std::endl;
    std::cin>>mesIngreso;
    while (mesIngreso> 12 || mesIngreso < 1){
        std::cout << "Ingrese un mes valido: " << std::endl;
        std::cin >> mesIngreso;
    }
    std::cout<<"Ingrese el ano de ingreso del alumno: "<<std::endl;
    std::cin>>anoIngreso;
    while (anoIngreso> 2025 || anoIngreso < 1900){
        std::cout << "Ingrese un ano valido: " << std::endl;
        std::cin >> anoIngreso;
    }
    alumno a(id, nombre, apellido, carrera, diaIngreso, mesIngreso, anoIngreso);
    listaAlumnos.insertar(a);
    std::cout<<"El alumno ha sido registrado exitosamente."<<std::endl;
}

void eliminarCurso(){
    
}
void buscarCurso() {

}
void registrarCurso(ListaCursos &listaCursos){

    std:: string codigo;
    std:: string nombre;
    int cantMax;
    std:: string carrera;
    std:: string profesor;

    std::cout <<"Ingrese el codigo del curso:" << std::endl;
    std::cin >>codigo;
    std::cout<<" Ingrese el nombre del curso:" <<std::endl;
    std::cin>>nombre;
    std:: cout<<"Ingrese la cantidad maxima de estudiantes del curso:" <<std::endl;
    std::cin>>cantMax;
    while (cantMax < 0){
        std::cout << "Ingrese una cantidad valida: " << std::endl;
        std::cin >> cantMax;}
    std::cout<<"Ingrese la carrera del curso:" <<std::endl;
    std::cin>>carrera;
    std::cout<<"Ingrese el nombre del profesor del curso:" <<std::endl;
    std::cin>>profesor;

    curso c(codigo, nombre, cantMax, carrera, profesor);
    ListaCursos.insertar(c);
	
    std::cout<<"El curso ha sido registrado exitosamente."<<std::endl;
    
}

bool gestion(ListaAlumnos &listaAlumnos) {
    int opcion;
    std::cout << "Ingrese qué tipo de gestion quiere hacer: " << std::endl;
    std::cout << "1) Registro de alumno: " << std::endl;
    std::cout << "2) Buscar un alumno: " << std::endl;
    std::cout << "3) Eliminar un alumno: " << std::endl;
    std::cout << "4) Volver al menú: " << std::endl;
    std::cin >> opcion;
    while (opcion > 4 || opcion < 1){
        std::cout << "Ingrese un numero valido: " << std::endl;
        std::cin >> opcion;
    }
    if(opcion == 1){
        registrarAlumno();
    }
    else if (opcion == 2){
        buscarAlumno();
    } else if (opcion == 3) {
        eliminarAlumno();
    } else if (opcion == 4){
        return true;
    }
    return true;
}

bool gestionCursos(ListaCursos &listaCursos){
    int opcion;
    std::cout << "Ingrese qué tipo de gestion quiere hacer: " << std::endl;
    std::cout << "1) Registro de curso: " << std::endl;
    std::cout << "2) Buscar un curso: " << std::endl;
    std::cout << "3) Eliminar un curso: " << std::endl;
    std::cout << "4) Volver al menú: " << std::endl;
    std::cin >> opcion;
    while (opcion > 4 || opcion < 1){
        std::cout << "Ingrese un numero valido: " << std::endl;
        std::cin >> opcion;
    }
    if(opcion == 1){
        registrarCurso(listaCursos);
    }
    else if (opcion == 2){
        buscarCurso();

    } 
    else if (opcion == 3) {
        eliminarCurso();

    } else if (opcion == 4){
        return true;
    }
    return true;
}
void inscribirAlumno(ListaAlumnos &listaAlumnos, ListaCursos &listaCursos) {
    int idAlumno;
    std::string codigoCurso;

    std::cout << "Ingrese el ID del alumno a inscribir: ";
    std::cin >> idAlumno;
    std::cout << "Ingrese el codigo del curso: ";
    std::cin >> codigoCurso;

    alumno* encontradoAlumno = listaAlumnos.buscarPorID(idAlumno);
    if (encontradoAlumno == nullptr) {
        std::cout << "El alumno no existe." << std::endl; return;}

    curso* encontradoCurso = listaCursos.buscarPorCodigo(codigoCurso);
    if (encontradoCurso == nullptr) {
        std::cout << "El curso no existe." << std::endl;return;}

    if (encontradoAlumno->getCarrera() != encontradoCurso->getCarrera()) {
        std::cout << "El alumno no pertenece a la carrera del curso." << std::endl;return;}

    encontradoCurso->getAlumnosInscritos().insertar(*encontradoAlumno);
    std::cout << "El alumno se ha inscrito al curso." << std::endl;
}
void eliminarInscripcionAlumno(ListaAlumnos &listaAlumnos, ListaCursos &listaCursos){   
}
bool gestionInscribirAlumno(ListaAlumnos &listaAlumnos, ListaCursos &listaCursos){
    int opcion;
    std::cout << "Ingrese qué tipo de gestion quiere hacer: " << std::endl;
    std::cout << "1) Inscribir un alumno a un curso: " << std::endl;
    std::cout << "2) Eliminar un alumno de un curso: " << std::endl;
    std::cout << "3) Volver al menú: " << std::endl;
    std::cin >> opcion;
    while (opcion > 3 || opcion < 1){
        std::cout << "Ingrese un numero valido: " << std::endl;
        std::cin >> opcion;
    }
    if(opcion == 1){
        inscribirAlumno(listaAlumnos, listaCursos);
    }
    else if (opcion == 2){
        eliminarInscripcionAlumno(listaAlumnos, listaCursos);
    }
    else if (opcion == 3) {
        return true;
    }
    return true;
}

int main() {
	ListaAlumnos listaAlumnos;
	ListaCursos listaCursos;
    bool menu = true;
    while (menu){
        imprimirMenu();
        int opcion;
        std::cin >> opcion;
		while (opcion > 5 || opcion < 1) {
       		std::cout << "Ingrese un numero valido: " << std::endl;
       	 	std::cin >> opcion;
    	}
        if (opcion == 1){
            menu = gestion(listaAlumnos);
        }
		else if (opcion == 2){
            menu=gestionCursos(listaCursos);
        }
        else if (opcion == 3){
			menu=gestionInscribirAlumno(listaAlumnos, listaCursos);
        }
        else if (opcion == 4){
            
        }
        else if (opcion == 5){
            
        }
    }
	return 0;
}
