#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car started" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike started" << endl;
    }
};

int main() {
    Vehicle* v;
    Car c;
    Bike b;

    v = &c;
    v->start();

    v = &b;
    v->start();

    return 0;
}
