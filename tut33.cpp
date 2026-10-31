// DYNAMIC INITIALIZATION OF OBJECTS USING CONSTRUCTORS

#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal;
    int year;
    float interestrate;
    float returnValue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show();
};

Bankdeposit::Bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestrate);
    }
}
Bankdeposit::Bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = float(r) / 100;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestrate);
    }
}
void Bankdeposit::show()
{
    cout << endl
         << "principal amount was " << principal
         << " return value after " << year
         << " year is " << returnValue << endl;
}

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p y and r " << endl;
    cin >> p >> y >> r;

    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p y and R " << endl;
    cin >> p >> y >> R;

    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    // bd2 = Bankdeposit(p, y, r);
    // bd2.show();

    bd3 = Bankdeposit(p, y, r);
    bd3.show();

    return 0;
}