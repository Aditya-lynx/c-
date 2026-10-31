#include<iostream>
using namespace std;    
int c=45;
int main()
{

// ************ Built in data types in C++ ***************

    //int a , b , c ;
    //cout<<"enter the value of a :"<<endl;
    //cin>>a;
    //cout<<"enter the value of b :"<<endl;
    //cin>>b;
    //c = a + b;
    //cout<<"the sum is "<<c<<endl;
//cout<<"the global c is "<<::c<<endl;5

// ************ Float, double and long double literals in C++ ***************


//float d=34.4f;
//long double e = 34.4L;
//cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
//cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
//cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl; 
//cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;    
//cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;  

//cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;



// ******** Reference variable *****

//float x = 455;
//float &y = x; // y is reference variable to x
//cout<<x<<endl;
//cout<<y<<endl;  


//********* Type Casting  ********/
int a = 45;
float b = 45.46;
cout<<"the value of a is "<<(float)a<<endl;
cout<<"the value of b is "<<(float)b<<endl;

cout<<"the expression is "<<a + b<<endl;
cout<<"the expression is "<<a + (int)b<<endl;
cout<<"the expression is "<<a + int(b)<<endl;       



    return 0;
}    