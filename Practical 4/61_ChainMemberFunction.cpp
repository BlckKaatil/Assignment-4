#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person& setName(string n) {
        name = n;
        return *this;
    }

    Person& greet() {
        cout << "Hello, " << name << endl;
        return *this;
    }
};

int main() {
    Person p;
    p.setName("Alice").greet();
    return 0;
}
