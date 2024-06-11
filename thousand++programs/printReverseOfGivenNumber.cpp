#include <iostream>
#include <string>
using namespace std;

// wap to print reverse of a given number 
/*
    Algorithm steps :---
    1. initialize reverse_num = 0
    2. The rightmost digit of num can be obtained by performing modulo by 10 (num % 10)
       Now, the rightmost digit obtained is added to the reversed number by shifting its digits one position to the left 
       > rev_num = rev_num*10 + num%10;
    3. Remove the last digit from num by dividing it by 10 
       > (num = num / 10) 

*/

int reverse_digits(int num){
    int reverse_num = 0;
    while(num > 0){
        reverse_num = reverse_num * 10 + num % 10;
        num = num / 10;
    }
    return reverse_num;
}
int main(){
    int num;
    cout << "enter a number : ";
    cin >> num;
    cout << "Reverse of num is " << reverse_digits(num) << '\n';
    return 0;
}

// -- output -- // 
// enter a number : 88478973
// Reverse of num is 37987488