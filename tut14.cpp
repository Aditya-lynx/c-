#include <iostream>
using namespace std;

typedef struct employee
{
    /*data*/
  
    int eid;
    char favchar;
    float salary;
}ep;
int main() {

    ep harry;
    ep rohan;
    ep shubham;
    harry.eid = 1;  
    harry.favchar = 'a';
    harry.salary = 1200000000;
    cout<<" the value of eid is "<<harry.eid<<endl;
    cout<<" the value of favchar is "<<harry.favchar<<endl;
    cout<<" the value of salary is "<<harry.salary<<endl;       
    
    return 0;
}