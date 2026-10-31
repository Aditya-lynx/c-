#include <iostream>
using namespace std;

int sum(
    int a, int b){
    int c = a + b;
    return c;
    }

    //Call by reference using pointer
    void swappointer(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
// Call by reference using c++ reference variable
int & swapReferenceVar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main() {
    int a=4, b=5;
    cout<<"the sum of 4 and 5 is "<<sum(4, 5)<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    swapReferenceVar(a, b)=766;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    return 0;
}