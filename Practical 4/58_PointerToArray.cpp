#include <iostream>
using namespace std;

class Book {
public:
    string title;
    void getData() {
        cout << "Enter book title: ";
        cin >> title;
    }
    void display() {
        cout << "Title: " << title << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book* b = new Book[n];
    for (int i = 0; i < n; i++) {
        b[i].getData();
    }
    for (int i = 0; i < n; i++) {
        b[i].display();
    }

    delete[] b;
    return 0;
}
