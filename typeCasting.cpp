//  static_cast<data type to be converted to>(variable)

#include <iostream>
using namespace std;

int main() {
    int books;
    int months;
    double perMonth;

    cout << "How many books do you plan to read?: ";
    cin >> books;
    cout << "How many months will it take for you to read them?: ";
    cin >> months;
    perMonth = static_cast<double>(books) / months;  // type cast books to double before division
    cout << "That is " << perMonth << " books per month" << endl;

    return 0;
}