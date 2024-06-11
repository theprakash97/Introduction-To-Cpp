#include <iostream>
using namespace std;

// Given the length and breadth of a rectanlge, write a program to find 
// whether the area of the rectangle is greater than its perimeter.
int main(){

    int length,breadth;
    cout << "enter length & breadth : " ;

    cin >> length >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if(area > perimeter){
        cout << "Area is greater than perimeter" << endl;
    }else{
        cout << "Area is small then perimeter" << endl;
    }

    return 0;

    // -- output -- // 
    // enter length & breadth : 3 5
    // Area is small then perimeter

    // enter length & breadth : 4 6
    // Area is greater than perimeter
}