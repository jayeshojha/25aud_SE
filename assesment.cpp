#include <iostream>
#include <ctime>
using namespace std;

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
        cout << "\nEnter the amount to be Deposited Rs." << amount << std::endl;
        accountBalance += amount;
        displayAccountInfo();
        cout << "\nThank you!\nPress any key to return to the Main Menu...";
    }

    void withdrawCash(int amount) {
        cout << "\nThe Names of Account Holders are: " << accountHolderName << std::endl;
        cout << "The Account Holders' address is: " << accountHolderAddress << std::endl;
        cout << "The Branch Location is: " << branchLocation << std::endl;
        cout << "Account number: " << accountNumber << std::endl;

        if (amount > accountBalance) {
            cout << "\nInsufficient Available Balance in your account.\nSorry!!\n";
        } else {
            accountBalance -= amount;
            cout << "\nWithdrawal successful!\n";
        }

        cout << "\nPress any key to continue...";
    }

    void checkBalance() {
        displayAccountInfo();
        cout << "\nPress any key to return to the Main Menu...";
    }

private:

    void displayAccountInfo() const {
        cout << "\nThe name of the Account Holder is: " << accountHolderName << std::endl;
        cout << "The Account Holder's address is: " << accountHolderAddress << std::endl;
        cout << "The Branch Location is: " << branchLocation << std::endl;
        cout << "Account number: " << accountNumber << std::endl;
        cout << "Present available balance: Rs. " << accountBalance << std::endl;
    }

    string accountHolderName;
    string accountHolderAddress;
    string branchLocation;
    int accountNumber;
    int accountBalance;
};

void displayWelcomeScreen() {
    cout << "Welcome to ATM\n\n";
    time_t now = std::time(0);
    cout << "Current date: " << std::ctime(&now);
    cout << "Press 1 and then press Enter to access your account via Pin Number\n";
    cout << "Or press 0 and press Enter to get help.\n";
}

bool validatePIN() {
    int pin;
    cout << "\nEnter your Acc Pin Access Number! [only one attempt is allowed]\n";
    cin >> pin;
    return pin == 12345;
}

void displayHelpScreen() {
    cout << "\nATM ACCOUNT STATUS\n";
    cout << "You must have the correct pin number to access this account. ";
    cout << "See your bank representative for assistance during bank opening hours.\n";
    cout << "Thanks for your choice today!!\n";
    cout << "Press any key to continue...\n";
}

int main() {
    BankAccount account;


    displayWelcomeScreen();

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        if (validatePIN()) {
            while (true) {
                cout << "\nEnter [1] To Deposit Cash\n";
                cout << "Enter [2] To Withdraw Cash\n";
                cout << "Enter [3] to Balance Inquiry\n";
                cout << "Enter [0] to exit ATM\n";
                cout << "\nPLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";

                cin >> choice;

                switch (choice) {
                    case 1: {
                        int depositAmount;
                        cout << "\nEnter the amount to deposit: Rs. ";
                        cin >> depositAmount;
                        account.depositCash(depositAmount);
                        break;
                    }
                    case 2: {
                        int withdrawalAmount;
                        cout << "\nEnter the amount to withdraw: Rs. ";
                        cin >> withdrawalAmount;
                        account.withdrawCash(withdrawalAmount);
                        break;
                    }
                    case 3:
                        account.checkBalance();
                        break;
                    case 0:
                        cout << "\nExiting ATM. Thank you!\n";
                        return 0;
                    default:
                        cout << "\nInvalid choice. Please try again.\n";
                }
            }
        } else {
            cout << "\nTHANK YOU\nYou had made your attempt which failed!!! ";
            cout << "No more attempts allowed!! Sorry!!\n";
            cout << "Press any key to continue...\n";
        }
    } else if (choice == 0) {
    	
        displayHelpScreen();
    } else {
        cout << "\nInvalid choice. Exiting...\n";
    }

    return 0;
}

