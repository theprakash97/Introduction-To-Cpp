#include <iostream>
using namespace std;

// wap to print the factorials of first 'n' numbers

// n! = 1*2*3*....n
// 5! = 1*2*3*4*5 
//    = 4! * 5
// n! = (n-1)! * n

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }

    cout << "Factorial of " << n << " is : " << fact << endl;

    return 0;

    // -- output -- // 

    // enter a number : 5
    // Factorial of 5 is : 120
    
}