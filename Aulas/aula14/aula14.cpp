#include <iostream>

using namespace std;

int main(){

    int cont;
    cont=0;

	while(cont++<20){ // with c++<20 we can increment 1
        cout << "Hello\n";
        if(cont==10){
            break;
        }
	}
    cout << "\nRoutine finished!\n";

	return 0;
}
