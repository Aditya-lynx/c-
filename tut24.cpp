// STATIC DATA MEMBERS & METHODS 

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;


    public:
    void setData(void) 
    {
        cout<<"enter the id "<<endl;
        cin>>id;
        count++;    

}
void getData(void) 
{
    cout<<"the id of this employee is "<<id<<" and this is employee number "<<count<<endl;
}
};

int employee :: count; // default value is 0


int main() 
{
    employee harry, rohan, lovish;

    harry.setData();
    harry.getData();
    rohan.setData();
    rohan.getData();    
    lovish.setData();
    lovish.getData();   
    
    return 0;
}