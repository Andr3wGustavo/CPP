#include <iostream>

using namespace std;

void soma(int n1, int n2);
void soma();

int main(){

    soma(20,30);
    soma();

	return 0;
}

void soma (int n1, int n2){
    int res=n1+n2;
    cout << "A soma de " << n1 << " e " << n2 << " = " << res << "\n\n";
}

void soma(){
    int n1=10,n2=20,res=n1+n2;
    cout << "A soma de " << n1 << " e " << n2 << " = " << res << "\n\n";
}
