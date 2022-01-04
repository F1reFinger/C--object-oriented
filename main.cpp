#include <cstdlib>
#include <string>
#include <iostream>
#include <stdio.h>

#include <stdio.h> 
#ifdef _WIN32 
	// If system is Windows, use Windows libraries: 
	#include <windows.h> 
	void sleep(unsigned int miliseconds) 
	{ 
		Sleep(miliseconds); 
	} 
#else 
	// Otherwise, use POSIX libraries: 
	#include <unistd.h> 
	void sleep(unsigned int miliseconds) 
	{ 
		usleep(miliseconds * 1000); // usleep receives microseconds 
	} 
#endif 

#include "Carro.cpp"

using namespace std;

int main(int argc, char** argv){

    Carro c1;
    string mc, nojento;
    cout<< "insira o veiculo:";
    cin>> mc;
    c1.setMarca(mc);
    cout<< "insira a cor do veiculo:";
    cin>> nojento;
    c1.setCor(nojento);

    cout<< "Veiculo Selecionado:";
    cout<< c1.getMarca() <<endl;
    cout<< "Cor do veiculo:";
    cout<< c1.getCor() <<endl;
    cout<< "\n";
    cout<< "Aguarde 5s para o encerramento do programa\n";

    sleep(5 * 1000);

    return 0;
}