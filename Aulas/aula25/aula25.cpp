#include <iostream>

using namespace std;

void contador(int num, int cont=0); //cont inicia em 0

int main(){

    contador(20); // atribui o valor de num

	return 0;
}

void contador(int num, int cont){
    cout << cont << "\n";
    if(num>cont){ // se num for maior que cont ele chama a função novamente incrementando
        contador(num, ++cont);
    }
}
