#include <iostream>
using namespace std;

// wap to print out all amstrong numbers between 1 and 500. if sum of cubes of 
// each digit of the number is equal to the number itself, then the number is called
// an amstrong number. for example ; 153 = (1*1*1) + (5*5*5) + (3*3*3)

int main(){
    for(int i = 1; i <= 500; i++){
        int x = i;
        int cub_sum = 0;
        while(x > 0){
            int ld = x%10;
            cub_sum += (ld*ld*ld);
            x /= 10;
        }
        if(i == cub_sum) cout << cub_sum << endl;
    }
    return 0;

    // -- output -- // 

    // 1
    // 153
    // 370
    // 371
    // 407
    
}