#include <iostream>
#include <cstring>
using namespace std;

void reverse(char name[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{

    char name[11];
    cout << "Enter your name: ";
    cin.get(name, 11);

    cout << "Your name is: " << name << endl;

    int length = getLength(name);

    reverse(name, length);
    cout << "Your name in reverse is: " << name << endl;

    int a =  strlen(name)-1;
    cout<< a ;
    
}