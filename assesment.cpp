#include <iostream>
#include <ctime>

class BankAccount {
public:
    BankAccount() : accountBalance(60000) {
        // Set default values
        accountHolderName = "Rakesh Kharva";
        accountHolderAddress = "Mumbai";
        branchLocation = "Andheri";
        accountNumber = 5678;
    }

    void depositCash(int amount) {
        std::cout << "\nEnter the amount to be Deposited Rs." << amount << std::endl;
        accountBalance += amount;
        displayAccountInfo();
        std::cout << "\nThank you!\nPress any key to return to the Main Menu...";
        std::cin.ignore();
        std::cin.get();
    }

    void withdrawCash(int amount) {
        std::cout << "\nThe Names of Account Holders are: " << accountHolderName << std::endl;
        std::cout << "The Account Holders' address is: " << accountHolderAddress << std::endl;
        std::cout << "The Branch Location is: " << branchLocation << std::endl;
        std::cout << "Account number: " << accountNumber << std::endl;

        if (amount > accountBalance) {
            std::cout << "\nInsufficient Available Balance in your account.\nSorry!!\n";
        } else {
            accountBalance -= amount;
            std::cout << "\nWithdrawal successful!\n";
        }

        std::cout << "\nPress any key to continue...";
        std::cin.ignore();
        std::cin.get();
    }

    void checkBalance() {
        displayAccountInfo();
        std::cout << "\nPress any key to return to the Main Menu...";
        std::cin.ignore();
        std::cin.get();
    }

private:

    void displayAccountInfo() const {
        std::cout << "\nThe name of the Account Holder is: " << accountHolderName << std::endl;
        std::cout << "The Account Holder's address is: " << accountHolderAddress << std::endl;
        std::cout << "The Branch Location is: " << branchLocation << std::endl;
        std::cout << "Account number: " << accountNumber << std::endl;
        std::cout << "Present available balance: Rs. " << accountBalance << std::endl;
    }

    std::string accountHolderName;
    std::string accountHolderAddress;
    std::string branchLocation;
    int accountNumber;
    int accountBalance;
};

void displayWelcomeScreen() {
    std::cout << "Welcome to ATM\n\n";
    std::time_t now = std::time(0);
    std::cout << "Current date: " << std::ctime(&now);
    std::cout << "Press 1 and then press Enter to access your account via Pin Number\n";
    std::cout << "Or press 0 and press Enter to get help.\n";
}

bool validatePIN() {
    int pin;
    std::cout << "\nEnter your Acc Pin Access Number! [only one attempt is allowed]\n";
    std::cin >> pin;
    return pin == 12345;
}

void displayHelpScreen() {
    std::cout << "\nATM ACCOUNT STATUS\n";
    std::cout << "You must have the correct pin number to access this account. ";
    std::cout << "See your bank representative for assistance during bank opening hours.\n";
    std::cout << "Thanks for your choice today!!\n";
    std::cout << "Press any key to continue...\n";
    std::cin.ignore();
    std::cin.get();
}

int main() {
    BankAccount account;


    displayWelcomeScreen();

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        if (validatePIN()) {
            while (true) {
                std::cout << "\nEnter [1] To Deposit Cash\n";
                std::cout << "Enter [2] To Withdraw Cash\n";
                std::cout << "Enter [3] to Balance Inquiry\n";
                std::cout << "Enter [0] to exit ATM\n";
                std::cout << "\nPLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";

                std::cin >> choice;

                switch (choice) {
                    case 1: {
                        int depositAmount;
                        std::cout << "\nEnter the amount to deposit: Rs. ";
                        std::cin >> depositAmount;
                        account.depositCash(depositAmount);
                        break;
                    }
                    case 2: {
                        int withdrawalAmount;
                        std::cout << "\nEnter the amount to withdraw: Rs. ";
                        std::cin >> withdrawalAmount;
                        account.withdrawCash(withdrawalAmount);
                        break;
                    }
                    case 3:
                        account.checkBalance();
                        break;
                    case 0:
                        std::cout << "\nExiting ATM. Thank you!\n";
                        return 0;
                    default:
                        std::cout << "\nInvalid choice. Please try again.\n";
                }
            }
        } else {
            std::cout << "\nTHANK YOU\nYou had made your attempt which failed!!! ";
            std::cout << "No more attempts allowed!! Sorry!!\n";
            std::cout << "Press any key to continue...\n";
            std::cin.ignore();
            std::cin.get();
        }
    } else if (choice == 0) {
    	
        displayHelpScreen();
    } else {
        std::cout << "\nInvalid choice. Exiting...\n";
    }

    return 0;
}

