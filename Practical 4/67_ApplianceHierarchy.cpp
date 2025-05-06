#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void functionality() {
        cout << "Generic appliance functionality" << endl;
    }
};

class WashingMachine : public Appliance {
public:
    void functionality() override {
        cout << "Washing clothes" << endl;
    }
};

class Refrigerator : public Appliance {
public:
    void functionality() override {
        cout << "Cooling food" << endl;
    }
};

class Microwave : public Appliance {
public:
    void functionality() override {
        cout << "Heating food" << endl;
    }
};

int main() {
    Appliance* a;
    WashingMachine wm;
    Refrigerator rf;
    Microwave mw;

    a = &wm; a->functionality();
    a = &rf; a->functionality();
    a = &mw; a->functionality();

    return 0;
}
