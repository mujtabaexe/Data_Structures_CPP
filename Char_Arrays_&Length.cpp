#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

// Finding length of array

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
    char name[10];
    cout << "Enter your name to store in char array: ";
    cin >> name;
    cout << name << endl;

    // Properly clear input buffer before getline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char a[10];
    cout << "Enter your name (Max 10 Characters): ";
    cin.getline(a, 10);
    cout << "Stored name is: " << a << endl;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Just remove leftover '\n'
    }

    char n[10];
    cout << "Enter 10 characters one by one: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }

    cout << "Stored characters: ";
    for (int i = 0; i < 10; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;

    cout << "The length of the char array is: " << getLength(name) << endl;

    char temp = 'z';
    char *p = &temp;
    cout <<"The value of temp is: "<< p << endl; //It will print the extra values that is remained in the memory
    
    char ch[5]="ahma"; // Last charachter of char array should always be null charachter
    cout << ch << endl;
    
    return 0;
}