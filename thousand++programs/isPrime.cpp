#include <iostream>
using namespace std;

// wap to check if a number is prime ot not 

int main(){

    int n;
    cout << "enter a number : ";
    cin >> n;
    bool flag = true; // true means prime
    for(int i = 2; i <= n-1; i++){
        if(n % i == 0){ // 'i' is factor of 'n'
            flag = false; // false means composite
            break;
        }
    }
    if(flag){
        cout << n << " is prime" << endl;
    }else{
        cout << n << " is compositie" << endl;
    }
    return 0;

    // -- output -- // 
    // enter a number : 13
    // 13 is prime

    // enter a number : 25
    // 25 is compositie
}