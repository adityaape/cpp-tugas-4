#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk memeriksa bilangan prima
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Fungsi untuk menampilkan faktor dari bilangan
vector<int> getFactors(int n) {
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) factors.push_back(i);
    }
    return factors;
}

int main() {
    int limit;
    cout << "Masukkan batas angka: ";
    cin >> limit;

    vector<int> ganjil, genap, prima;

    // Menentukan bilangan ganjil, genap, dan prima
    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0) genap.push_back(i);
        else ganjil.push_back(i);

        if (isPrime(i)) prima.push_back(i);
    }

    // Menampilkan bilangan ganjil, genap, dan prima
    cout << "\nBilangan Ganjil: ";
    for (int n : ganjil) cout << n << " ";

    cout << "\nBilangan Genap: ";
    for (int n : genap) cout << n << " ";

    cout << "\nBilangan Prima: ";
    for (int n : prima) cout << n << " ";

    // Menghitung jumlah bilangan
    int totalGanjil = 0, totalGenap = 0, totalPrima = 0;
    for (int n : ganjil) totalGanjil += n;
    for (int n : genap) totalGenap += n;
    for (int n : prima) totalPrima += n;

    // Menampilkan jumlah bilangan
    cout << "\n\nJumlah Bilangan Ganjil: " << totalGanjil;
    cout << "\nJumlah Bilangan Genap: " << totalGenap;
    cout << "\nJumlah Bilangan Prima: " << totalPrima;

    // Menampilkan faktor bilangan ganjil, genap, dan prima
    cout << "\n\nFaktor dari Bilangan Ganjil: \n";
    for (int n : ganjil) {
        cout << n << ": ";
        vector<int> factors = getFactors(n);
        for (int f : factors) cout << f << " ";
        cout << endl;
    }

    cout << "\nFaktor dari Bilangan Genap: \n";
    for (int n : genap) {
        cout << n << ": ";
        vector<int> factors = getFactors(n);
        for (int f : factors) cout << f << " ";
        cout << endl;
    }

    cout << "\nFaktor dari Bilangan Prima: \n";
    for (int n : prima) {
        cout << n << ": ";
        vector<int> factors = getFactors(n);
        for (int f : factors) cout << f << " ";
        cout << endl;
    }

    return 0;
}
