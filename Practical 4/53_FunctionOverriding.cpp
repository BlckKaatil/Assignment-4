#include <iostream>
using namespace std;

class Employee {
public:
    virtual void showDetails() {
        cout << "Employee Details" << endl;
    }
};

class Manager : public Employee {
public:
    void showDetails() override {
        cout << "Manager Details" << endl;
    }
};

class Worker : public Employee {
public:
    void showDetails() override {
        cout << "Worker Details" << endl;
    }
};

int main() {
    Employee* e1;
    Manager m;
    Worker w;

    e1 = &m;
    e1->showDetails();

    e1 = &w;
    e1->showDetails();

    return 0;
}
