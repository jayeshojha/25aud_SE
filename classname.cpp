#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void readData() {
        std::cout << "Enter Name: ";
        std::cin.ignore();
        std::getline(std::cin, name);

        std::cout << "Enter Age: ";
        std::cin >> age;
    }

    void writeData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
    }
};

class Student : public Person {
protected:
    double percentage;

public:
    Student(const std::string& n, int a, double p) : Person(n, a), percentage(p) {}

    void readData() {
        Person::readData(); // Call the base class's readData method to get name and age.

        std::cout << "Enter Percentage: ";
        std::cin >> percentage;
    }

    void writeData() {
        Person::writeData(); // Call the base class's writeData method to display name and age.
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person {
protected:
    double salary;

public:
    Teacher(const std::string& n, int a, double s) : Person(n, a), salary(s) {}

    void readData() {
        Person::readData(); // Call the base class's readData method to get name and age.

        std::cout << "Enter Salary: ";
        std::cin >> salary;
    }

    void writeData() {
        Person::writeData(); // Call the base class's writeData method to display name and age.
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Student student("Alice", 20, 85.5);
    Teacher teacher("Mr. Smith", 35, 50000.0);

    std::cout << "Student's Details:\n";
    student.writeData();

    std::cout << "\nTeacher's Details:\n";
    teacher.writeData();

    return 0;
}

