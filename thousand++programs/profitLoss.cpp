#include <iostream>
using namespace std;

// if cost price and selling price of an item is input through the keyboard,
// write a program to determine whether the seller has made profit or incurred loss. Also
// determine how much profit he made or loss he incurred.
/*
    hints : 
    profit = sp - cp (cp < sp)
    loss   = cp - sp (cp > sp)
*/
int main(){

    int cost_price, selling_price;
    cout << "enter cost price : ";
    cin >> cost_price;
    cout << "enter selling price : ";
    cin >> selling_price;
    if(cost_price < selling_price){
        // profit
        cout << "PROFIT : " << (selling_price - cost_price) << endl;
    }else if(cost_price == selling_price){
        // loss
        cout << "NO PROFIT/LOSS" << endl;
    }else{
        // loss
        cout << "LOSS : " << (cost_price - selling_price) << endl;
    }

    // -- output -- // 

    // enter cost price : 7
    // enter selling price : 15
    // PROFIT : 8

    // enter cost price : 7
    // enter selling price : 2
    // LOSS : 5

    return 0;
}