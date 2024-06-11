#include <iostream>
using namespace std;

int main(){
    
    int num;
    int p = 5,q = 10;
    p += q -= p;
    cout << p << " " << q << endl;

    // -- output -- // 
    // 10 5
    return 0;
}