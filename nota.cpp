using namespace std;
#include <iostream>
#include "nota.h"
#include <string.h>

nota::nota(float data){
        this -> data = data;
    }
float nota::getNota() {return data;}
