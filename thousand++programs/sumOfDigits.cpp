#include <iostream>
using namespace std;

// wap to print the sum of digits of a given number 
/*
    Algorithm steps :--
    1. Last digit (number % 10)
    2. sum += lastdigit
    3. n /= 10
*/

int main(){
    int n; 
    cout << "enter a number : ";
    cin >> n;
    int sum = 0;
    while(n > 0){
        int last_digit;
        last_digit = n % 10;
        sum += last_digit;
        n = n / 10;
    }
    cout << "Sum of last digit : " << sum << endl;
    return 0;

    // -- output -- // 
    // enter a number : 88478
    // Sum of last digit : 35
}