#include <iostream>
using namespace std;

class Polynomial {
public:
    int a, b, c;
    Polynomial(int x, int y, int z) : a(x), b(y), c(z) {}
    
    Polynomial operator + (const Polynomial& p) {
        return Polynomial(a + p.a, b + p.b, c + p.c);
    }
    Polynomial operator * (const Polynomial& p) {
        return Polynomial(a * p.a, b * p.b, c * p.c);
    }
    
    void display() {
        cout << a << "x^2 + " << b << "x + " << c << endl;
    }
};

int main() {
    Polynomial p1(1, 2, 3), p2(4, 5, 6);
    Polynomial p3 = p1 + p2;
    Polynomial p4 = p1 * p2;
    
    p3.display();
    p4.display();
}
