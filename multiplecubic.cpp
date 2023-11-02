#include <iostream>


inline double multiply(double a, double b) {
    return a * b;
}


inline double cube(double a) {
    return a * a * a;
}

int main() {
    double num1, num2;

    std::cout << "Enter two numbers for multiplication: ";
    std::cin >> num1 >> num2;

    
    double product = multiply(num1, num2);
    std::cout << "Multiplication result: " << product << std::endl;

    double num3;
    std::cout << "Enter a number for cubing: ";
    std::cin >> num3;

    double cubedValue = cube(num3);
    std::cout << "Cubic value: " << cubedValue << std::endl;

    return 0;
}

