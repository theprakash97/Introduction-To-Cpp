#include <iostream>
using namespace std;

// wap to take integer as input and print half of the number
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    if(n > 0){
        // positive
        float half_vl = (float)n / 2;
        cout << "Half of " << n << " is : " << half_vl << endl;
    }else{
        // negative
        cout << n << " is negative number" << endl;
    }
    // -- output -- // 
    // enter a number : 5
    // Half of 5 is : 2.5
    // enter a number : 14
    // Half of 14 is : 7
    return 0;
}