#include <iostream>
using namespace std;

// real thing
int main(){

    /*
        if(expression)
            // true
        else
            // false
    */

    if(3 + 2 % 5)
        cout << "This works" << endl;
    int a;
    if(a = 10)
        cout << "Even this works" << endl;
    if(-5)
        cout << "surprisingly even this work" << endl;
    if('a' > 19)
        cout << "EVEN [this work]" << '\n';
    else
        cout << "ohk!" << '\n';

    return 0;

    // -- output -- // 
    // This works
    // Even this works
    // surprisingly even this work
    // EVEN [this work]
}