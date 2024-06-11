#include <iostream>
using namespace std;

// wap sqaure of given number
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    if(n > 0){
        // positive
        cout << "Square of " << n << " is : " << n * n << endl;
    }else{
        // engative
        cout << "Number is negative" << endl;
    }
    // --- output --- // 
    // enter a number : 7
    // Square of 7 is : 49
    return 0;
}