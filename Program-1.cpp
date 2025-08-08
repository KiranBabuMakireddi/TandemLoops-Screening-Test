#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    // Constructor
    Calculator(double num1, double num2, string op) {
        a = num1;
        b = num2;
        operation = op;
    }

    // Function to perform calculation
    double calculate() {
        if (operation == "add") {
            return a + b;
        } 
        else if (operation == "sub") {
            return a - b;
        } 
        else if (operation == "mul") {
            return a * b;
        } 
        else if (operation == "div") {
            if (b != 0)
                return a / b;
            else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        } 
        else {
            cout << "Error: Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;
    string op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (add, sub, mul, div): ";
    cin >> op;

    Calculator calc(num1, num2, op);
    double result = calc.calculate();

    cout << "Result: " << result << endl;

    return 0;
}
