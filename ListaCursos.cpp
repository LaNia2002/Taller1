#include "ListaCursos.h"
#include <iostream>
using namespace std;

NodoCursos::NodoCursos( curso dato):
 dato(dato) {
    sig = nullptr;
}

NodoCursos::~NodoCursos() {}

ListaCursos::ListaCursos() {
    cabeza = nullptr;
}

void ListaCursos::insertar(curso dato) {
    NodoCursos* nuevo = new NodoCursos(dato);
    nuevo->sig = cabeza;
    cabeza = nuevo;

 curso* ListaCursos::buscarPorCodigo(std::string codigo) {
    NodoCursos* actual = cabeza;
    while (actual != nullptr) {
        if (actual->dato.getCodigo() == codigo) {
            return &(actual->dato);
        }
        actual = actual->sig;
    }
    return nullptr;}

void ListaCursos::eliminarCurso(string codigo) {
    NodoCursos* actual = cabeza;
    NodoCursos* anterior = nullptr;

    while (actual != nullptr && actual->dato.getCodigo() != codigo) {
        anterior = actual;
        actual = actual->sig;}

    if (actual == nullptr) return;
    if (anterior == nullptr) {
        cabeza = actual->sig;}
         else {
        anterior->sig = actual->sig;}
        
    delete actual;}

void ListaCursos::mostrar(string nombreCurso) {
    NodoCursos* actual = cabeza;
    if (actual == nullptr) {
        cout << "No hay cursos registrados." << endl;
        return;
    }
    while (actual != nullptr) {
        if(actual->dato.getNombre() == nombreCurso){
            cout << "Codigo: " << actual->dato.getCodigo()
             << "  Nombre: " << actual->dato.getNombre()
             << "  Cupo: " << actual->dato.getCantMax()
             << "  Carrera: " << actual->dato.getCarrera()
             << "  Profesor: " << actual->dato.getProfesor()<< endl;}
        actual = actual->sig;}}


