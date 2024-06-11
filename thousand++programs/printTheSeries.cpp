#include <iostream>
using namespace std;

// wap to print the sum of the series 
// 1-2+3-4+5-6+7-8+9-10+11-12+13... upto 'n'.

int main(){
    int num;
    cout << "enter a number : ";
    cin >> num;
    int sum = 0;
    for(int i = 0; i <= num; i++){
        if(i % 2 != 0){
            sum += i;
        }else{
            sum -= i;
        }
    }
    cout << "Sum of series is : " << sum << endl;
    return 0;

    // -- output -- // 
    
    // enter a number : 5
    // Sum of series is : 3

    // enter a number : 9
    // Sum of series is : 5
}