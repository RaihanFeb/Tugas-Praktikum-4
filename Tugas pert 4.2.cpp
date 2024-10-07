#include <iostream>
#using namespace std;

int main() {
    int n;

    // Meminta input jumlah baris piramida dari pengguna
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    // Loop untuk setiap baris
    for (int i = 1; i <= n; ++i) {
        // Loop untuk mencetak spasi
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // Loop untuk mencetak bintang
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}
