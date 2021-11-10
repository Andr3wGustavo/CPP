#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int transport;
    char opc;

    start:
b
    system("cls");

    cout << "[1]=Car, [2]=Bike, [3]=Airplane, [4]Helicopter\n";
    cout << "Select a transport way: ";
    cin >> transport;

    switch(transport){
        case 1:
        case 2:
            cout << "Terrestrial way\n";
            switch(transport){
                case 1:
                    cout << "You selected: Car\n";
                    break;
                case 2:
                    cout << "You selected: Bike\n";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "Air way\n";
            switch(transport){
            case 3:
                cout << "You selected: Airplane\n";
                break;
            case 4:
                cout << "You selected> Helicopter\n";
                break;
            }
            break;
    }

    cout << "\nWanna continue? [y/n]: ";
    cin >> opc;

    if(opc=='Y' || opc=='y'){
        goto start;
    }

	return 0;
}
