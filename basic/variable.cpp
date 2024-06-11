#include <iostream>
#include <string>
using namespace std;

int main(){

    // *** variable *** //

    int user_age = 28;
    float user_height = 5.6;
    string user_name = "sofia_kal";
    bool is_married = false;
    char gender = 'f';

    // *** variable updation *** //

    // root level updation
    user_age = 30; 
    user_age += 2;  // is equivalent to -> user_age = user_age + 2
    cout << user_age << endl; // 32

    int get_user_age;
    // not root level updation, instead used another variable
    get_user_age = user_age; 
    cout << get_user_age << endl; // 32

    cout << endl; // blank line

    // *** Constant Variable *** // 

    // the value of const variable shouldn't be changed throughout the program
    const short BORN_YEAR = 1996;
    const int BORN_DATE = 20;




    return 0;
}