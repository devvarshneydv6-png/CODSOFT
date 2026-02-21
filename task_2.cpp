#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "===== Simple Calculator =====" << endl << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    cout << endl;

    if(op == '+') {
        cout << "Result: " << num1 << " + " << num2 
             << " = " << num1 + num2 << endl;
    }
    else if(op == '-') {
        cout << "Result: " << num1 << " - " << num2 
             << " = " << num1 - num2 << endl;
    }
    else if(op == '*') {
        cout << "Result: " << num1 << " * " << num2 
             << " = " << num1 * num2 << endl;
    }
    else if(op == '/') {
        if(num2 != 0) {
            cout << "Result: " << num1 << " / " << num2 
                 << " = " << num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else {
        cout << "Invalid operator entered." << endl;
    }

    cout << endl << "Program Finished." << endl;

    return 0;
}