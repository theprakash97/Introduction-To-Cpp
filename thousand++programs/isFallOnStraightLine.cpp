#include <iostream>
using namespace std;

// given three points(x1,y1), (x2,y2) and (x3,y3) write a program to check 
// if all the three points fall on one straight line or not.

int main(){
    int x1,y1,x2,y2,x3,y3;
    cout << "enter a point of x/y : ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int m1 = (y2 - y1)/(x2 - x1);
    int m2 = (y3 - y2)/(x3 - x2);
    if(m1 == m2){
        cout << "yes points are on the same-line" << endl;
    }else{
        cout << "points are not in the same-line" << endl;
    }
    return 0;
}