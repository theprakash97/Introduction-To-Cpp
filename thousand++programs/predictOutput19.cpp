#include <iostream>
using namespace std;

int main(){
    int test = 0;
    cout << "first character " << '1' << endl;
    cout << "second character " << (test ? 3 : '1') << endl;
    return 0;

    // -- output -- // 
    // first character 1
    // second character 49
}