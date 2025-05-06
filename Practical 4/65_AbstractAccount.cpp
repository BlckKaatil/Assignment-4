#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateInterest() = 0;
};

class SavingsAccount : public Account {
public:
    void calculateInterest() override {
        cout << "Savings interest calculated" << endl;
    }
};

class CurrentAccount : public Account {
public:
    void calculateInterest() override {
        cout << "No interest on current account" << endl;
    }
};

int main() {
    Account* a;
    SavingsAccount sa;
    CurrentAccount ca;

    a = &sa;
    a->calculateInterest();

    a = &ca;
    a->calculateInterest();

    return 0;
}
