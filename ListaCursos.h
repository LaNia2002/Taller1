#include "curso.h"
#include <iostream>
using namespace std;

class NodoCursos {
public:
    curso dato;
    NodoCursos* sig;

    NodoCursos(curso dato);   
    ~NodoCursos();         
};

class ListaCursos {
private:
    NodoCursos* cabeza;

public:
    ListaCursos();
    void insertar(curso dato);
    curso* buscarPorCodigo(std::string codigo);   
};
