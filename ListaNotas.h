#include "nota.h"
#pragma once
#include <iostream>
using namespace std;

class NodoNotas {
public:
    nota dato;
    NodoNotas* sig;
    NodoNotas(nota dato);
    ~NodoNotas(); 
    nota getNodo();   
};

class ListaNotas {
private:
    NodoNotas* cabeza;

public:
    ListaNotas();
    NodoNotas getDato();
    void insertar(nota dato);          
};
