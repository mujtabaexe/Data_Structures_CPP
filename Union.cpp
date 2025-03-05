#include <iostream>
using namespace std;

// A union is a special data structure that allows multiple variables to share the same memory location. 
// It allocates memory equal to the size of the largest member, meaning only one member of union can hold a value at a time. 
// When a variable with a larger memory size is initialized after a smaller one (e.g., a float after a char),
// it will overwrite the value of the previous variable, as both share the same memory space.

union Money{
    int rice;
    char car;
    float pounds;
};

int main(){
    union Money m1;
    m1.rice = 10;
    m1.car = 'a';

    cout << m1.rice << endl;
    cout << m1.car << endl;

}