#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.142;

int main() {
    double volume, radius, height;

    cout << "The program will tell you the volume of\n";
    cout << "a cylinder-shaped fuel tank.  \n";
    cout << "How tall is the tank? ";
    cin >> height;
    cout << "What is the radius of the tank? ";
    cin >> radius;

    volume = PI * pow(radius,2) * height;
    // setprecision w/o fixed = determines sf
    // setprecision w fixed = determines decimal places
    // fixed = forces fixed point notation, works tgt with setprecision
    // showpoint = always show decimal 
    cout << setprecision(2) << fixed << showpoint;
    cout << "The volume of the tank is " << volume;

    return 0;
}