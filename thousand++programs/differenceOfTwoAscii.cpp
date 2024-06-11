#include <iostream>
using namespace std;

// wap to find the difference between ASCII of two 
// characters, take them as input.

int main(){
    
    char ch1,ch2;
    cout << "enter two characters : ";
    cin >> ch1 >> ch2;

    int x = (int)ch1;
    int y = (int)ch2;
 
    cout << "the difference : " << x - y << endl;

    // -- output -- // 
    // enter two characters : p s
    // the difference : -3
    // enter two characters : ! &
    // the difference : -5

    return 0;
}