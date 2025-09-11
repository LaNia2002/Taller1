using namespace std;
#include <iostream>
#include <string.h>
#pragma once

class curso{
    private: 
        string codigo;
        string nombre;
        int cantMax;
        string carrera;
        string profesor;

        
    public:
        curso(string, string, int, string, string);
        string getCodigo();
        string getNombre();
        int getCantMax();
        string getCarrera();
        string getProfesor();
        ~curso(){};;
};
