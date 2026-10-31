// INHERITANCE SYNTAX

#include <iostream>
using namespace std;

// BASE CLASS
class Employee
{
public:
    int id;

    float salary;

    Employee(int Inpid)
    {
        id = Inpid;
        salary = 34.0;
    }
    Employee() {}
};

// DERIVED CLASS
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
class members/methods/etc..
}
*/

// Creating a Programmer class derived from Base class

class Programmer : public Employee
{
public:
    Programmer(int Inpid)
    {
        id = Inpid;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(1);
    cout << skillf.languagecode << endl;
    cout << skillf.id << endl;
    skillf.getdata();
    return 0;
}