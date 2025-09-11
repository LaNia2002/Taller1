using namespace std;
#include <iostream>
#include <string.h>
#pragma once

class alumno{
    private: 
        int id;
        string nombre;
        string apellido;
        string carrera;
        int diaIngreso;
        int mesIngreso;
        int anoIngreso;
        
    public:
        alumno(int, string, string, int, int, int);
        int getID();
        string getNombre();
        string getApellido();
        int getDiaIngreso();
        int getMesIngreso();
        int getAnoIngreso();
        ~alumno(){};;
};
