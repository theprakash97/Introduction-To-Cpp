#include <iostream>
using namespace std;

// wap to display this GP ; 1 , 2 , 4 , 8 , 16 , 32 ,.. upto 'n' terms
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    for(int i = 1,a = 1; i <= n; i++){
        cout << a << " ";
        a *= 2;
    }
    cout << '\n';
    return 0;
    // -- otuput -- // 
    // enter a number : 9
    // 1 2 4 8 16 32 64 128 256 
}