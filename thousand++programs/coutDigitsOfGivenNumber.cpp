#include <iostream>
using namespace std;

// wap to count the digits of a given number

int main(){

    int n;
    cout << "enter a number : " ;
    cin >> n;
    int count = 0;
    int original_copy = n;
    int extra_vl = n;
    while(n > 0){
        n = n / 10;
        count++;
    }
    if(extra_vl == 0){ // logic for if 'n' is zero 
        cout << "Total digit of " << original_copy << " is : " << 1 << endl;
    }else{
        cout << "Total digit of " << original_copy << " is : " << count << endl;
    }

    return 0;

    // -- output -- // 
    // enter a number : 88479
    // Total digit of 88479 is : 5

}