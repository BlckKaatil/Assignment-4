#include <iostream>
#include <stdexcept>
using namespace std;

class MyResource {
public:
    MyResource() { cout << "Resource acquired" << endl; }
    ~MyResource() { cout << "Resource released" << endl; }
};

void testException() {
    MyResource resource;
    throw runtime_error("An error occurred");
}

int main() {
    try {
        testException();
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
