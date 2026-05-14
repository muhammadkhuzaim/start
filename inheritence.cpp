#include<iostream>
#include"engineer.h"
using namespace std;

int main() {

    // The class is seperate from this file which is saved as Enginner.h
    
    string firstname, lastname, field;
    cout << "Enter Your First Name: ";
    cin >> firstname;
    cout << "Enter Your Last Name: ";
    cin >> lastname;

    cout << "Enter Your Field: ";
    cin >> field;


    Engineer e1(firstname, lastname, field);

    e1.printDetails();


}