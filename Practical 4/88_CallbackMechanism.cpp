#include <iostream>
using namespace std;

void callbackFunction(int value) {
    cout << "Callback received: " << value << endl;
}

void function(int a, void (*callback)(int)) {
    callback(a);
}

int main() {
    function(5, callbackFunction);
}
