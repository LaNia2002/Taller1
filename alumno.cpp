using namespace std;
#include <iostream>
#include "alumno.h"
#include <string.h>

    alumno::alumno(int id, string nombre,string apellido, string carrera, int diaIngreso, int mesIngreso, int anoIngreso){
        this -> id = id;
        this -> nombre = nombre;
        this -> apellido = apellido;
        this -> carrera = carrera;
        this -> diaIngreso = diaIngreso;
        this -> mesIngreso = mesIngreso;
        this -> anoIngreso = anoIngreso;
    }
        int alumno::getID() {return id;}
        string alumno::getNombre(){return nombre;}
        string alumno::getApellido(){return apellido;}
        string alumno::getCarrera(){return carrera;}
        int alumno::getDiaIngreso(){return diaIngreso;}
        int alumno::getMesIngreso(){return mesIngreso;}
        int alumno::getAnoIngreso(){return anoIngreso;}
        ListaNotas& alumno::getNotasAlumno() {return listaDeNotas;}
            

