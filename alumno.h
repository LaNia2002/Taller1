using namespace std;
#include <iostream>
#include <string.h>
#include "ListaNotas.h"
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
        ListaNotas listaDeNotas;
        
    public:
        alumno(int, string, string,string, int, int, int);
        int getID();
        string getNombre();
        string getApellido();
        string getCarrera();
        int getDiaIngreso();
        int getMesIngreso();
        int getAnoIngreso();
        ~alumno(){};;
};
