#include <iostream>
using namespace std;

// wap to print all the ASCII values of their equivalent characters of 26
// alphabets using a while loop.

int main(){
    int a = 65;
    int i = 1;
    while(i <= 26){
        cout << a << " : " << (char)a << endl;
        i++;a++;
    }
    return 0;

    // -- output -- // 
    /*

    65 : A
    66 : B
    67 : C
    68 : D
    69 : E
    70 : F
    71 : G
    72 : H
    73 : I
    74 : J
    75 : K
    76 : L
    77 : M
    78 : N
    79 : O
    80 : P
    81 : Q
    82 : R
    83 : S
    84 : T
    85 : U
    86 : V
    87 : W
    88 : X
    89 : Y
    90 : Z

    */
}