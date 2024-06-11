#include <iostream>
using namespace std;

// wap to take positive integer input and tell if it is divisible by 5 and 3
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int orignal_n = n;
    if(orignal_n > 0){
        // positive integer
        if(orignal_n % 5 == 0 && orignal_n % 3 == 0){
            cout << n << " is divisible by 5 & 3" << endl;
        }else{
            cout << n << " not divisible by 5 & 3" << endl;
        }
    }else{
        // negative integer
        cout << n << " is negative integer number" << endl;
    }

    // -- output -- // 

    // enter a number : 23
    // 23 not divisible by 5 & 3

    // enter a number : 20
    // 20 not divisible by 5 & 3

    // enter a number : 15
    // 15 is divisible by 5 & 3

    return 0;
}