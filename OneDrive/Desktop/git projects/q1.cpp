#include <iostream>
#include <iomanip>  // For setting decimal precision
using namespace std;

int main() {
    double num1, num2;

    // Taking two floating point numbers as input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Displaying results with 3 decimal places
    cout << fixed << setprecision(3);
    cout << "\n Floating Point Operations " << endl;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;

    // Casting both numbers to integers
    int intNum1 = static_cast<int>(num1);
    int intNum2 = static_cast<int>(num2);

    // Showing integer results
    cout << "\n Integer Operations (after casting) " << endl;
    cout << "Sum: " << intNum1 + intNum2 << endl;
    cout << "Difference: " << intNum1 - intNum2 << endl;
    cout << "Product: " << intNum1 * intNum2 << endl;
    if (intNum2 != 0)
        cout << "Quotient: " << intNum1 / intNum2 << endl;
    else
        cout << "Quotient: Undefined (division by zero)" << endl;

    /*
      Explanation:
      - Floating point numbers keep decimal precision (e.g., 3.75 + 2.25 = 6.000).
      - When we cast to int using static_cast<int>(), the decimal part is *truncated*
        (e.g., 3.75 becomes 3, 2.25 becomes 2).
      - As a result, integer operations lose precision and give different results.
        Example:
        3.75 + 2.25 = 6.000 (float)
        3 + 2 = 5 (int)
    */

    return 0;
}
