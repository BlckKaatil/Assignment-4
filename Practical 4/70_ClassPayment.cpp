#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0;
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing Credit Card Payment" << endl;
    }
};

class DebitCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing Debit Card Payment" << endl;
    }
};

int main() {
    Payment* payment;
    CreditCardPayment creditCard;
    DebitCardPayment debitCard;

    payment = &creditCard;
    payment->processPayment();

    payment = &debitCard;
    payment->processPayment();

    return 0;
}
