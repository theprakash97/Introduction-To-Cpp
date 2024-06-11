#include <iostream>
using namespace std;

int main(){
    
    // implicit type casting 
    int  x = 7;
    float res = x + 2.3;
    cout << res << endl; // 9.3

    // explicit type casting 
    float m = 7.3;
    int numVl = (int)m;
    cout << numVl << endl; // 7
    
    return 0;
}