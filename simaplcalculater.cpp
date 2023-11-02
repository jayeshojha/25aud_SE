#include <iostream>

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            std::cout << "Error: Division by zero." << std::endl;
            return 0; // You can handle this error as needed.
        }
        return a / b;
    }
};

int main() {
    Calculator calculator;

    double num1, num2;
    char operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+':
            std::cout << "Result: " << calculator.add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << calculator.subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << calculator.multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << calculator.divide(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
    }

    return 0;
}

