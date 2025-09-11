#include <iostream>

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
}

bool gestion() {
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

int main() {
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
            menu = gestion();
        }
    }
	return 0;
}
