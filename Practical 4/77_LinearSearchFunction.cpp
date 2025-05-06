#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arrInt[] = {1, 2, 3, 4, 5};
    cout << "Index of 3: " << linearSearch(arrInt, 5, 3) << endl;

    double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Index of 3.3: " << linearSearch(arrDouble, 5, 3.3) << endl;

    return 0;
}
