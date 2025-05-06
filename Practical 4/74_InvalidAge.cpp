#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid age entered!";
    }
};

void checkAge(int age) {
    if (age < 0 || age > 150) {
        throw InvalidAgeException();
    }
    cout << "Valid age: " << age << endl;
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        checkAge(age);
    } catch (const InvalidAgeException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
