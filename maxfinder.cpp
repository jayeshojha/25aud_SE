#include <iostream>

class MaxFinder {
private:
    int num1;
    int num2;

public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    friend int findMax(const MaxFinder& mf);
};

int findMax(const MaxFinder& mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    MaxFinder maxFinder(a, b);

    int maximum = findMax(maxFinder);

    std::cout << "The maximum number is: " << maximum << std::endl;

    return 0;
}

