#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}
    float area() override { return 3.14 * radius * radius; }
};

class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    float area() override { return length * breadth; }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}
    float area() override { return 0.5 * base * height; }
};
