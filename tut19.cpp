// FUNCTION OVERLOADING

#include <iostream>
using namespace std;
int sum(int a, int b) {
    cout<<"using the function with 2 arguments:"<<endl;
    return a + b;
}
int sum(int a, int b, int c) {
    cout<<"using the function with 3 arguments:"<<endl;
    return a + b + c;
}

int volume(double r, int h) {
    return 3.14 * r * r * h;
}
int volume(int a) {
    return a * a * a;
}
int volume(int l, int b, int h) {
    return l * b * h;
}
int main() {
    
    cout<<"the sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"the sum of 3, 4 and 5 is "<<sum(3,4,5)<<endl;
    cout<<"the volume of cuboid of dimensions 3, 4 and 5 is "<<volume(3,4,5)<<endl;
    cout<<"the volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 5 is "<<volume(3,5)<<endl;
    return 0;
}