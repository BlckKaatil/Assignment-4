#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void display() override {
        cout << "Derived1 class" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void display() override {
        cout << "Derived2 class" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void display() override {
        cout << "Derived3 class" << endl;
    }
};

int main() {
    Derived3 d;
    d.display();  // Avoids ambiguity due to virtual inheritance
}
