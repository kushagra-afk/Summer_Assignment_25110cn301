// ATM Simulation 
// pin & balance are pre-determined

#include <iostream>
#include <string>
using namespace std;

void atm() {
    // --- Account Data ---
    string correctPin = "1234";
    double balance = 10000.00;
    string pin;
    int attempts = 0;

    cout << "---- Welcome to the ATM ----" << endl;

    // --- PIN Verification ---
    while (attempts < 3) {
        cout << "Enter PIN: ";
        cin >> pin;
        attempts++;
        if (pin == correctPin) break;
        if (attempts < 3)
            cout << "Wrong PIN! " << (3 - attempts) << " attempt(s) left." << endl;
        else {
            cout << "Card blocked! Too many wrong attempts." << endl;
            return;
        }
    }

    cout << "PIN accepted! Welcome." << endl;

    // --- ATM Menu ---
    int choice;
    do {
        cout << "\n--- ATM Menu ---" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance: Rs. " << balance << endl;
                break;

            case 2: {
                double amount;
                cout << "Enter deposit amount: Rs. ";
                cin >> amount;
                if (amount <= 0)
                    cout << "Invalid amount!" << endl;
                else {
                    balance += amount;
                    cout << "Rs. " << amount << " deposited successfully." << endl;
                    cout << "New balance: Rs. " << balance << endl;
                }
                break;
            }

            case 3: {
                double amount;
                cout << "Enter withdrawal amount: Rs. ";
                cin >> amount;
                if (amount <= 0)
                    cout << "Invalid amount!" << endl;
                else if (amount > balance)
                    cout << "Insufficient balance!" << endl;
                else {
                    balance -= amount;
                    cout << "Rs. " << amount << " withdrawn successfully." << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;
                }
                break;
            }

            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);
}

int main() {
    atm();
    return 0;
}