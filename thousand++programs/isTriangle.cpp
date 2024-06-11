#include <iostream>
using namespace std;

// wap to input sides of a triangle and check whether a triangle is equilateral, 
// scalene or isosceles triangle.

int main(){

    int a,b,c;
    cout << "enter sides of triangle : ";
    cin >> a >> b >> c;
    if(a == b && a == c){
        cout << "Triangle is equilateral" << endl;
    }else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
        cout << "Triangle is isosceles" << endl;
    }else{
        cout << "Trianle is scalene" << endl;
    }
    return 0;
}