#include <iostream>
using namespace std;

int main(){
    char x;
    int a = 2;
    x = (a > 0) ? 'a' : 's';
    cout << "Value of x : " << x << endl;
    cout << "Value of a : " << a << endl;
    return 0;

    // -- output -- // 
    // Value of x : a
    // Value of a : 2
}