#include <iostream>
using namespace std;

struct Employee
{
    int eID;
    char favChar;
    float salary;
};

typedef struct Student
{
    int sID;
    char favChar;
    float salary;
} st;

int main()
{

    struct Employee ahmad;
    ahmad.eID = 7;
    ahmad.favChar = 'a';
    ahmad.salary = 500000;

    st mujtaba;
    mujtaba.sID = 10;
    mujtaba.favChar = 'a';
    mujtaba.salary = ahmad.salary;

    cout <<"The value is: "<< ahmad.eID << endl;
    cout <<"The value is: "<< ahmad.favChar << endl;
    cout <<"The value is: "<< ahmad.salary << endl;

    cout <<"The value is: "<< mujtaba.sID << endl;
    cout <<"The value is: "<< mujtaba.favChar << endl;
    cout <<"The value is: "<< mujtaba.salary << endl;

    return 0;
}