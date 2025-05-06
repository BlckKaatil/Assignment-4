#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v) : value(v) {}

    bool isEqual(Counter& other) {
        return this->value == other.value;
    }
};

int main() {
    Counter c1(5), c2(5);
    if (c1.isEqual(c2)) {
        cout << "Counters are equal" << endl;
    } else {
        cout << "Counters are not equal" << endl;
    }
    return 0;
}
