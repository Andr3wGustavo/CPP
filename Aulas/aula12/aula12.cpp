#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int n1,n2,grade;
    char option;
    string res;

    start:

    system("cls");
    cout << "\nType the first grade: ";
    cin >> n1;
    cout << "\nType the second grade: ";
	cin >> n2;

	grade=n1+n2;

	(grade>=60) ? res="APPROVED" : res="FAILED";

	cout << "\nThe student is " << res << "\n";

	cout << "\nWanna continue? [y/n]: ";
    cin >> option;

    if(option=='y' || option=='Y'){
        goto start;
    }

	return 0;
}
