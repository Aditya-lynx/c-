// DESTRUCTOR

#include <iostream>
using namespace std;

// Constructor never takes an argument nor does it return any value
int objectCount = 0;

class num
{
public:
    num()
    {
        objectCount++;
        cout << "this is the time when constructor is called for object number " << objectCount << endl;
    }

    ~num()
    {
        cout << "this is the time when my destructor is called for object number " << objectCount << endl;
        objectCount--;
    }
};

int main()
{

    cout << "we are inside our main function" << endl;
    cout << "creating first object n1" << endl;
    num n1;
    {
        cout << "entering this block" << endl;
        cout << "creating two more objects " << endl;
        num n2, n3;

        cout << "exiting the block" << endl;
    }
    cout << "back to main" << endl;
    return 0;
}
