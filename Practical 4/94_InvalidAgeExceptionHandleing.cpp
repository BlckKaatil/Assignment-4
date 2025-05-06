#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid age input!";
    }
};

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 0 || age > 150) {
            throw InvalidAgeException();
        }
        cout << "Age is valid." << endl;
    } catch (const InvalidAgeException& e) {
        cout << e.what() << endl;
    }
}
