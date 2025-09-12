using namespace std;
#include <iostream>
#pragma once

class nota {
  public:
    float data; 
    nota* sig; 

    nota(float data);
    float getNota();
};
