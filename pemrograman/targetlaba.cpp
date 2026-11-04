// === RUMUS SAYA ===
// Target laba : 0.10 * modal
// Uang yang masuk : 0.85 * hargaMarkup
// Persen markup : (hargaMarkup / modal - 1) * 100

// Nama : Ibnu Royhan Firdausy
// NIM  : 26/588386/PA/24804
// Kelas: PRG1

#include <iostream>
using namespace std;

int main() {
    double modal, gaji, sewa, listrik;

    cout << "Modal barang : ";
    cin >> modal;
    cout << "Gaji karyawan : ";
    cin >> gaji;
    cout << "Sewa toko : ";
    cin >> sewa;
    cout << "Biaya listrik : ";
    cin >> listrik;

    // Langkah 1: target laba 10% dari modal
    double targetLaba = 0.10 * modal;

    // Langkah 2: total pengeluaran
    double totalPengeluaran = modal + gaji + sewa + listrik;

    // Langkah 3: uang yang harus masuk = total pengeluaran + target laba
    double uangMasuk = totalPengeluaran + targetLaba;

    // Langkah 4: harga sebelum obral 15% = uangMasuk / 0.85
    double hargaMarkup = uangMasuk / 0.85;

    // Langkah 5: persen markup dari modal
    double markup = (hargaMarkup / modal - 1) * 100;

    cout << "Markup: " << markup << endl;
    return 0;
}