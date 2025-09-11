#include "ListaAlumnos.h"
#include <iostream>
using namespace std;

NodoAlumno::NodoAlumno(alumno dato):
 dato(dato) {
    sig = nullptr;
}

NodoAlumno::~NodoAlumno() {}

ListaAlumnos::ListaAlumnos() {
    cabeza = nullptr;
}

void ListaAlumnos::insertar(alumno a) {
    NodoAlumno* nuevo = new NodoAlumno(a);
    nuevo->sig = cabeza;
    cabeza = nuevo;
}
