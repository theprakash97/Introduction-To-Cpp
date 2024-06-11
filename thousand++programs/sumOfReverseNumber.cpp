#include <iostream>
using namespace std;

// wap to print the sum of given number and its reverse

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

    // get reverse digit 
    int n =  reverse_digits(num);
    int sum = 0;
    while(n > 0){ // sum of digits logic 
        int last_digit;
        last_digit = n % 10;
        sum += last_digit;
        n = n / 10;
    }
    cout << "Sum is : " << sum << endl;
    return 0;

    // -- output -- // 

    // enter a number : 512
    // Sum is : 8

    // enter a number : 779
    // Sum is : 23
}