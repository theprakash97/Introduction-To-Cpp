#include <iostream>
using namespace std;

// display this AP ; 1 , 3 , 5 , 7 , 9 .. upto 'n' terms 
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n; 
    int a = 1;
    for(int i = 1; i <= n; i++){
        cout << a << " ";
        a = a + 2;
    }
    cout << '\n';

    return 0;

    // -- output -- // 
    // enter a number : 11
    // 1 3 5 7 9 11 13 15 17 19 21 
}