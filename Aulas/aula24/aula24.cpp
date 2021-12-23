#include <iostream>

using namespace std;

void texto(string txt="Andre"); //atribui um valor default para o argumento

int main(){

    texto();

	return 0;
}

void texto(string txt){
    cout << "\n"<< txt << "\n";
}
