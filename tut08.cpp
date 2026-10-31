#include<iostream>
#include<iomanip>

using namespace std ;

int main ()
{
    //int a =45;
    //cout<<"the value of a was:"<<a<<endl;
    //a = 34;
    //cout<<"the value of a is :"<<a<<endl;
    
    //a = 49;
    //cout<<"the value of a was :"<<a;


    //int a = 3585484, b= 4543, c=754474;
    //cout<<"the value of a without set width is :"<<setw(4)<<a<<endl;
    //cout<<"the value of b without set width is :"<<setw(4)<<b<<endl;
    //cout<<"the value of c without set width is :"<<setw(4)<<c<<endl;   


    //cout<<"the value of a is :"<<a<<endl;
   // cout<<"the value of b is :"<<b<<endl;
    //cout<<"the value of c is :"<<c<<endl;   

    // operator precendence
    int a= 3, b=4;
    int c = ((((a*5)+b)-45)+876);
    cout<<"the value of c is :"<<c<<endl;
    return 0;
}