#include <iostream>
using namespace std;

void displayMenu() {
    cout << "\nBanking System Menu" << endl;
    cout << "1. Deposit Money" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void bankingSystem() {
    double balance = 0.0;
    int choice;
    
    while (true) {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1: {
                double deposit;
                cout << "Enter amount to deposit: ";
                cin >> deposit;
                if (deposit > 0) {
                    balance += deposit;
                    cout << "Deposit successful. New balance: " << balance << endl;
                } else {
                    cout << "Error: Deposit amount must be greater than zero." << endl;
                }
                break;
            }
            case 2: {
                double withdraw;
                cout << "Enter amount to withdraw: ";
                cin >> withdraw;
                if (withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    cout << "Withdrawal successful. New balance: " << balance << endl;
                } else if (withdraw > balance) {
                    cout << "Error: Insufficient balance." << endl;
                } else {
                    cout << "Error: Withdrawal amount must be greater than zero." << endl;
                }
                break;
            }
            case 3:
                cout << "Current balance: " << balance << endl;
                break;
            case 4:
                cout << "Exiting program. Thank you for using our banking system!" << endl;
                return;
            default:
                cout << "Error: Invalid choice. Please try again." << endl;
        }
    }
}

int main() {
    bankingSystem();
    return 0;
}
