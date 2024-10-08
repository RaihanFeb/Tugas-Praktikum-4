#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input jumlah baris piramida dari pengguna
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    // Loop untuk setiap baris
    for (int i = 1; i <= n; ++i) {
        // Loop untuk mencetak spasi
        for (int i = 1; i <= n - i; ++i) {
            cout << " ";
        }

        // Loop untuk mencetak bintang
        for (int i = 1; i <= 2 * i - 1; ++i) {
            cout << "*";
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}
