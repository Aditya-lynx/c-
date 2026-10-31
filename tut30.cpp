// PARAMETERIZED AND DEFAULT CONSTRUCTORS

#include <iostream>
using namespace std;
    
class Complex {
int a,b;

public:
Complex (int, int); //CONSTRUCTOR ECLARATION

void printNumber()
{
    cout << "your number is " << a << "  + " << b <<  " i " << endl;
} 
};

Complex ::Complex(int x, int y) //PARAMETRIZED CONSTRUCTOR AS IT TAKES 2 PARAMETERS
{
a = x;
b = y; 
}

int main() {
    // IMPLICIT CALL
    Complex a(4, 6);
    a.printNumber();

    // EXLICIT CALL
    Complex b(8,9);
    b.printNumber();

    return 0;
}