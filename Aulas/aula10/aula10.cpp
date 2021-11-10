#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n1,n2,res;
    char option;

    start:

    system("cls");

    cout << "Type the first note: ";
    cin >> n1;
    cout << "Type the second note: ";
    cin >> n2;

    res=n1+n2;

    if (res>=60){
        cout << "\nApproved Student!\n";
    }else if(res>=40){
        cout << "\nRecovery Student!\n";
    }else{
        cout << "\nFailed Student!\n";
    }

    cout << "\nWanna type more notes? [y/n]: ";
    cin >> option;

    if(option=='y' or option=='Y'){

        goto start;
    }

	return 0;
}
