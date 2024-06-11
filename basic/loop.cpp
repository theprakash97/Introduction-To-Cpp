#include <iostream>
using namespace std;

// *** for loop *** // 
void for_loop(){

    // variation 1 :
    for(int i = 0; i <= 5; i++){
        cout << i << " : hello prakash" << endl;
    }

    cout << endl;

    // variation 2 : 
    int i = 0;
    for(;i <= 5;){
        cout << i << " : hello rami" << endl;
        i++;
    }

    cout << endl;

    // variation 3 : 
    int j = 0;
    for(;;){
        if(j == 6){
            break;
        }
        cout << j << " : hy prakash!" << endl;
        j++;
    }

}

// *** while loop *** // 

// -- entry point of program -- // 
int main(){
    for_loop();
    return 0;
}