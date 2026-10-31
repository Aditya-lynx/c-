#include <iostream>
using namespace std;
inline int product(int a, int b){
    // dont use below line with inline function
    //static int c=0; // this executes only once
    //c=c+1; // next time this function is run, the value of c will be retained
    return a*b;
    }
inline float moneyreceived(int currentmoney, float factor=1.09){
    return currentmoney*factor;
}
int main() {
    
    //int a, b;
//cout<<"Enter the value of a and b"<<endl;
//cin>>a>>b;
// cout<<"the product of a and b is "<<product(a, b)<<endl;
int money=100000;
cout<<"moneyreceived after 1 year at 1.9% interest is "<<moneyreceived(money)<<endl;
cout<<"for vip customers:moneyreceived after 1 year at 4.5% interest is "<<moneyreceived(money, 4.5)<<endl;

    return 0;
}