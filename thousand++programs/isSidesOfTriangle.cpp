#include <iostream>
using namespace std;

// wap to take 3 numbers input and tell if they can be the sides of triangle
/**
   hints : 
   a + b > c
   a + c > b
   c + b > a
 */
int main(){
    int a,b,c;
    cout << "enter a three number : ";
    cin >> a >> b >> c;
    if(a + b > c && a + c > a && c + b > a){
        cout << "triangle" << endl;
    }else{
        cout << "not triangle" << endl;
    }
    return 0;

    // -- output -- // 

    // enter a three number : 3 4 9
    // not triangle

    // enter a three number : 3 5 4
    // triangle
}