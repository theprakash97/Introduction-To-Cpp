#include <iostream>
using namespace std;

// wap to count the minimum number of notes in a given amount 

int main(){
    int n;
    cout << "enter the amount : ";
    cin >> n;
    int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0;
    int n50 = 0, n100 = 0, n200 = 0, n500 = 0;

    if(n >= 500){
        n500 = n/500;
        n -= (500*n500);
    }
    if(n >= 200){
        n200 = n/200;
        n -= (200*n200);
    }
    if(n >= 100){
        n100 = n/100;
        n -= (100*n100);
    }
    if(n >= 50){
        n50 = n/50;
        n -= (50*n50);
    }
    if(n >= 20){
        n20 = n/20;
        n -= (20*n20);
    }
    if(n >= 10){
        n10 = n/10;
        n -= (10*n10);
    }
    if(n >= 5){
        n5 = n/5;
      
        n -= (5*n5);
    }
    if(n >= 2){
        n2 = n/2;
        n -= (2*n2);
    }
    if(n >= 1){
        n1 = n/1;
        n -= (1*n1);
    }

    cout << "500/- : " << n500 << endl;
    cout << "200/- : " << n200 << endl;
    cout << "100/- : " << n100 << endl;
    cout << "50/-  : " << n50 << endl;
    cout << "20/-  : " << n20 << endl;
    cout << "10/-  : " << n10 << endl;
    cout << "5/-   : " << n5 << endl;
    cout << "2/-   : " << n2 << endl;
    cout << "1/-   : " << n1 << endl;
    return 0;
}