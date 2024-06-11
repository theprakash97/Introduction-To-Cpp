#include <iostream>
using namespace std;

// wap to print the factorial of a given number 'n'
// 5! = 5 * 4 * 3 * 2 * 1
// n! = n * n-1 * n-2 * n-3....

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    cout << "Factorial of " << n << " is : " << product << endl;
    return 0;

    // -- output -- // 
    // enter a number : 5
    // Factorial of 5 is : 120
}