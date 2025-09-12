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

 alumno* ListaAlumnos::buscarPorID(int id) {
    NodoAlumno* actual = cabeza;
    while (actual != nullptr) {
        if (actual->dato.getID() == id) {
            return &(actual->dato);
        }
        actual = actual->sig;
    }
    return nullptr;}

void ListaAlumnos::eliminarAlumno(int id) {
    NodoAlumno* actual = cabeza;
    NodoAlumno* anterior = nullptr;

    while (actual != nullptr && actual->dato.getID() != id) {
        anterior = actual;
        actual = actual->sig;}

    if (actual == nullptr) return; 
    if (anterior == nullptr) {
        cabeza = actual->sig;}
         else {
        anterior->sig = actual->sig;}
        
    delete actual;}

void ListaAlumnos::mostrarAlumno(string nombreAlumno) {
    NodoAlumno* actual = cabeza;
    if (actual == nullptr) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    while (actual != nullptr) {
        if(actual->dato.getNombre() == nombreAlumno){
            cout << "ID: " << actual->dato.getID()
             << "  Nombre: " << actual->dato.getNombre()
             << "  Apellido: " << actual->dato.getApellido()
             << "  Carrera: " << actual->dato.getCarrera()
             << "  Fecha de Ingreso: " << actual->dato.getDiaIngreso() << "/" 
             << actual->dato.getMesIngreso() << "/" 
             << actual->dato.getAnoIngreso() << endl;}
        actual = actual->sig;
    }}
