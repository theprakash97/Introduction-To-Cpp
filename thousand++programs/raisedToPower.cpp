#include <iostream>
using namespace std;

// wap to take two number as input to find the value of one number 
// raised to the power of another.

int main(){

    int b,e;
    cout << "enter base & exponent number : ";
    cin >> b >> e;
    int power = 1;
    for(int i = 1 ; i <= e; i++){
        power = power * b;
    }
    cout << "Power of " << b << " is : " << power << endl;
    return 0;

    // -- output -- // 

    // enter base & exponent number : 3 3
    // Power of 3 is : 27

    // enter base & exponent number : 3 4
    // Power of 3 is : 81
    
    // enter base & exponent number : 4 3
    // Power of 4 is : 64

    // enter base & exponent number : 3 5
    // Power of 3 is : 243

    // enter base & exponent number : 3 0
    // Power of 3 is : 1

    // enter base & exponent number : -3 2
    // Power of -3 is : 9
}