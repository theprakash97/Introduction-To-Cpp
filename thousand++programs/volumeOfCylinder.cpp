#include <iostream>
using namespace std;

// wap for finding the volume of cylinder by taking radius 
// and height as input. 

int main(){
    int radius,height;
    cout << "enter radius and height : ";
    cin >> radius >> height;
    float pi = 3.14;
    float volume_of_cylinder = pi * radius * height;
    cout << "Volume of cylinder is : " << volume_of_cylinder << endl;
    // -- output -- // 
    // enter radius and height : 3 7
    // Volume of cylinder is : 65.94
    return 0;
}