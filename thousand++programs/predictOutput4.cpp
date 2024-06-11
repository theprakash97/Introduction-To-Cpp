#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "enter a first number : ";
    cin >> x;
    int y,m;
    cout << "enter second number and value for taking modulus : ";
    cin >> y >> m;
    int z = (x*y) % m;
    cout << "output is : " << z << endl;
    // -- output -- // 
    // enter a first number : 7
    // enter second number and value for taking modulus : 2 6
    // output is : 2
    return 0;
}