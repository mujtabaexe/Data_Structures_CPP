#include <iostream>
using namespace std;

int addition(int num1, int num2)
{
    int result;
    result = num1 + num2;
    return result;
}

void display(){
    cout<< addition(35, 15);
}

int main()
{

    int num1 = 10;
    int num2 = 20;

    int ans = addition(num1, num2);
    cout << ans << endl;

    display();
}

