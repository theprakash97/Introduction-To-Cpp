#include <iostream>
using namespace std;

// Given the radius of the circle predict whether numeric area of this circle
// is larger than the circumference or not. 

int main(){

    int radius;
    cout << "enter redius : ";
    cin >> radius;
    float pi = 3.141592;
    float circumference = 2 * pi * radius;
    float area = pi * radius * radius;

    if(area > circumference){
        cout << "Area is greater" << endl;
    }else if(area == circumference){
        cout << "area is #EQUAL to circumference" << endl;
    }else{
        cout << "Circumference is greater" << endl;
    }

    return 0;
}