using namespace std;
#include <iostream>
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
        alumno* sig;
        
        
    public:
        alumno::alumno(int id, string nombre, string carrera, int diaIngreso, int mesIngreso, int anoIngreso){
            this -> id = id;
            this -> nombre = nombre;
            this -> carrera = carrera;
            this -> diaIngreso = diaIngreso;
            this -> mesIngreso = mesIngreso;
            this -> anoIngreso = anoIngreso;
            this -> sig = nullptr;
        
        int getID(){return id;}
        string getNombre(){return nombre;}
        string getApellido(){return apellido;}
        int getDiaIngreso(){return diaIngreso;}
        int getMesIngreso(){return mesIngreso;}
        int getAnoIngreso(){return anoIngreso;}
            
        }
    }
}
