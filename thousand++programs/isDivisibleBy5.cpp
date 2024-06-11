#include <iostream>
using namespace std;

// wap to take positive integer input and tell if it is divisible by 5 or not
int main(){
    cout << "enter a number : ";
    int n;
    cin >> n;
    if(n>0){
        // positive number
        if(n % 5 == 0){
            cout << "Yes " << n << " is divisible by 5" << endl;
        }else{
            cout << "Not Divisible by 5" << endl;
        }
    }else{
        // negative number
        cout << n << " is negative number" << endl;
    }
    
    // -- output -- // 
    // enter a number : 16
    // Not Divisible by 5
    // enter a number : 35
    // Yes 35 is divisible by 5

    return 0;
}