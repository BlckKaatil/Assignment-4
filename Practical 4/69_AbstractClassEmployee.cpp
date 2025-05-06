#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
    virtual void displayDetails() = 0;
};

class Manager : public Employee {
    int baseSalary;
public:
    Manager(int salary) : baseSalary(salary) {}
    void calculateSalary() override {
        cout << "Manager Salary: " << baseSalary + 5000 << endl;
    }
    void displayDetails() override {
        cout << "I am a Manager" << endl;
    }
};

class Engineer : public Employee {
    int baseSalary;
public:
    Engineer(int salary) : baseSalary(salary) {}
    void calculateSalary() override {
        cout << "Engineer Salary: " << baseSalary + 2000 << endl;
    }
    void displayDetails() override {
        cout << "I am an Engineer" << endl;
    }
};

int main() {
    Employee* e;
    Manager m(30000);
    Engineer en(25000);

    e = &m;
    e->displayDetails();
    e->calculateSalary();

    e = &en;
    e->displayDetails();
    e->calculateSalary();

    return 0;
}
