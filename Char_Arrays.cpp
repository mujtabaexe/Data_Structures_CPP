#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

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


    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
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

    return 0;
}
