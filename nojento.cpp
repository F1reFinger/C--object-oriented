#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Carro{
  private:
    int ano;
    string marca;    
    string cor;  
  public:
    void setMarca(string marca){
      this->marca = marca;
    }  
    void setCor(string cor){
      this->cor = cor;
    }
    string getMarca(){
      return marca;
    }
    string getCor(){
      return cor;
    }
 };

int main(int argc, char** argv){

    Carro c1;
    string mc, nojento;

    cin>> mc;
    c1.setMarca(mc);
    cin>> nojento;
    c1.setCor(nojento);

    cout<< c1.getMarca() <<endl;
    cout<< c1.getCor() <<endl;

    return 0;
}