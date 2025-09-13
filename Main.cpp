#include <iostream>
#include "alumno.h"
#include "curso.h"
#include "ListaAlumnos.h"
#include "ListaCursos.h"


void imprimirMenu(){
    std::cout << "Bienvenido al menu: principal." << std::endl;
	    std::cout << "-----------------------------------" << std::endl;
	    std::cout << "Ingrese la accion que quiere ejecutar: " << std::endl;
	    std::cout << "1) Gestion de alumnos" << std::endl;
        std::cout << "2) Gestion de cursos" << std::endl;
        std::cout << "3) Inscripcion de alumnos" << std::endl;
        std::cout << "4) Gestion de notas" << std::endl;
        std::cout << "5) Reportes" << std::endl;
	    std::cout << "-----------------------------------" << std::endl;
}

void eliminarAlumno(ListaAlumnos &listaAlumnos){
	int idAlumno;
	std::cout << "-----------------------------------" << std::endl;
    std::cout << "Ingrese el ID del alumno a inscribir: ";
    std::cin >> idAlumno;

    alumno* encontradoAlumno = listaAlumnos.buscarPorID(idAlumno);
    if (encontradoAlumno == nullptr) {
        std::cout << "El alumno no existe." << std::endl; }
    
    listaAlumnos.eliminarAlumno(idAlumno);
    std::cout << "El alumno ha sido eliminado." << std::endl;}

bool buscarPorID(ListaAlumnos &listaAlumnos) {
    int idAlumno;

	std::cout << "-----------------------------------" << std::endl;
    std::cout << "Ingrese el ID del alumno a inscribir: ";
    std::cin >> idAlumno;

    alumno* encontradoAlumno = listaAlumnos.buscarPorID(idAlumno);
    if (encontradoAlumno == nullptr) {
        std::cout << "El alumno no existe." << std::endl; return true;}
    
    std::cout << "Nombre: " << encontradoAlumno->getNombre()<< ", Apellido: " << encontradoAlumno->getApellido()
          << ", Carrera: " << encontradoAlumno->getCarrera()
          << ", Fecha de ingreso: "
          << encontradoAlumno->getDiaIngreso() << "/"
          << encontradoAlumno->getMesIngreso() << "/"
          << encontradoAlumno->getAnoIngreso()<< std::endl;
    return true;}

bool buscarPorNombre(ListaAlumnos &listaAlumnos) {
	std::cout << "-----------------------------------" << std::endl;
    std::string nombreAlumno;
    std::cout << "Ingrese el nombre del alumno a buscar: ";
    std::cin >> nombreAlumno;
    listaAlumnos.mostrarAlumno(nombreAlumno);
    return true;}

void buscarAlumno(ListaAlumnos &listaAlumnos) {

	std::cout << "-----------------------------------" << std::endl;
    std::cout << "Ingrese segun que aspecto quiere buscar: " << std::endl;
    std::cout << "1) ID: " << std::endl;
    std::cout << "2) Nombre: " << std::endl;
    std::cout << "3) volvel al menu: " << std::endl;
    int opcion;
    bool valido = false;
    std::cin >> opcion;

    while(valido==false){
        if (opcion == 1){
            valido=buscarPorID(listaAlumnos);
        }
        else if (opcion == 2){
            valido=buscarPorNombre(listaAlumnos);
        }
        else if (opcion == 3){
            valido=true;
        }
        else {
            std::cout << "Ingrese un numero valido: " << std::endl;
        }}}

void registrarAlumno(ListaAlumnos &listaAlumnos){
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

void eliminarCurso(ListaCursos &listaCursos){
	std::string codigoCurso;
    std::cout << "Ingrese el codigo del curso a eliminar: ";
    std::cin >> codigoCurso;

    curso* encontradoCurso = listaCursos.buscarPorCodigo(codigoCurso);
    if (encontradoCurso == nullptr) {
        std::cout << "El curso no existe." << std::endl; }
    
    listaCursos.eliminarCurso(codigoCurso);
    std::cout << "El curso ha sido eliminado." << std::endl;}

bool buscarPorCodigo(ListaCursos &listaCursos) {
    std::string codigoCurso;
    std::cout << "Ingrese el codigo del curso a buscar: ";
    std::cin >> codigoCurso;

    curso* encontradoCurso = listaCursos.buscarPorCodigo(codigoCurso);
    if (encontradoCurso == nullptr) {
        std::cout << "El curso no existe." << std::endl;
        return true;}
    
    std::cout << "Codigo: " << encontradoCurso->getCodigo() << ", Nombre: " << encontradoCurso->getNombre()
          << ", Cantidad Maxima de Estudiantes: " << encontradoCurso->getCantMax()
          << ", Carrera: " << encontradoCurso->getCarrera()
          << ", Profesor: " << encontradoCurso->getProfesor() << std::endl;
    return true;
}
bool buscarPorNomCurso(ListaCursos &listaCursos) {
	std::cout << "-----------------------------------" << std::endl;
    std::string nombreCurso;
    std::cout << "Ingrese el nombre del curso a buscar: ";
    std::cin >> nombreCurso;
    listaCursos.mostrar(nombreCurso);
    return true;
}
void buscarCurso( ListaCursos &listaCursos) {
	
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Ingrese segun que aspecto quiere buscar: " << std::endl;
    std::cout << "1) Codigo del curso: " << std::endl;
    std::cout << "2) Nombre del curso: " << std::endl;
    std::cout << "3) volvel al menu: " << std::endl;
    int opcion;
    bool valido = false;
    std::cin >> opcion;

    while(valido==false){
        if (opcion == 1){
            valido=buscarPorCodigo(listaCursos);
        }
        else if (opcion == 2){
            valido=buscarPorNomCurso(listaCursos);
        }
        else if (opcion == 3){
            valido=true;
        }
        else {
            std::cout << "Ingrese un numero valido: " << std::endl;
        }}}
void registrarCurso(ListaCursos &ListaCursos){

    std:: string codigo;
    std:: string nombre;
    int cantMax;
    std:: string carrera;
    std:: string profesor;

	std::cout << "-----------------------------------" << std::endl;
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
	std::cout << "-----------------------------------" << std::endl;
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
        registrarAlumno(listaAlumnos);
    }
    else if (opcion == 2){
        buscarAlumno(listaAlumnos);
    } else if (opcion == 3) {
        eliminarAlumno(listaAlumnos);
    } else if (opcion == 4){
        return true;
    }
    return true;
}

bool gestionCursos(ListaCursos &listaCursos){
    int opcion;
	
	std::cout << "-----------------------------------" << std::endl;
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
        registrarCurso(listaCursos);}
    else if (opcion == 2){
        buscarCurso(listaCursos);} 
    else if (opcion == 3) {
        eliminarCurso(listaCursos);}
	else if (opcion == 4){
        return true;}
    return true;
}
void inscribirAlumno(ListaAlumnos &listaAlumnos, ListaCursos &listaCursos) {
    int idAlumno;
    std::string codigoCurso;

	std::cout << "-----------------------------------" << std::endl;
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
	 int idAlumno;
    std::string codigoCurso;
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Ingrese el ID del alumno a eliminar: ";
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

    encontradoCurso->getAlumnosInscritos().eliminarAlumno(idAlumno);
    std::cout << "El alumno se ha eliminado del curso." << std::endl;}

bool gestionInscribirAlumno(ListaAlumnos &listaAlumnos, ListaCursos &listaCursos){
    int opcion;
	
	std::cout << "-----------------------------------" << std::endl;    
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

bool gestionDeNotas(ListaAlumnos &alumnos, ListaCursos &cursos){
    int opcion = 1;
    string codigo;
    int id;
    float calificacion;
    std::cout << "Ingrese el código del curso a la cual agregar la nota: ";
    std::cin >> codigo;
    std::cout << "Ingrese el id del alumno en el curso: ";
    std::cin >> id;
    curso* encontradoCurso = cursos.buscarPorCodigo(codigo);
    while (encontradoCurso == nullptr) {
        std::cout << "El curso no existe. Intente con otro codigo: ";
        std::cin >> codigo;
        encontradoCurso = cursos.buscarPorCodigo(codigo);
    }
    alumno* encontradoAlumno = alumnos.buscarPorID(id);
    while (encontradoAlumno == nullptr) {
        std::cout << "El alumno no existe. Intente con otro id: ";
        std::cin >> id;
        encontradoAlumno = alumnos.buscarPorID(id);
    }
    while (encontradoAlumno -> getCarrera() != encontradoCurso -> getCarrera() || id == 0) {
        std::cout << "El alumno no pertenece a la carrera del curso. Intente con otro id de alumno o escriba '0' para salir: ";
        std::cin >> id;
        if (id == 0){
            return true;}
        encontradoAlumno = alumnos.buscarPorID(id);
    }
    while(opcion == 1){
        std::cout << "Ingrese la nota a ingresar: ";
        std::cin >> calificacion;
        while (calificacion > 7.0 || calificacion < 1.0){
            std::cout << "Ingrese una nota válida (desde 1.0 a 7.0): ";
            std::cin >> calificacion;
        }
        nota A(calificacion);
        encontradoCurso->getAlumnosInscritos().buscarPorID(id) -> getNotasAlumno().insertar(A);
        std::cout << "Se ha registrado la nota con éxito." << std::endl;
        std::cout << "¿Desea agregar otra nota para este alumno? (1 si , 0 si no)";
        std::cin >> opcion;
    }
    return true;
}

void alumnosEnCarrera(ListaAlumnos &alumnos) {
    std::string carreraActual;
    std::string carreraBuscando;
    std::cout << "Ingrese la carrera a buscar: ";
    std::cin >> carreraBuscando;
    std::cout << "Buscando todos los alumnos en " << carreraBuscando << std::endl;
    NodoAlumno* actual = alumnos.retornarCabeza();
    if (actual == nullptr){
        std::cout << "No se encontro ningun alumno en esta carrera. ";
    }
    while (actual != nullptr) {
        carreraActual = actual -> dato.getCarrera();
        alumno alumnoActual = actual -> dato;
        if (carreraBuscando == carreraActual){
            std::cout << "Nombre: " << alumnoActual.getNombre()<< ", Apellido: " << alumnoActual.getApellido()
          << ", Carrera: " << alumnoActual.getCarrera() << ", Fecha de ingreso: "
          << alumnoActual.getDiaIngreso() << "/" << alumnoActual.getMesIngreso() << "/"
          << alumnoActual.getAnoIngreso()<< std::endl;
        }
        actual = actual->sig;
    }
    std::cout << "Volviendo al menu principal." << std::endl;
    std::cout << "" << std::endl;
}

void cursosDeAlumno(ListaCursos &cursos, ListaAlumnos &alumnos){
	int idBuscando;
    std::cout << "Ingrese el alumno a buscar (id): ";
    std::cin >> idBuscando;
    NodoAlumno* buscando = alumnos.retornarCabeza();
    
    if (buscando == nullptr){
        std::cout << "No existe ningún alumno inscrito.";
        return;
    }
    while (buscando != nullptr){
        if (buscando -> dato.getID() == idBuscando){
            std::cout << "Se ha verificado la existencia del alumno con el id " << idBuscando << std::endl;
            break;
        }
        buscando = buscando -> sig;
        if (buscando == nullptr){
        std::cout << "Este id no pertenece a ningun alumno. Intente con otro: ";
        std::cin >> idBuscando;
        NodoAlumno* buscando = alumnos.retornarCabeza();
        }
    }
    std::cout << "Buscando todos los cursos en que está " << buscando -> dato.getNombre() << std::endl;
    NodoCursos* actual = cursos.retornarCabeza();
    if (actual == nullptr){
        std::cout << "No se encontro ningun curso ingresado. Ingrese uno e intente de nuevo. ";
    }
    while (actual != nullptr) {
        NodoAlumno* cursoLista = actual -> dato.getAlumnosInscritos().retornarCabeza();
        while (cursoLista != nullptr){
            if (cursoLista -> dato.getID() == idBuscando){
                std::cout << "Codigo: " << actual -> dato.getCodigo() << ", Nombre: " << actual -> dato.getNombre()
          << ", Cantidad Maxima de Estudiantes: " << actual -> dato.getCantMax() << ", Carrera: " << actual -> dato.getCarrera()
          << ", Profesor: " << actual -> dato.getProfesor() << std::endl;
            }
            cursoLista = cursoLista -> sig;
        }
            
        actual = actual -> sig;
    }
    std::cout << "Volviendo al menu principal." << std::endl;
    std::cout << "" << std::endl;
}

void promedioDeAlumno(ListaCursos &cursos){
    std::string cod;
    std::cout << "Ingrese el codigo del curso a buscar: ";
    std::cin >> cod;
    curso* cursoAEncontrar = cursos.buscarPorCodigo(cod);
    if (cursoAEncontrar == nullptr) {
        std::cout << "El curso no existe." << std::endl;
        std::cout << "Volviendo al menu principal." <<std::endl;
        return;
    }
    ListaAlumnos alumnos = cursoAEncontrar -> getAlumnosInscritos();
    int id;
    std::cout << "Ingrese el id del alumno a buscar: ";
    std::cin >> id;
    alumno* encontradoAlumno = alumnos.buscarPorID(id);
    if (encontradoAlumno == nullptr) {
        std::cout << "El alumno no existe." << std::endl;
        std::cout << "Volviendo al menu principal." << std::endl;
        return;
    }
    ListaNotas listaDeNotas = encontradoAlumno -> getNotasAlumno();
    float sumaNotas = 0;
            int contadorNotas = 0;
            NodoNotas* actual = listaDeNotas.getDato();
            if (actual == nullptr){
                std::cout << "No hay notas de este alumno en el curso aun." << std::endl;
                std::cout << "Volviendo al menu principal." << std::endl;
                return;
            }
            while (actual != nullptr) {
                sumaNotas = sumaNotas + actual -> dato.getNota();
                contadorNotas = contadorNotas + 1;
                actual = actual -> sig;
            }
            std::cout << "El promedio del alumno en este curso es: " << sumaNotas/contadorNotas << std::endl;
            std::cout << "Volviendo al menu principal." << std::endl;
            return;
}

void promedioGeneral(){
}

bool consultas(ListaAlumnos &alumnos, ListaCursos &cursos){
    int opcion;
    std::cout << "¿Qué es lo que desea consultar?" << std::endl;
    std::cout << "1) Todos los alumnos en una carrera." << std::endl;
    std::cout << "2) Todos los cursos en que un alumno está inscrito." << std::endl;
    std::cout << "3) El promedio de notas de un alumno en un curso." << std::endl;
    std::cout << "4) El promedio general de un alumno." << std::endl;
    std::cout << "5) Volver al menu principal." << std::endl;
    std::cin >> opcion;
    while (opcion < 1 || opcion > 5){
        std::cout << "Ingrese una opcion valida.";
        std::cin >> opcion;
    }
    if (opcion == 1){
        alumnosEnCarrera(alumnos);
    } else if (opcion == 2) {
        cursosDeAlumno(cursos, alumnos);
    } else if (opcion == 3) {
        promedioDeAlumno(cursos);
    } else if (opcion == 4) {
        promedioGeneral();
    } else if (opcion == 5) {
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
            menu = gestionDeNotas(listaAlumnos, listaCursos);
        }
        else if (opcion == 5){
            menu = consultas(listaAlumnos, listaCursos);
        }
    }
	return 0;
}
