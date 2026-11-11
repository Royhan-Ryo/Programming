/*
soal 
-f(5) = 5 * (4/2) * 3 * (2/2) * 1 = 30
-f(7) = 7 * (6/2) * 5 * (4/2) * 3 * (2/2) * 1 = 315
*/

#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung persamaan
double hitungRekursif(int n) {
    // 1. Base Case: Kondisi berhenti
    if (n == 1) {
        return 1;
    }
    
    // 2. Recursive Case
    if (n % 2 == 0) {
        // Jika genap, bagi 2 lalu kalikan dengan hasil f(n-1)
        return (n / 2.0) * hitungRekursif(n - 1);
    } else {
        // Jika ganjil, kalikan langsung dengan hasil f(n-1)
        return n * hitungRekursif(n - 1);
    }
}

int main() {
    int n;
    cout << "Masukkan nilai n (contoh: 5 atau 7): ";
    cin >> n;

    // Validasi input harus positif
    if (n <= 0) {
        cout << "Masukkan bilangan positif!" << endl;
    } else {
        // Memanggil fungsi rekursif
        double hasil = hitungRekursif(n);
        cout << "f(" << n << ") = " << hasil << endl;
    }

    return 0;
}