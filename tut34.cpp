// COPY CONSTRUCTOR

#include <iostream>
using namespace std;

class Number
{
    int a;


public:
    Number()
    {
        a = 10;
    }
    Number(int num)
    {
        a = num;
    }
    // WHEN NO COPY CONSTRUCTOR S FOUND,COMPOLER SUPPLIES ITS OWN CONSTRUCTOR
    Number(Number &obj)
    {
        cout << "copy constructor called";
        a = obj.a;
    }

    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(46),z2;
    x.display();
    y.display();
    z.display();

    Number z1(x); // COPY CONSTRUCTOR INVOKED
    z1.display();

    z2 = z; // copy constructor not callled

    Number z3 = z; // copy constructor invoked

    return 0;
}