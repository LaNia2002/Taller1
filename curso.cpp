using namespace std;
#include <iostream>
#include "curso.h"
#include <string.h>

    curso::curso(string codigo, string nombre, int cantMax, string carrera, string profesor){
        this -> codigo = codigo;
        this -> nombre = nombre;
        this -> cantMax = cantMax;
        this -> carrera = carrera;
        this -> profesor = profesor;
    }
        string curso::getCodigo(){return codigo;}
        string curso::getNombre(){return nombre;}
        int curso::getCantMax(){return cantMax;}
        string curso::getCarrera(){return carrera;}
        string curso::getProfesor(){return profesor;}
            
