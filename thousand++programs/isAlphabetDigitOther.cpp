#include <iostream>
using namespace std;

// write a c++ program to input any character and check whether it is the 
// alphabet,digit, or special character.

int main(){
    char sym;
    cout << "enter a character : ";
    cin >> sym;
    if(sym >= 'A' && sym <= 'Z' || sym >= 'a' && sym <= 'z'){
        cout << "Alphabet" << endl;
    }else if(sym >= '0' && sym <= '9'){
        cout << "Digits" << endl;
    }else{
        cout << "Character is a special character" << endl;
    }
    return 0;
}