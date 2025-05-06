#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Error: Division by zero");
    }
    return a / b;
}

int main() {
    int x = 10, y = 0;
    try {
        cout << "Result: " << divide(x, y) << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
