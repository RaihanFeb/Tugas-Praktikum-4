#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> limit;

    int a = 0, b = 1, nextTerm;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= limit; ++i) {
        cout << a << " ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    return 0;
}
