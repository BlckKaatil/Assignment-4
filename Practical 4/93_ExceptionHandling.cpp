#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        ifstream file("non_existent_file.txt");
        if (!file) {
            throw runtime_error("File not found!");
        }
        string content;
        while (getline(file, content)) {
            cout << content << endl;
        }
        file.close();
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
}
