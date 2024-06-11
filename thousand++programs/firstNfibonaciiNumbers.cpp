#include <iostream>
using namespace std;

// wap to print first 'n' fibonacci numbers 
// 0 1 1 2 3 5 8 13 21 34 55 89.....

/*
    Algorithms steps :---
    1. sum = a + b
    2. a = b
    3. b = sum 
*/

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int a = 1, b = 1, sum = 0;
    for(int i = 1; i <= n; i++){
        cout << a << " ";
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << '\n';
    return 0;

    // -- output -- // 

    // enter a number : 8
    // 1 1 2 3 5 8 13 21
     
}