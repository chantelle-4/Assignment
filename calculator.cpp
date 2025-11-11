#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\n===== RESULTS =====" << endl;

    cout << "Addition: " << num1 + num2 << endl;

    cout << "Subtraction: " << num1 - num2 << endl;

    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Division: Cannot divide by zero!" << endl;

    cout << "Power (num1 ^ num2): " << pow(num1, num2) << endl;

    if (num1 >= 0)
        cout << "Square root of the first number: " << sqrt(num1) << endl;
    else
        cout << "Square root of the first number: Not for negative numbers!" << endl;

    if (num2 >= 0)
        cout << "Square root of the second number: " << sqrt(num2) << endl;
    else
        cout << "Square root of the second number: Not for negative numbers!" << endl;

    if (num1 > 0)
        cout << "Logarithm (natural log) of the first number: " << log(num1) << endl;
    else
        cout << "Logarithm: Not for zero or negative numbers!" << endl;

    cout << "=============================" << endl;

    return 0;
}
