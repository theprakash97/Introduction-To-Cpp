#include <iostream>
using namespace std;

// wap to print all the even numbers from 1 to 13
int main(){
    for(int i = 1; i <= 13; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
    cout << '\n';
    return 0;

    // -- output -- // 
    // 2 4 6 8 10 12 
    
}