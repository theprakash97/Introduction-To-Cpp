#include <iostream>
using namespace std;

// information 
void information(){
/*
    // #include :---
    This is a directive which is processed by pre-processor hence it is kown as 
    `preprocessor directive`. The #include directive tells to the compiler to 
    include an `iostream` header file library which stores the definition of the 
    'cin' & 'cout' standard input/output streams that we have used for input and output.

    syntax : #include <library_name>


    // Namespace :---
    A namespace in c++ is used to provide a scope or a region where we define 
    identifiers. It is used to avoid name conflicts between two identifers as only 
    unique names can be used as identifiers.

    This is used to import the entity of the `std` namespace into the current namespace of the program. The statement using namespace std is generally considered a bad practice. When we import a namespace we are essentially pulling all type definitions into the current scope.

    The `std` namespace is huge. The alternative to this statement is to specify the namespace to which the identifier belongs using the scope operator(::) each time we declare a type.

    syntax : using namespace std;

    // int main(){} :---
    The main() function is the entry point of every C++ program, no matter where the function is located in the program.

    // cout << "Hello World";
    std::cout is an instance of the std::ostream class, that is used to display output on the screen. Everything followed by the character << in double quotes ” ” is displayed on the output device. The semi-colon character at the end of the statement is used to indicate that the statement is ending there.

    // return 0 :---
    This statement is used to return a value from a function and indicates the finishing of a function. This statement is basically used in functions to return the results of the operations performed by a function.

    // Indentation :---



*/

}

// print hello world program in c++
void hello_world(){
    cout << "Hello world" << endl;
}

// 

int main(){
    // information();
    // hello_world();
    return 0; 
}