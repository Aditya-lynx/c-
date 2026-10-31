// RECURSION AND RECURSIVE FUNCTIONS

#include <iostream>
using namespace std;

//FIBONACCI SERIES
int fib(int n) {
    if (n <2) {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

// factorial of a number
int factorial(int n) {
    if (n<= 1 ) {
        return 1;
    }
        return n * factorial(n - 1);
    }

int main() {
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl;
cout<<"the term in fibonacci sequence at position "<<n<<" is "<<fib(n)<<endl;
    
    return 0;
}