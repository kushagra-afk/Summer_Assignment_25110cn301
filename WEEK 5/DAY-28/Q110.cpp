#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount {
public:
    BankAccount(string name, int accountNumber, double balance)
        : name_(move(name)), accountNumber_(accountNumber), balance_(balance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance_ += amount;
            cout << "Deposit successful. New balance: " << balance_ << "\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else if (amount > balance_) {
            cout << "Insufficient funds.\n";
        } else {
            balance_ -= amount;
            cout << "Withdrawal successful. New balance: " << balance_ << "\n";
        }
    }

    void display() const {
        cout << "Account holder: " << name_ << "\n";
        cout << "Account number: " << accountNumber_ << "\n";
        cout << "Balance: " << balance_ << "\n";
    }

    int getAccountNumber() const {
        return accountNumber_;
    }

private:
    string name_;
    int accountNumber_;
    double balance_;
};

int main() {
    vector<BankAccount> accounts;
    int nextAccountNumber = 1001;
    bool running = true;

    while (running) {
        cout << "\nBank Account System\n";
        cout << "1. Create account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display account\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                string name;
                cout << "Enter account holder name: ";
                getline(cin, name);
                double initialBalance;
                cout << "Enter initial balance: ";
                cin >> initialBalance;
                accounts.emplace_back(name, nextAccountNumber++, initialBalance);
                cout << "Account created successfully. Account number: " << accounts.back().getAccountNumber() << "\n";
                break;
            }
            case 2: {
                int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                double amount;
                cout << "Enter deposit amount: ";
                cin >> amount;
                bool found = false;
                for (auto &account : accounts) {
                    if (account.getAccountNumber() == accountNumber) {
                        account.deposit(amount);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Account not found.\n";
                }
                break;
            }
            case 3: {
                int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                double amount;
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                bool found = false;
                for (auto &account : accounts) {
                    if (account.getAccountNumber() == accountNumber) {
                        account.withdraw(amount);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Account not found.\n";
                }
                break;
            }
            case 4: {
                int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                bool found = false;
                for (const auto &account : accounts) {
                    if (account.getAccountNumber() == accountNumber) {
                        account.display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Account not found.\n";
                }
                break;
            }
            case 5:
                running = false;
                break;
            default:
                cout << "Invalid option.\n";
        }
    }

    cout << "Exiting bank account system.\n";
    return 0;
}
