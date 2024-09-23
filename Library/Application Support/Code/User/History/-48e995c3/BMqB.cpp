// Example of COMPILE TIME POLYMORPHISM IS :- 
// 1) CONSTRUCTOR OVERLOADING - It means creating two constructors in a class and calling them through main function. One constructor will be PARAMETERISED and another will be NON-PARAMETERISED. If in main we make an object which is without parameter, Then the constructor without PARAMETER will be called. And if in main we make an object which is with parameter, Then the constructor with PARAMETER will be called

// Hence it is an example of polymorphism that single object can be used to call multiple forms of constructors.

// Lets understand this with the help of an example :-


#include <iostream>
#include <string.h>
using namespace std;

class Student {
    public :
    string name;

    Student() {
        
    }
}

int main() {

}