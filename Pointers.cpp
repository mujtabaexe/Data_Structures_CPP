#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;

    cout << "The address of num1 is: " << &num1 << endl;

    int *p = &num1;
    cout << "The value stored in p is: " << *p << endl;

    cout << "The address stored in p is: " << p << endl;

    int num2 = 234;
    int *a = &num2;
    int b = *a;
    b++;
    // The value of num2 will not change and only the value of num2 will be transferred to b
    // using the pointer *a and if b++ is used so value of b will be changed to 6 but num2 will remain as it is
    cout << "The value of num2 is: " << *a << endl;
    cout << "The value of b is: " << b << endl;

    int num3 = 9;
    int *c = &num3;
    // *c++;
    *(c)++; // first btrackets is solved. c points to address then ++ will execute. The minimum value added is 4 bytes to the address.
    //  This will add 4 bytes to the address and the address wil point to the next address and value present on that address will be
    // stored in c and will point to its value using *. It occurs basically due to memory's approach from Bottom to Top approach
    cout << "The value of num3 is: " << *c << endl;
    // correct form is:
    // (*c)++;

    (*c) = (*c) * 2;
    cout << "The value of c after multiplying with 2 is: " << *c;

    // Copying a pointer
    int num4 = 7;
    int *d = &num4;
    cout << "The value of d is: " << *d << endl;
    int *e = d;
    cout << "The value of e is: " << *e << endl;
}
