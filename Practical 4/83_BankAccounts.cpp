#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
public:
    virtual void displayBalance() = 0;
    virtual void deposit(float amount) = 0;
    virtual void withdraw(float amount) = 0;
};

class SavingsAccount : public BankAccount {
private:
    float balance;

public:
    SavingsAccount(float initialBalance) : balance(initialBalance) {}

    void displayBalance() override {
        cout << "Savings Account Balance: " << balance << endl;
    }

    void deposit(float amount) override {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) override {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
    }
};

class CurrentAccount : public BankAccount {
private:
    float balance;

public:
    CurrentAccount(float initialBalance) : balance(initialBalance) {}

    void displayBalance() override {
        cout << "Current Account Balance: " << balance << endl;
    }

    void deposit(float amount) override {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) override {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
    }
};

int main() {
    vector<BankAccount*> accounts;
    SavingsAccount sa(1000);
    CurrentAccount ca(2000);
    accounts.push_back(&sa);
    accounts.push_back(&ca);

    int choice;
    do {
        cout << "1. Display Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            for (auto account : accounts) {
                account->displayBalance();
            }
        } else if (choice == 2) {
            float amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            for (auto account : accounts) {
                account->deposit(amount);
            }
        } else if (choice == 3) {
            float amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            for (auto account : accounts) {
                account->withdraw(amount);
            }
        }

    } while (choice != 4);

    return 0;
}
