#include <iostream>
using namespace std;

class Point {
    int x, y;
    public:
    Point(int a, int b){
        x = a;
        y = b;
    }

    void displayPoint(){
        cout<< "the point is ("<<x<<" , "<<y<<")"<<endl;
    }
    };

// CREATE A FUNCTION(HINT: MAKE IT A FRIEND FUNCTION) WHICH TAKES 2 POINT OBJECTS AND COMPUTES THE DISTANCE BETWEEN THOSE 2 POINTS

// USE THESE EXAMPLES TO CHECK YOUR CODE:
// DISTANCE BETWEEN (1,1) AND (1,1) IS 0
// DISTANCE BETWEEN (0,1) AND (0,6) IS 5
// DISTANCE BETWEEN (1,0) AND (70,0) IS 69
    
int main() {
    Point p(3,4); 
    p.displayPoint();

    Point q(1,3);
    q.displayPoint();

    return 0;
}