#include <iostream>

int main() {
    // int
    int a = 5;
    int b = 10;
    
    std::cout << "Sum of a and b: " << a + b << "\n"; // this works

    // double
    double price = 9.5;
    int persons = 4;

    std::cout << "Total price: " << price * persons << "\n" ;  // this works

    // char
    char grade = 'A';
    std::cout << "Your grade is " << grade << "\n" ;

    // bool 
    bool isStudent = true;
    
    // string
    std::string helloWorld = "Hello World!";
    std::cout << helloWorld;


    return 0;
}