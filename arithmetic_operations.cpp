#include <iostream>

int main() {

    // tldr: similar to python

    // sequence of operations:
    //  1. parenthesis
    //  2. multiplication and divison
    //  3. addition and subtraction 

    int number = 100;

    // addition
    number = number + 2;
    number += 2;
    number++;

    // subtraction
    number = number - 2;
    number -= 2;
    number--;

    // multiplication
    number = number * 2;
    number *= 2;

    // division
    number = number / 2;
    number /= 2;

    // modulus operator: &

    std::cout << number;  // output: 100


    return 0;
}