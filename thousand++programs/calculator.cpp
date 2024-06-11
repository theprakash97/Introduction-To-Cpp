#include <iostream>
using namespace std;

// wap to create a calculator that perform basic arithmetic operations (add,
// subtract, multiply and divide) using switch case and functions. The calculator
// should input two numbers and an operator from user.

int main(){
    int a,b;
    char sym;
    cout << "enter two number : ";
    cin >> a >> b;
    cout << "enter operator (+,-,*,/) : ";
    cin >> sym;
    switch(sym){
        case '+':
            cout << "Sum of " << a << " and " << b << " is : " << a + b << endl;
        break;
        case '-':
            cout << "Subtract of " << a << " and " << b << " is : " << a - b << endl;
        break;
        case '*':
            cout << "Multiply of " << a << " and " << b << " is : " << a * b << endl;
        break;
        case '/':
            cout << "Divide of " << a << " end " << b << " is : " << a / b << endl;
        break;
        default:
            cout << "Invalid Operator" << endl;
    }
    return 0;
}