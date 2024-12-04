#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double grade1, grade2, grade3, grade4;
    double cgpa;

    cout << "Enter your grade for the first subject: " << endl;
    cin >> grade1;

    cout << "Enter your grade for the second subject: " << endl;
    cin >> grade2;

    cout << "Enter your grade for the third subject: " << endl;
    cin >> grade3;

    cout << "Enter your grade for the fourth subject: " << endl;
    cin >> grade4;

    cgpa = (grade1 + grade2 + grade3 + grade4) / 4;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Your CGPA is: " << cgpa;

    return 0;
}