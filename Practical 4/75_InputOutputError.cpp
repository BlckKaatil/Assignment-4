#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

void writeToFile() {
    ofstream file("example.txt");
    if (!file) {
        throw runtime_error("Error opening file for writing");
    }
    file << "Hello, World!" << endl;
    file.close();
}

void readFromFile() {
    ifstream file("example.txt");
    if (!file) {
        throw runtime_error("Error opening file for reading");
    }
    string content;
    getline(file, content);
    cout << content << endl;
    file.close();
}

int main() {
    try {
        writeToFile();
        readFromFile();
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
