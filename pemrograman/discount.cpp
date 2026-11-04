// === ASUMSI SAYA ===
// Ambang diskon 1 : Jika Belanja >= Rp 100.000  (diskon 10%)
// Ambang diskon 2 : Jika Belanja >= Rp 500.000  (diskon 15%)
// Besar diskon 1  : Diskon 10% Jika belanja >= Rp 100.000
// Besar diskon 2  : Diskon 15% Jika Belanja >= Rp 500.000
// Alasan          : Saya menerapkan diskon bertingkat . 
//                   "Banyak" itu relatif, jadi belanja >= 100.000 dianggap cukup banyak (diskon 10%),
//                   sedangkan belanja >= 500.000 dianggap sangat banyak (diskon lebih besar, 15%).
//                   Sehingga mendorong pembeli untuk belanja lebih banyak.
//
// Nama : Ibnu Royhan Firdausy
// NIM  : 26/588386/PA/24804
// Kelas: PRG1

#include <iostream>
using namespace std;

int main() {
    long long belanja;
    cout << "Masukkan total belanja: Rp ";
    cin >> belanja;

    double diskon = 0.0; 
    double potongan = 0.0;
    double totalBayar = 0.0;

    if (belanja >= 500000) {
        diskon = 0.15;
    } else if (belanja >= 100000) {
        diskon = 0.10;
    } else {
        diskon = 0.0;
    }

    potongan = belanja * diskon;
    totalBayar = belanja - potongan;

    cout << "\n========== RINCIAN BELANJA ==========" << endl;
    cout << "Total belanja awal : Rp " << belanja << endl;
    cout << "Diskon didapat      : " << (diskon * 100) << "%" << endl;
    cout << "Potongan harga      : Rp " << potongan << endl;
    cout << "-------------------------------------" << endl;
    cout << "Total yang dibayar  : Rp " << totalBayar << endl;
    cout << "=====================================" << endl;

    cout << "___________.__                   __            " << endl;
    cout << "\\__    ___/|  |__ _____    ____ |  | __  ______" << endl;
    cout << "  |    |   |  |  \\\\__  \\  /    \\|  |/ / /  ___/" << endl;
    cout << "  |    |   |   Y  \\/ __ \\|   |  \\    <  \\___ \\" << endl;
    cout << "  |____|   |___|  (____  /___|  /__|_ \\/____  >" << endl;
    cout << "                \\/     \\/     \\/     \\/     \\/" << endl;

    return 0;
}