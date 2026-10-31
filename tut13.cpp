#include <iostream>
using namespace std;
int main() {
    int marks[]={23,24,25,26};
    int mathmarks[]={34,45,56,67};
    // cout<<"the marks are "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2]=67;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


    //cout<<"the math marks are "<<endl;
    //  cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;


    // for (int i=0; i<4; i++){
    //     cout<<marks[i]<<endl;
    // }




    // using while loop to print the array

    // int i =0;
    // while (i<4){
    //     cout<<mathmarks[i]<<endl;
    //     i++;
    // }


// using do while loop to print the array
    // int i=0;
    // do{
    //     cout<<marks[i]<<endl;
    //     i++;

    // }while(i<4);



    // pointer to an array
    int* p = marks;

    cout<<*p++<<endl;
    cout<<*p<<endl; 
    cout<<(*++p)<<endl;

    // cout<<"the value of marks[0] is "<<*p<<endl;
    // cout<<"the value of marks[1] is "<<(*p+1)<<endl;
    // cout<<"the value of marks[2] is "<<(*p+2)<<endl;
    // cout<<"the value of marks[3] is "<<(*p+3)<<endl;

    return 0;
}