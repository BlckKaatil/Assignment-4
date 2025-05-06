#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class SafeArray {
private:
    T arr[10];
public:
    SafeArray() {
        for (int i = 0; i < 10; i++) {
            arr[i] = 0;
        }
    }
    
    void set(int index, T value) {
        if (index < 0 || index >= 10) {
            throw out_of_range("Index out of range");
        }
        arr[index] = value;
    }

    T get(int index) {
        if (index < 0 || index >= 10) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }

    void display() {
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SafeArray<int> safeArr;
    try {
        safeArr.set(5, 10);
        safeArr.set(15, 20);  // This will throw an exception
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    safeArr.display();
}
