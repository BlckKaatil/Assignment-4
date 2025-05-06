#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 3 and 5: " << findMax(3, 5) << endl;
    cout << "Max of 3.5 and 2.1: " << findMax(3.5, 2.1) << endl;
    cout << "Max of 'a' and 'z': " << findMax('a', 'z') << endl;

    return 0;
}
