#include "nota.h"
#include <iostream>
using namespace std;

class NodoNotas {
public:
    nota dato;
    NodoNotas* sig;

    NodoNotas(nota dato);   
    ~NodoNotas();         
};

class ListaNotas {
private:
    NodoNotas* cabeza;

public:
    ListaNotas();
    void insertar(nota dato);          
};
