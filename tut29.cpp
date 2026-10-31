// CONSTRUCTORS IN C++

#include <iostream>
using namespace std;

class Complex{

    int a;
    int b;

    public:

    Complex (void);

    void printNumber()
        {
            cout << "your number is " << a << " + " << b << " i " << endl;
        }
    
};

Complex :: Complex(void){
    a=10;
    b=03;
    cout<<"hello world"<<endl;
}
    
int main() {
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    
    return 0;
}