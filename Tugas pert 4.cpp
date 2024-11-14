#include <iostream>
using namespace std;

// Fungsi untuk memeriksa apakah suatu bilangan prima
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int limit;

    // Input batas angka
    cout << "Masukkan batas angka: ";
    cin >> limit;

    cout << "\nBilangan Genap: ";
    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= limit; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << "\nBilangan Prima: ";
    for (int i = 1; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
