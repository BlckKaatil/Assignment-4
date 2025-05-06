#include <iostream>
using namespace std;

template <typename T>
class Matrix {
private:
    T arr[2][2];
public:
    void input() {
        cout << "Enter 4 values for a 2x2 matrix:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> arr[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix<T> operator + (const Matrix<T>& m) {
        Matrix<T> result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return result;
    }

    Matrix<T> operator * (const Matrix<T>& m) {
        Matrix<T> result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.arr[i][j] = arr[i][0] * m.arr[0][j] + arr[i][1] * m.arr[1][j];
            }
        }
        return result;
    }
};

int main() {
    Matrix<int> m1, m2;
    m1.input();
    m2.input();
    
    Matrix<int> m3 = m1 + m2;
    Matrix<int> m4 = m1 * m2;
    
    cout << "Matrix 1 + Matrix 2:" << endl;
    m3.display();
    
    cout << "Matrix 1 * Matrix 2:" << endl;
    m4.display();
}
