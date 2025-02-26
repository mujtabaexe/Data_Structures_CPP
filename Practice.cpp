#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    float a = 5.5;
    int b(3);
    int c{2};
    float result;
    
    a = a + b;
    result = a - c;
    cout << result << endl;

    cout << "Type of c is: " << typeid(c).name() << endl;
    cout << "Type of result is: " << typeid(result).name() << endl;
    
    cout << (a > b) ? a : b;
    return 0;
}