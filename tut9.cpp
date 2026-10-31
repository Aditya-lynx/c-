#include<iostream>

using namespace std;

int main()
{
    //cout<<"this is tutorial 9"<<endl;
int age;
    cout<<"tell me your age "<<endl;
    cin>>age;


    // if else el else selection statement
    // if ((age<18)&&(age>0))
    // {
    //     cout<<"you are not eligible to vote"<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"you are a kid and you will be eligible to vote after 1 year"<<endl;
    // }
    //     else if (age<2)
    // {
    //     cout<<"you are not born yet"<<endl;
    // }
    // else 
    // {
    //     cout<<"you are eligible to vote"<<endl;
    // }
// switch case statement

switch (age )
{
    case 18:
    cout<<"you are 18"  <<endl;
   break;

    case 22:
    cout<<"you are 22"  <<endl;
    break;


case 30:
    cout<<"you are 30"  <<endl;
    break;

    default:
    cout<<"no special cases"<<endl;
    break;
}
       cout<<"done with switch case"<<endl;
    return 0;
}
