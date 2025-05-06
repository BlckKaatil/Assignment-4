#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class SafeArray {
private:
    T* arr;
    int size;

public:
    SafeArray(int s) : size(s) {
        arr = new T[size];
    }

    ~SafeArray() {
        delete[] arr;
    }

    void setElement(int index, T value) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds");
        }
        arr[index] = value;
    }

    T getElement(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds");
        }
        return arr[index];
    }
};

int main() {
    SafeArray<int> arr(5);
    try {
        arr.setElement(6, 10);  // Out of range
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }
