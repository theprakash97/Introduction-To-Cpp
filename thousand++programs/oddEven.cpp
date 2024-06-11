#include <iostream>
using namespace std;

// take positive integer input and tell if it is even or odd 
int main(){
    cout << "enter a number : ";
    int n;
    cin >> n;
    if(n > 0){
        // positive
        if(n % 2 == 0){
            cout << n << " is #even number" << endl;
        }else{
            cout << n << " is #odd number" << endl; 
        }
    }else{
        // negative
        cout << n << " is negative number" << endl;
    }

    // -- output -- // 
    // enter a number : 53
    // 53 is #odd number
    // enter a number : 14
    // 14 is #even number

    return 0;
    
}