#include <iostream>
// #include "ContactNode.cpp"
#include "ContactNode.h"
using namespace std;


int main(){
    string cName1;
    string cNum1;
    string cName2;
    string cNum2;
    string cName3;
    string cNum3;

    cout << "Person 1" << endl << "Enter name:" << endl;
    getline(cin, cName1);
    cout << "Enter phone number:"<< endl;
    getline(cin, cNum1);


    ContactNode head (cName1, cNum1);
    cout << "You entered: " << cName1 << ", " << cNum1 << endl;
    cout << endl;

    cout << "Person 2" << endl << "Enter name:" << endl;
    getline(cin, cName2);
    cout<< "Enter phone number:"<< endl;
    getline(cin, cNum2);


    ContactNode second (cName2, cNum2);
    cout << "You entered: " << cName2 << ", " << cNum2 << endl;
    cout << endl;


    cout << "Person 3" << endl << "Enter name:" << endl;
    getline(cin, cName3);
    cout<< "Enter phone number:"<< endl;
    getline(cin, cNum3);


    ContactNode tail(cName3, cNum3);
    cout << "You entered: " << cName3 << ", " << cNum3 << endl;
    cout<< endl;

    head.InsertAfter(&second);
    second.InsertAfter(&tail);
    tail.InsertAfter(NULL);


    cout << "CONTACT LIST" << endl;
    head.PrintContactNode();
    cout<< endl;
    second.PrintContactNode();
    cout<< endl;
    tail.PrintContactNode();
    cout<< endl;

    return 0;
}