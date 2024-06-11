#include <iostream>
using namespace std;

// wap to check whether a given character is a vowel or a consonant 
int main(){
    char sym;
    cout << "enter a character : ";
    cin >> sym;

    int ascii_vl = (int)sym;

    if(ascii_vl >= 97 && ascii_vl <= 122 || ascii_vl >= 65 && ascii_vl <= 90){
        if(sym == 'a' || sym == 'e' || sym == 'i' || sym == 'o' || sym == 'u'){
            cout << sym << " is #vowel" << endl;
        }else{
            cout << sym << " is #consonant" << endl;
        }
    }else{
        cout << "The character is not an alphabet\n";
    }

    // -- output -- // 
    // enter a character : e
    // e is #vowel

    // enter a character : p
    // p is #consonant

    // enter a character : o
    // o is #vowel

    // enter a character : 79
    // The character is not an alphabet

    return 0;
}