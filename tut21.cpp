// CLASSES, PUBLIC AND PRIVATE ACCESS MODIFIERS

#include <iostream>
using namespace std;

class Employee {
    private:
    int a, b, c;
    public:
    int d, e;   
    void setData(int a1, int b1, int c1); // declaration
    void getData() {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
void Employee :: setData(int a1, int b1, int c1) { // definition
    a = a1;
    b = b1;
    c = c1;
}  

int main() {
    Employee harry;
    // harry.a=54; // this will throw an error because a is private
    harry.d = 34;
    harry.e = 45;
    harry.setData(1, 2, 3);
    harry.getData();


    return 0;
}