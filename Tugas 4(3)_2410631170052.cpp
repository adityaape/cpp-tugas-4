#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; ++i) {
        // Menampilkan spasi
        for (int j = i; j < tinggi; ++j) {
            cout << " ";
        }
        // Menampilkan bintang
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
