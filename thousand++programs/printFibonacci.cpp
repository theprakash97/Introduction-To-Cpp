#include <iostream>
using namespace std;

// wap to print the fibonacci number 

// fibanacci is : Fibonacci sequence is a series where the next term is the sum of 
// the previous two terms. The first two terms of the Fibonacci sequence is 0 followed by 1.

// 0 1 1 2 3 5 8 13 21 34 55 89 .....

int main(){

    int n, t1 = 0, t2 = 1, next_term = 0;
    cout << "enter  the number of terms : ";
    cin >> n;

    cout << "Fibonacci Series : ";
    for(int i = 1; i <= n; i++){
        // prints the first two terms
        if(i == 1){
            cout << t1 << ", ";
            continue;
        }
        if(i == 2){
            cout << t2 << ", ";
            continue;
        }
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;

        cout << next_term << ", ";
    }
    cout << '\n';
    return 0;

    // -- output -- // 
    // enter  the number of terms : 10
    // Fibonacci Series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
}



