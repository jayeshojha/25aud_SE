#include <iostream>
#include <string>


class Students {
protected:
    int rollNumber;

public:
    Students(int roll) : rollNumber(roll) {}
};


class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    Test(int roll, int marks1, int marks2) : Students(roll), subject1Marks(marks1), subject2Marks(marks2) {}
};


class Result : public Test {
public:
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2) {}

    void displayResult() {
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks in Subject 1: " << subject1Marks << std::endl;
        std::cout << "Marks in Subject 2: " << subject2Marks << std::endl;
        std::cout << "Total Marks: " << subject1Marks + subject2Marks << std::endl;
    }
};

int main() {
    Result studentResult(101, 85, 92);
    studentResult.displayResult();

    return 0;
}

