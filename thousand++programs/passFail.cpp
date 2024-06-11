#include <iostream>
using namespace std;

// given the marks of the student. if the marks are greater than 33
// print the result as pass otherwise fail without using if-else statement.
int main(){
    int mark,pass;
    pass = 33;
    cout << "enter a mark : ";
    cin >> mark;
    string result_value;
    result_value = mark > pass ? "PASS" : "FAIL";
    cout << result_value << endl;
    return 0;
    
    // -- output -- // 
    // enter a mark : 23
    // FAIL

    // enter a mark : 59
    // PASS
}