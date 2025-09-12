#include "listaNotas.h"
#include <iostream>
using namespace std;

NodoNotas::NodoNotas(nota dato):
 dato(dato) {
    sig = nullptr;
}

NodoNotas::~NodoNotas() {}

nota NodoNotas::getNodo(){return dato;}

ListaNotas::ListaNotas() {
    cabeza = nullptr;
}

void ListaNotas::insertar(nota dato) {
    NodoNotas* nuevo = new NodoNotas(dato);
    nuevo->sig = cabeza;
    cabeza = nuevo;
}
NodoNotas ListaNotas::getDato(){return *cabeza;}
