#include <iostream>

class Calculator {
public:
    Calculator(double num1, double num2) : operand1(num1), operand2(num2) {}

    double add() {
        return operand1 + operand2;
    }

    double subtract() {
        return operand1 - operand2;
    }

    double multiply() {
        return operand1 * operand2;
    }

    double divide() {
        if (operand2 == 0) {
            std::cout << "Error: Division by zero." << std::endl;
            return 0; // You can handle this error as needed.
        }
        return operand1 / operand2;
    }

private:
    double operand1;
    double operand2;
};

int main() {
    double num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    Calculator calculator(num1, num2);

    std::cout << "Addition result: " << calculator.add() << std::endl;
    std::cout << "Subtraction result: " << calculator.subtract() << std::endl;
    std::cout << "Multiplication result: " << calculator.multiply() << std::endl;
    std::cout << "Division result: " << calculator.divide() << std::endl;

    return 0;
}

