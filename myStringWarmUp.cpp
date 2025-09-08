//myStringWarmUp.cpp
//BAV 9/8/2025

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "\nHello and welcome to my string warm up program! \n ";

    string text1 = "Hello String";
    reverse (text1.begin(), text1.end());
    cout << text1 << endl;


    string myStrObject = "abc defx g h ijk";

    //understand the index nature of a string object
    //output the car at index (aka char position 5)
    cout << "\n\n";
    cout << myStrObject[2];
    cout << "\n\n";

    cout << "\n my string object is: " << myStrObject << endl;

    //1. get the length of the string
    int lengthOfMyString = myStrObject.length();
    cout << "\nLength of string: " << lengthOfMyString << endl;

    //Create a char variable for the swap
    char myTempChar;
    for (int i = 0; i < lengthOfMyString/2; i++) {

        cout << "\ni = " << i << " and the char at " << i << " is " << myStrObject[i] << endl;
        //swap the characters
        myTempChar = myStrObject[i];
        myStrObject[i] = myStrObject[lengthOfMyString - i - 1];
        myStrObject[lengthOfMyString - i - 1] = myTempChar;

    }

    cout << "\n The reversed string is: \n";

    cout << "\n my string object is: " << myStrObject << endl;

    return 0;
}