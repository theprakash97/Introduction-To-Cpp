#include <iostream>
using namespace std;

// Calculating simple interest
int main(){
    float principal,rate,time,simple_interest;
    principal = 1000; // the amount borrowed from bank or invested
    rate = 5; // 5% rate of interest
    time = 2.5; // 2.5 year time 
    simple_interest = (principal * rate * time) / 100;
    cout << "Simple interest is : " << simple_interest << endl;
    // output
    // Simple interest is : 125
    return 0;
}
