#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class DataStructure {
private:
    T arr[10];
    int size;
public:
    DataStructure() : size(0) {}
    
    void add(T value) {
        if (size >= 10) {
            throw overflow_error("Data structure is full");
        }
        arr[size++] = value;
    }
    
    T get(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }
    
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    try {
        DataStructure<int> ds;
        ds.add(5);
        ds.add(10);
        ds.display();
        cout << ds.get(1) << endl;
        cout << ds.get(5) << endl; // This will throw exception
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
