#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

#ifndef CARRO_H
#define CARRO_H

class Carro{
  private:
    int ano;
    string marca;    
    string cor;  
  public:
    void setMarca(string marca);
    void setCor(string cor);
    string getMarca();
    string getCor();
 };

 #endif