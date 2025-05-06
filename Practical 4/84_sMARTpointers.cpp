#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass() { cout << "Object created" << endl; }
    ~MyClass() { cout << "Object destroyed" << endl; }
};

int main() {
    {
        unique_ptr<MyClass> ptr(new MyClass());
    }  // Automatic memory release
    return 0;
}
