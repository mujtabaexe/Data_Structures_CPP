#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 5, 6, 3, 7};
    cout << "Address of first memory block is: " << arr << endl;
    cout << "Address of first memory block is: " << &arr[0] << endl;
    cout << "Address of third memory block is: " << &arr[2] << endl;
    cout << "Value of first memory block is: " << *arr << endl;
    cout << "Value of third memory block is: " << *(arr + 2) << endl;

    // (*arr) prints value and then 1 is added to it . All the following methods can be applied
    cout << "Adding 1 to 0th element: " << *arr + 1 << endl;
    cout << "Adding 1 to 0th element: " << (*arr) + 1 << endl;
    cout << "Adding 1 to 0th element: " << *(arr) + 1 << endl;

    int i = 1;
    cout << i[arr];

    int *ptr = arr;
    cout << "Size of whole array is: " << sizeof(ptr) << endl;
    cout << "Size of first element of array which is int is: " << sizeof(*ptr) << endl;

    int *a = &arr[0];
    cout << "Size of pointer is: " << sizeof(ptr) << endl;
    return 0;
}