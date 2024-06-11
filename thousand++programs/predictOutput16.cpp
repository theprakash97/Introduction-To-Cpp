#include <iostream>
using namespace std;

int main(){
    int a = 500, b,c;
    if(a >= 400)
        b = 300; // block of if_statement
        c = 200; // general statement, not belong to block of if_statement
        cout << "Value of b and c are respectively : " << b << " and " << c << '\n';
    return 0;

    // -- output -- // 
    // Value of b and c are respectively : 300 and 200
}