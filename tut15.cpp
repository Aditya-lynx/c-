#include <iostream>
using namespace std;
   // formal parameters are the variables that are used in the function definition and are used to receive the values passed by the actual parameters when the function is called.
int sum(int, int, int); // function prototype or declaration
    void g(); // function prototype or declaration
int sum(int a, int b , int c) { // function definition
    return a + b + c;
} 

int main() { 
    int num1, num2, num3;
    cout <<"enter first number :" << endl;
    cin >> num1;
    cout <<"enter second number :" << endl;
    cin >> num2;
    cout <<"enter third number :" << endl;
    cin >> num3;
    cout<<"the sum is " << sum(num1, num2 , num3) << endl;
    g();
     return 0;
}
void g() { 

    cout << "hello world" << endl;
}