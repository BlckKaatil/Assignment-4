#include <iostream>
using namespace std;

class Box {
public:
    int length;

    Box(int l) {
        length = l;
    }

    Box& getObject() {
        return *this;
    }

    void display() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b(10);
    b.getObject().display();
    return 0;
}
