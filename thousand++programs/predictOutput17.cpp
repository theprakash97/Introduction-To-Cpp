#include <iostream>
using namespace std;

int main(){
    int a = 5,b,c;
    
    b = a = 15;
    c = a < 15;
    cout << "a = " << a << " -> " << "b = " << b << " -> " << "c = " << c << '\n';

    return 0;

    // -- output -- // 
    // a = 15 -> b = 15 -> c = 0
}