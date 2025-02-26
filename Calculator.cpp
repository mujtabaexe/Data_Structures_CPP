#include <iostream>
using namespace std;

int main()
{
    while (true)
    {

        char opt;
        cout << "Enter the function you want to do +,-,*,/  or 0 to exit: ";
        cin >> opt;

        if (opt == '0')
        {
            cout << "Program ended!";
            return 0;
        }
        else if (opt != '+' && opt != '-' && opt != '*' && opt != '/')
        {
            cout << "Invalid Input!" << endl;
            continue;
        }

        float num1, num2;
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;

        float ans;

        if (opt == '+')
        {
            ans = num1 + num2;
            cout << "Answer is: " << ans << endl;
        }
        else if (opt == '-')
        {
            ans = num1 - num2;
            cout << "Answer is: " << ans << endl;
        }
        else if (opt == '*')
        {
            ans = num1 * num2;
            cout << "Answer is: " << ans << endl;
        }
        else if (opt == '/')
        {
            while (num2 == 0)
            {

                cout << "Division not allowed. Enter num2 again: ";
                cin >> num2;
            }
            ans = num1 / num2;
            cout << "Answer is: " << ans << endl;
        }
    }
}