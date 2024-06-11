#include <iostream>
using namespace std;

// wap to take input percentage of a student and print the 
// grade according to marks
/*
    91 - 100 (Excellent)
    81 - 90  (very good)
    71 - 80  (good)
    61 - 70  (can do better)
    51 - 60  (average)
    40 - 50  (below average)
    < 40     (Fail)
*/
int main(){
    int percentage;
    cout << "enter a percentage : ";
    cin >> percentage;
    if(percentage >= 91 && percentage <= 100){
        cout << "Excellent" << endl;
    }else if(percentage >= 81 && percentage <= 90){
        cout << "Very good" << endl;
    }else if(percentage >= 71 && percentage <= 80){
        cout << "Good" << endl;
    }else if(percentage >= 61 && percentage <= 70){
        cout << "Can do better" << endl;
    }else if(percentage >= 51 && percentage <= 60){
        cout << "Average" << endl;
    }else if(percentage >= 40 && percentage <= 50){
        cout << "Below average" << endl;
    }else if (percentage < 40){
        cout << "Fail" << endl;
    }
    return 0;
}