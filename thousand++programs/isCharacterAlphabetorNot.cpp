#include <iostream>
using namespace std;

// wap to check whether a character is an alphabet or not 
/*
    A : 65
    Z : 90
    a : 97
    z : 122
*/
int main(){
    // get the character as input
    char sym;
    cout << "enter a character : ";
    cin >> sym;
    // find the ascii 
    int get_ascii = (int)sym;
    // alphabet logic 
    if((sym >= 65 && sym <= 90) || (sym >=97 && sym <= 122)){
        cout << sym << " is an alphabet" << endl;
    }else{
        cout << "Invalid character" << endl;
    }

    // -- output -- // 
    // enter a character : @
    // Invalid character

    // enter a character : h
    // h is an alphabet

    // enter a character : F
    // F is an alphabet

    return 0;
}