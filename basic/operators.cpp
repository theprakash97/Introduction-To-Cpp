#include <iostream>
#include <string>
using namespace std;

int main(){

    // operators

    // *** arithmetic ***//
    cout << 2 + 9 << endl; // 11
    cout << 2 - 9 << endl; // -7
    cout << 2 * 9 << endl; // 18
    cout << 2 / 9 << endl; // 0
    cout << 9 / 2 << endl; // 4
    cout << 9 % 2 << endl; // 1
    cout << 2 % 9 << endl; // 2

    cout << endl;

    // *** special operator '/' ***//
    int a1 = 9;
    int b1 = 4;
    float m1 = 5;
    float n1 = 9;

    cout << a1 / b1 << endl;   // 2
    cout << m1 / n1 << endl;   // 0.555556
    cout << 5 / 9 << endl;   // 0
    cout << 5.0 / 9 << endl; // 0.555556
    cout << 5 / 9.0 << endl; // 0.555556
    cout << 5.0 / 9.0 << endl; // 0.555556

    cout << endl;

    // observe :---
    float s = 3;
    float t = 3.0;
    cout << s << " -> " << t << endl; // 3 -> 3
    cout << 3.0 << endl; // 3
    cout << (m1 + n1) << endl; // 14
    cout << (s == t) << endl; // 1 

    cout << endl;

    cout << endl;

    // *** special operator '%' *** // 
    /*
        Rules for an modulo(%) operations :---

        // a : is divend
        // b : is divisor

        if (a < b) ->  a % b   =  a
                   ->  a % -b  =  a
                   -> -a % b   = -a
                   -> -a % -b  = -a

        if(a > b)  ->  a % b   = remainder
                   ->  a % -b  = remainder
                   -> -a % b   = -remainder
                   -> -a % -b  = -remainder 
    */

    cout << (7%4) << endl;      // 3
    cout << (7%(-4)) << endl;   // 3
    cout << (-7%4) << endl;     // -3
    cout << (-7%-4) << endl;    // -3
    cout << (4%7) << endl;      // 4
    cout << (4%(-7)) << endl;   // 4
    cout << (-4%7) << endl;     // -4
    cout << (-4 % -7) << endl;  // -4


    cout << endl;

    // *** unary operators *** // 
    int current_score = 13,points = 5;
    cout << current_score++ << endl; // 13
    cout << current_score << endl; // 14
    cout << ++current_score << endl; // 15
    cout << current_score << endl; // 15
    cout << -(points) << endl; // -5
    points = -points;
    cout << -(points) << endl; // 5

    cout << endl;

    // *** all are the same meaning *** //

    int pen_price = 7;
    // pen_price = pen_price + 1;
    // pen_price += 1;
    ++pen_price;
    cout << "pen price : " << pen_price << endl;
    // output
    // pen price : 8

    cout << endl;

    // *** Relational operators *** //
    int a = 7;
    int b = 3;
    cout << (a < b) << endl;  // 0
    cout << (a <= b) << endl; // 0
    cout << (a > b) << endl;  // 1
    cout << (a >= b) << endl; // 1
    cout << (a == b) << endl; // 0
    cout << (a != b) << endl; // 1
    return 0;
}