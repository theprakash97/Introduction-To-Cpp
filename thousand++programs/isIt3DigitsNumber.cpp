#include <iostream>
using namespace std;

// wap to take positive integer input and tell if it is a three digit number or not
/*
    hints : 
    the samllest 3 digit number is : 100
    the highest 3 digit number is : 999

    so, any number lies on this range, that number is 3 digit number !
*/
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int original_n = n;
    if(n > 0){
        // positive integer
        if(n >= 100 && n <= 999){
            cout << "YES : " << n << " is 3 digit number" << endl;
        }else{
            cout << "NOT 3 Digit number" << endl;
        }
        
    }else{
        // negative integer
        cout << n << " : negative integer" << endl;
    }

    // -- output -- // 

    // enter a number : 884789
    // NOT 3 Digit number

    // enter a number : 103
    // YES : 103 is 3 digit number

    return 0;
}