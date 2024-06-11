#include <iostream>
using namespace std;

// If the marks of A,B and C are input through the keyboard, write a program 
// to determine the student scoring least marks.

int main(){
    int a,b,c;
    cout << "enter marks : ";
    cin >> a >> b >> c;
    if(a <= b && a <= c){
        cout << a << " scored the least" << endl;
    }else if(b <= a && b <= c){
        cout << b << " scored the least" << endl;
    }else{
        cout << c << " scored the least" << endl;
    }
    return 0;
    // -- otuput -- // 
    // enter marks : 12 7 39
    // 7 scored the least
}