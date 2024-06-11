#include <iostream>
using namespace std;

// wap to take 3 positive integers input and find the greatest of them
int main(){
    int a,b,c;
    cout << "enter 3 numbers by separating space : ";
    cin >> a >> b >> c;
    if(a > b){
        if(a > c){
        // 'a' is greatest
            cout << a << " is greatest integer number" << endl;
        }else{
            cout << c << " is greatest integer number" << endl;
        }

    }else{
        if(b > c){
        // 'b' is greatest
            cout << b << " is greatest integer number " << endl;
        }else{
            cout << c << " is greatest integer number " << endl;
        }

    }

    // -- output -- // 
    // enter 3 numbers by separating space : 23 11 46
    // 46 is greatest integer number

    // enter 3 numbers by separating space : 17 5 13
    // 17 is greatest integer number

    return 0;
}