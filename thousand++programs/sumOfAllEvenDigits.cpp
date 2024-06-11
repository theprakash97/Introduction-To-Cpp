#include <iostream>
using namespace std;

// wap to print sum of all the even digits of a given number 

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    cout << "Sum of all even digits is : " <<  sum << endl;
    return 0;

    // -- output -- // 
    
    // enter a number : 9
    // Sum of all even digits is : 20
}