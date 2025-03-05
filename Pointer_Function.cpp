#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
}

void update(int *p)
{
    // p = p + 1; // It will update the address 
    *p = *p+1;
}

int main()
{
    int num = 10;
    int *p = &num;

    print(p);
    cout<<"Before: "<< *p << endl;

    update(p);
    cout<<"After: "<< *p << endl;
}