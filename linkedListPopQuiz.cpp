//linkedListPopQuiz.cpp
//BAV 9/17/2025

#include <iostream>
#include <string>

//This program will create a linked list using a struct
//that contains a char and a pointer
//The linked list will contain all the chars in a string named: myStr with "abcDefg"
//output will be the contents of myStr in natural (original) order ad in reversed order.

using namespace std;

//Creat the struct
struct node {
    char data;
    node* next;
};

int main() {

    cout << "\n Welcome to my Linked List! \n";

    //Creat s string named myStr
    string myStr = "abcDefg";

    //test out struct
    //create a pointer named head
    node* pHead = nullptr;

    //creat a new node named node
    node* pNew = new node();
    pNew->data = myStr[0];
    pNew->next = nullptr;

    //Output what is in out node
    cout << "\n Output of data and next:\n";
    cout << pNew->data << endl;
    cout << pNew->next << endl;

    //create linked list
    pHead = pNew;

    //verify this with output
    cout << "\n output of the node that pHead is pointing to\n";
    cout << pNew->data << endl;
    cout << pNew->next << endl;

    //add a node to our linked list using out four steps
    //create a new node
    pNew = new node();
    //Fill the date field
    pNew->data = myStr[1];
    pNew->next = nullptr;

    //Attach new node to head of list
    pHead->next = pHead;
    pNew

    //output our linked list
    cout << "\n The linked list\n";

    //Create a pointer that goes through the list
    node* pCurrent;

    pCurrent = pHead;
    cout << "\n The current linked list: \n";
    cout << pHead-> data << endl;
    cout << pHead->next->data << endl;






    return 0;
}