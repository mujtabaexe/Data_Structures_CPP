#include <iostream>

using namespace std;

int top = -1;
int arr[10] = {};

void push(int value) {
 top++;
 arr[top] = value;
}

int pop() {
    int val = arr[top];
    top--;
    return val;
}
 


int main(int argc, char const *argv[])
{
    push(10);
    push(20);    
    push(30);    
    push(40);    
    push(50);    

    int v1 = pop();
    cout << v1 << endl;

    int v2 = pop();
    cout << v2 << endl;
    int v3 = pop();
    cout << v3 << endl;
    int v4 = pop();
    cout << v4 << endl;
    int v5 = pop();
    cout << v5 << endl;
    
    return 0;
}
