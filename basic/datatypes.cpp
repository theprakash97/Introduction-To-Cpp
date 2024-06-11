#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(){

    // *** PRIMITIVE DATA TYPES *** // 

    int user_age = 28;
    long timestamp_milisecond = 349485858857474789;
    float user_height = 5.6;
    double stock_price = 79.313333;
    char gender = 'f';
    wchar_t first_latter = 'p';
    bool is_married = false;
    NULL;

    cout << typeid(user_age).name() << endl; // i
    cout << typeid(timestamp_milisecond).name() << endl; // l
    cout << typeid(user_height).name() << endl; // f
    cout << typeid(stock_price).name() << endl; // d
    cout << typeid(gender).name() << endl; // c
    cout << typeid(first_latter).name() << endl; // w
    cout << typeid(is_married).name() << endl; // b

    // *** DERIVED DATA TYPES *** // 
       // Function
       // Array
       // Pointer
       // Reference 

    // ***  ABSTRACT OR USER-DEFIEND DATA TYPES ***//
       // Class
       // Structure
       // Union
       // Enumeration 
       // Typedef 

    return 0;
}