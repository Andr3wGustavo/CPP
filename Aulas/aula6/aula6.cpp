//variaveis globais e locais, operadores matematicos

#include <iostream>

using namespace std;

int n1, n2; // variaveis globais

int main(){
	
	int n3, n4; // variaveis locais
	int res;
	int res2;
	
	n1 = 11;
	n2 = 3;
	n3 = 5;
	n4 = 2;
	
	res = (n1+n2+n3+n4)-10;
	res2 = n1+n2*n4;
	
	cout << "Soma de todas a variaveis: " << res << "\n";
	cout << "Resultado 2: " << res2;
	
	return 0;
}


