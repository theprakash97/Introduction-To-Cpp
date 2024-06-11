#include <iostream>
using namespace std;

// wap to input month number and print the total number of days in month by using switch
int main(){
    int n;
    cout << "enter a month number : ";
    cin >> n;
    // this switch statement is not optimized 
    /*
    switch(n){
        case 1: 
            cout << "JAN : " << 31 << " DAYS" << endl;
        break;
        case 2:
            cout << "FEB : " << 28 << " DAYS" << endl;
        break;
        case 3: 
            cout << "MAR : " << 31 << " DAYS" << endl;
        break;
        case 4: 
            cout << "APR : " << 30 << " DYAS" << endl;
        break;
        case 5:
            cout << "MAY : " << 31 << " DAYS" << endl;
        break;
        case 6: 
            cout << "JUN : " << 30 << " DAYS" << endl;
        break;
        case 7:
            cout << "JUL : " << 31 << " DAYS" << endl;
        break;
        case 8:
            cout << "AUG : " << 31 << " DAYS" << endl;
        break;
        case 9:
            cout << "SEP : " << 30 << " DAYS" << endl;
        break;
        case 10:
            cout << "OCT : " << 31 << " DAYS" << endl;
        break;
        case 11:
            cout << "NOV : " << 30 << " DAYS" << endl;
        break;
        case 12:
            cout << "DEC : " << 31 << " DAYS" << endl;
        break;
        default : 
            cout << "Invalid Monthh Number" << endl;
    }
    */

    // optimized above the switch statement
    /*
       find the pattern : 
       1 3 5 7 8 10 12 -> 31 days 
       4 6 9 11 -> 30 days
    */
    switch((n <= 7 && n % 2 != 0) || (n >= 8 && n%2 == 0)){
        case 1:
        cout << "31 days" << endl;
    }
    switch(n == 4 || n == 6 || n == 9 || n == 11){
        case 1:
        cout << "30 days" << endl;
    }
    switch(n){
        case 2:
        cout << "28 days" << endl;
    }

    return 0;
}