#include <iostream>

using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main(){

    int val=4, res;

    res=fatorial(val); // fatorial em função do valor atribuido
    cout << "Fatorial de  " << val << ": " << res;


    cout << "\n\nFibonacci com " << val << " valores: ";
    for(int i=0;i<val;i++){
        cout << fibonacci(i+1) << " ";
    }

    cout << "\n\n";

	return 0;
}

int fatorial(int n){
    if(n==0){ // so retorna 1 na multplicação quando n for igual a 0
        return 1;
    }
    return n*fatorial(n-1); // calculo do fatorial, n vezes n-1
}

int fibonacci(int n){
    if(n==1 || n==2){ // se for os dois primeiros ele retorna 1, pois os valores são 1
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2); // calculo do fibonacci,
    }
}
