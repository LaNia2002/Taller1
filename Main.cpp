#include <iostream>

int main()
{
    std::cout << "Bienvenido al menu: principal." << std::endl;
	std::cout << "Ingrese la accion que quiere ejecutar: " << std::endl;
	std::cout << "1) Gestion de alumnos" << std::endl;
    std::cout << "2) Gestion de cursos" << std::endl;
    std::cout << "3) Inscripcion de alumnos" << std::endl;
    std::cout << "4) Gestion de notas" << std::endl;
    std::cout << "5) Reportes" << std::endl;
    int opcion;
    std::cin >> opcion;
    std::cout << opcion;

    return 0;
}
