#include <iostream>
using namespace std;

// wap to input day number(1-7) and print day of week name using switch case
int main(){
    int n;
    cout << "enter week number : ";
    cin >> n;
    if(n >=1 && n <= 7){
        // valid week number
        switch(n){
            case 1: cout << "Monday" << endl;
            break;
            case 2: cout << "Tuesday" << endl;
            break;
            case 3: cout << "Wednesday" << endl;
            break;
            case 4: cout << "Thuresday" << endl;
            break;
            case 5: cout << "Friday" << endl;
            break;
            case 6: cout << "Saturday" << endl;
            break;
            case 7: cout << "Sunday" << endl;
            break;
            default :cout << "Invalid day" << endl;
        }
    }else{
        // invalid week number
        cout << "Invalid week number" << endl;
    }
    return 0;
}