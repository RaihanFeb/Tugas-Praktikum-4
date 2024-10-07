#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, nextTerm;

    cout << "Deret Fibonacci: " << a << ", " << b;

    for (int i = 1; i < n - 1; ++i) {
        nextTerm = a + b;
        cout << ", " << nextTerm;
        a = b;
        b = nextTerm;
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Masukkan jumlah angka Fibonacci yang diinginkan: ";
    cin >> n;

    if (n >= 2) {
        fibonacci(n);
    } else {
        cout << "Jumlah angka harus lebih besar atau sama dengan 2." << endl;
    }

    return 0;
}
