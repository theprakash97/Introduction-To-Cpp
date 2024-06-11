#include <iostream>
using namespace std;

int main(){
    cout << "Hello World" << endl;
    cout << "I am Prakash Behera\nBackend Developer" << endl;
    cout << "Prakash" << 28 << (4 + 5) << endl; // Prakash289
    // make it separation
    cout << "Prakash" << " " << 28 << " " << (4 + 5) << endl;
    // variable
    int user_age = 28;
    float user_height = 5.6;
    cout << user_age << " -> " << user_height << endl;
    // constant 
    const char gender = 'm';
    cout << gender << endl;
    return 0;
}