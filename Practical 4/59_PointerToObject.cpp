#include <iostream>
using namespace std;

class Demo {
public:
    void show() {
        Demo* ptr = this;
        cout << "Using pointer to object in member function" << endl;
    }
};

int main() {
    Demo d;
    d.show();
    return 0;
}
