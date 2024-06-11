#include <iostream>
using namespace std;

// Given an integer. print the absolute value of that integer.
int main(){
    cout << "enter a number : ";
    int n;
    cin >> n;
    
    int absolute_value;
    if(n > 0){
        // positive integer
        cout << "Absolute value of " << n << " is : " << n << endl;
    }else{
        // negative integer
        absolute_value = -(n);
        cout << "Absolute value of " << n << " is : " << absolute_value << endl;
    }

    // -- output -- // 
    // enter a number : -39
    // Absolute value of -39 is : 39
    
    return 0;
}