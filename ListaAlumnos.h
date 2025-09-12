#pragma once
#include "alumno.h"
#include <iostream>
using namespace std;

class NodoAlumno {
public:
    alumno dato;
    NodoAlumno* sig;

    NodoAlumno(alumno dato);   
    ~NodoAlumno();         
};

class ListaAlumnos {
private:
    NodoAlumno* cabeza;

public:
    ListaAlumnos();
    void insertar(alumno a);
    alumno* buscarPorID(int id);
    void eliminarAlumno(int id);
    void mostrarAlumno(std::string nombreAlumno);
};
