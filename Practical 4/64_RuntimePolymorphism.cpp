#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Base Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle" << endl;
    }
};

class Square : public Shape {
public:
    void area() override {
        cout << "Area of Square" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    Square sq;

    s = &c;
    s->area();

    s = &sq;
    s->area();

    return 0;
}
