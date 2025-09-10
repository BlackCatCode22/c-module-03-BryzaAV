//pointersWarmUp.cpp
//BAV 9/10/2025

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int* ptr2=&v;
    *ptr2 = 7;
    cout << "v=" << v << endl;


    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << *&gpa;


    //cout << "Age: " << &age << endl;
    //cout << "Gpa: " << &gpa << endl;
    //cout << "Name: " << &name << endl;

    system("pause>0");
    return 0;
}