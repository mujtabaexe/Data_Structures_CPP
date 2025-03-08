#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void insertAtHead(int data){

    Node * newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL && tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;

}



int main(){

}