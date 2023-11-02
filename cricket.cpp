#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string playerName;
    int age;

public:
    void inputData() {
        std::cout << "Enter Cricketer's Name: ";
        std::cin.ignore(); // Clear the newline character in the input buffer.
        std::getline(std::cin, playerName);

        std::cout << "Enter Cricketer's Age: ";
        std::cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputData() {
        Cricketer::inputData(); // Call the base class's inputData method to get name and age.

        std::cout << "Enter Total Runs Scored: ";
        std::cin >> totalRuns;

        std::cout << "Enter Best Performance (in a single match): ";
        std::cin >> bestPerformance;

        // Calculate the average runs
        averageRuns = static_cast<double>(totalRuns) / bestPerformance;
    }

    void displayData() {
        std::cout << "Cricketer's Name: " << playerName << std::endl;
        std::cout << "Cricketer's Age: " << age << " years" << std::endl;
        std::cout << "Total Runs Scored: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance (in a single match): " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    std::cout << "\nBatsman's Details:\n";
    batsman.displayData();

    return 0;
}

