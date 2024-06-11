#include <iostream>
using namespace std;

// wap to take year as input and find whether it is leap year or not
int main(){
    int year;
    cout << "enter a year : ";
    cin >> year;

    if(year % 400 == 0){
        cout << "Leap year" << endl;
    }else if(year % 100 == 0){
        cout << "not leap year" << endl;
    }else if(year % 4 == 0){
        cout << "#LEAP_YEAR" << endl;
    }else{
        cout << "no, not a #LEAPYEAR" << endl;
    }
    return 0;

    // -- output -- // 

    // enter a year : 2007
    // no, not a #LEAPYEAR
    // enter a year : 1996
    // #LEAP_YEAR
    // enter a year : 2024
    // #LEAP_YEAR
    // enter a year : 2000
    // Leap year
}