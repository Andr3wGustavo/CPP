#include <iostream>
#include <string.h>

using namespace std;

/*
primeiro argumento armazena a quantidade de parametros passadados
e o segundo armazena os parametros*/

int main(int argc, char *argv[]){

    if(argc>1){
        if(!strcmp(argv[1], "sol")){ //verifica se o parametro � sol
            cout << "Vou ao clube!" << "\n\n";
        }else if(!strcmp(argv[1], "nublado")){
            cout << "Vou ao cinema!" << "\n\n";
        }else{
            cout << "Vou ficar em casa!" << "\n\n";
        }
    }
    cout << argv[2] << "\n";
    cout << argc << "\n";

	return 0;
}
