#include <iostream>
using namespace std;

int main(){
    int x = 3, y,z;
    y = x = 10;
    z = x < 10;
    cout << " x : " << x << " y : " << y << " z : " << z << endl;
    return 0;

    // -- output -- // 
    //  x : 10 y : 10 z : 0
}