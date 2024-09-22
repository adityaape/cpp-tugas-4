#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Masukkan jumlah bilangan Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: " << t1 << ", " << t2 << ", ";

    for (int i = 1; i <= n - 2; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }

    return 0;
}
