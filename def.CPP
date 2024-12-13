#include <iostream>
using namespace std;

// Function to perform addition, subtraction, and multiplication
// Default values are provided for b and c
int calculate(int a, int b = 0, int c = 0) {
    return a + b + c;  // This can perform addition, subtraction, and multiplication
}

int main() {
    int num1, num2, num3;

    // Input numbers for the operations
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    // Perform addition, subtraction, and multiplication using default arguments
    // Addition: a + b + c
    cout << "Addition (num1 + num2 + num3): " << calculate(num1, num2, num3) << endl;

    // Subtraction: a - b - c
    cout << "Subtraction (num1 - num2 - num3): " << calculate(num1, -num2, -num3) << endl;

    // Multiplication: a * b * c (multiplying using default values 1 and 1)
    cout << "Multiplication (num1 * num2 * num3): " << calculate(num1, num2, num3) << endl;

    return 0;
}
