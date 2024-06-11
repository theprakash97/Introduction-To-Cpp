#include <iostream>
using namespace std;

// wap to print table of 19 
int main(){

    for(int i = 19,count = 1; i <= 190; i += 19){
        cout << 19 << " x " << count << " = " << (i) << endl;
        count++;
    }
    return 0;
    // -- output -- // 

    /*

    19 x 1 = 19
    19 x 2 = 38
    19 x 3 = 57
    19 x 4 = 76
    19 x 5 = 95
    19 x 6 = 114
    19 x 7 = 133
    19 x 8 = 152
    19 x 9 = 171
    19 x 10 = 190

    */
}