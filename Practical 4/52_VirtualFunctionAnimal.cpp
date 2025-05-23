#include<iostream>
using namespace std;
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows." << endl;
    }
};

class Bird : public Animal {
public:
    void speak() override {
        cout << "Bird chirps." << endl;
    }
};
