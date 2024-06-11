#include <iostream>
using namespace std;

// wap to calculate percentage of 5 subjects
int main(){
    float physics = 69;
    float chemistry = 56;
    float math = 75;
    float english = 73;
    float biology = 47;
    float percentage = (physics + chemistry + math + english + biology) / 5;
    cout << "Percentage of 5 subjects is : " << percentage << endl;
    // output
    // Percentage of 5 subjects is : 64
    return 0;
}