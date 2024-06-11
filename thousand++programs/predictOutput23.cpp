#include <iostream>
using namespace std;

int main(){
    int i; 
    while(i = 10){
        cout << i << endl;
        i++;
        if(i == 4) break;
    }
    return 0;

    // -- output  -- /
    // infinite loop 
}