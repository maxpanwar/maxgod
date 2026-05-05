#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Input two numbers and an operator
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform the calculation based on the operator
    if (operation == '+') {
        cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (operation == '-') {
        cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (operation == '*') {
        cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}

