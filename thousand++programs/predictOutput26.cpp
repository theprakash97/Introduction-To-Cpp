#include <iostream>
using namespace std;

int main(){

    int t = 10;
    while( t /= 2){
        cout << "hello" << endl;
    }
    return 0;

    // -- output -- // 
    // hello
    // hello
    // hello
}