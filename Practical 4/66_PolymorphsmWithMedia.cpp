#include <iostream>
using namespace std;

class Media {
public:
    virtual void show() {
        cout << "Media content" << endl;
    }
};

class Book : public Media {
public:
    void show() override {
        cout << "Showing Book" << endl;
    }
};

class DVD : public Media {
public:
    void show() override {
        cout << "Playing DVD" << endl;
    }
};

int main() {
    Media* m;
    Book b;
    DVD d;

    m = &b;
    m->show();

    m = &d;
    m->show();

    return 0;
}
