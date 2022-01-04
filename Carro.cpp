#include <cstdlib>
#include <string>
#include <iostream>
#include "Carro.h"

using namespace std;

		void Carro::setMarca(string marca){
      this->marca = marca;
    } 
    string Carro::getMarca(){
      return marca;
    }
		void Carro::setCor(string cor){
      this->cor = cor;
    }
    string Carro::getCor(){
      return cor;
    }
