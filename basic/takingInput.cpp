#include <iostream>
#include <string>
using namespace std;

int main(){

    string user_firstname;
    int user_age;

    cout << "enter firstname : ";
    cin >> user_firstname;
    cout << "enter age : ";
    cin >> user_age;

    cout << "Hello " << user_firstname << '\n';
    cout << "Are you " << user_age << " age old?" << endl;
    // output
    // enter firstname : Sara 
    // enter age : 25
    // Hello Sara
    // Are you 25 age old?

    return 0;
}