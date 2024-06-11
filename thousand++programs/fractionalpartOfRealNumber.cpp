#include <iostream>
using namespace std;

// wap to take float input and print the fractional part of the real number
int main(){

    float n;
    cout << "enter a number : ";
    cin >> n;
    int half_int;
    half_int = (int)n;

    // if 'half_int' is negative logic 
    if(half_int < 0){
        half_int = half_int - 1;
    }
    float float_vl = (float)half_int;
    float fraction_part = n - float_vl;
    cout << fraction_part << endl;

    // -- output -- // 
    // enter a number : -1.3
    // 0.7
    return 0;
}