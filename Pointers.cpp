#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    cout << "The address of num is: " << &num << endl;

    int *p = &num;
    cout<<*p<< endl;
    
}
