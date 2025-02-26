#include <iostream>
using namespace std;

int main()
{
    int num;
    int temp = 2;
    cout << "Enter the number you want to check if it is prime or not: ";
    cin >> num;

    if (num < 2)
    {
        cout << "It is not prime number";
    }
    while (temp < num)
    {
        if (num % temp == 0)
        {
            cout << "It is not a prime number";
            return 0;
        }
        temp++;
    }

    cout << "It is a Prime number";
    return 0;
}