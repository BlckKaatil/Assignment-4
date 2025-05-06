#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student* s = new Student;
    s->name = "John";
    s->age = 20;
    s->display();
    delete s;
    return 0;
}
