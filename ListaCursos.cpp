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
}
