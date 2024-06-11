#include <iostream>
using namespace std;

/*
    Take two integers input, 'a' & 'b', if a > b, then find the remainder 
    when 'a' is divided by 'b'.

    hints :=

    divisor{dividend}quotient
           ---------------------
           remainder

    quotient = divisor / dividend
    dividend  = divisor * quotient + remainder
    remainder = dividend - (divisor * quotient)

    a{b}q
     ------
     r
     
    where ; 
    a is dividend
    b is divisor
    q is quotient
    r is remainder 


*/
int main(){

    int a,b;
    cout << "enter a dividend : ";
    cin >> a;
    cout << "enter divisor : ";
    cin >> b;

    if(a > b){
        // a is dividend
        // b is divisor
        int q = a/b; // q is quotient
        int r = a - (b * q);
        cout << "Remainder is : " << r << endl;
    }else{
        cout << a << " <- " << " is too small" << endl;
    }
    // output
    // enter a dividend : 13
    // enter divisor : 5
    // Remainder is : 3
    
    return 0;
}