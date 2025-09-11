using namespace std;
#include <iostream>
#include "alumno.h"
#include <string.h>

    alumno::alumno(int id, string nombre, string carrera, int diaIngreso, int mesIngreso, int anoIngreso){
        this -> id = id;
        this -> nombre = nombre;
        this -> carrera = carrera;
        this -> diaIngreso = diaIngreso;
        this -> mesIngreso = mesIngreso;
        this -> anoIngreso = anoIngreso;
        this -> sig = nullptr;
    }
        int alumno::getID() {return id;}
        string alumno::getNombre(){return nombre;}
        string alumno::getApellido(){return apellido;}
        int alumno::getDiaIngreso(){return diaIngreso;}
        int alumno::getMesIngreso(){return mesIngreso;}
        int alumno::getAnoIngreso(){return anoIngreso;}
            

