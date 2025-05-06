#include <iostream>
#include <stdexcept>
using namespace std;

void testException(int choice) {
    if (choice == 1) {
        throw runtime_error("Runtime Error occurred!");
    } else if (choice == 2) {
        throw out_of_range("Out of range exception!");
    } else {
        throw logic_error("Logic Error occurred!");
    }
}

int main() {
    int choice;
    cout << "Enter a choice (1, 2, or 3): ";
    cin >> choice;

    try {
        testException(choice);
    } catch (const runtime_error& e) {
        cout << "Caught: " << e.what() << endl;
    } catch (const out_of_range& e) {
        cout << "Caught: " << e.what() << endl;
    } catch (const logic_error& e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}
