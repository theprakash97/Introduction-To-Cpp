#include <iostream>
using namespace std;

int main(){
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    cout << x << endl; // 30
    return 0;
}