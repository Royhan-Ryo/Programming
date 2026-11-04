#include <iostream>
#include <cmath>
#include <limits> 
using namespace std;

int main() {
    int pilihan;
    double a, b, hasil;

    while (true) {
        cout << "\n==================================" << endl;
        cout << "       KALKULATOR SEDERHANA       " << endl;
        cout << "==================================" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Pangkat" << endl;
        cout << "6. Akar Kuadrat" << endl;
        cout << "7. Keluar" << endl;
        cout << "----------------------------------" << endl;
        cout << "Pilih operasi (1-7): ";
        
        cin >> pilihan;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "[ERROR] Input tidak valid! Harap masukkan angka 1-7.\n";
            continue; 
        }

        if (pilihan == 7) {
            cout << "Terima kasih! Program selesai.\n";
            break;
        }

        if (pilihan < 1 || pilihan > 7) {
            cout << "[ERROR] Pilihan tidak tersedia. Masukkan angka 1-7.\n";
            continue;
        }

        if (pilihan >= 1 && pilihan <= 5) {
            cout << "Masukkan angka pertama (a): ";
            cin >> a;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "[ERROR] Input harus berupa angka!\n";
                continue;
            }

            cout << "Masukkan angka kedua (b): ";
            cin >> b;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "[ERROR] Input harus berupa angka!\n";
                continue;
            }

            switch (pilihan) {
                case 1:
                    hasil = a + b;
                    cout << "Hasil: " << a << " + " << b << " = " << hasil << endl;
                    break;
                case 2:
                    hasil = a - b;
                    cout << "Hasil: " << a << " - " << b << " = " << hasil << endl;
                    break;
                case 3:
                    hasil = a * b;
                    cout << "Hasil: " << a << " * " << b << " = " << hasil << endl;
                    break;
                case 4:
                    if (b == 0) {
                        cout << "[ERROR] Pembagian dengan nol tidak diperbolehkan!\n";
                    } else {
                        hasil = a / b;
                        cout << "Hasil: " << a << " / " << b << " = " << hasil << endl;
                    }
                    break;
                case 5:
                    hasil = pow(a, b);
                    cout << "Hasil: " << a << " ^ " << b << " = " << hasil << endl;
                    break;
            }
        } 
        else if (pilihan == 6) {
            cout << "Masukkan angka (a): ";
            cin >> a;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "[ERROR] Input harus berupa angka!\n";
                continue;
            }

            if (a < 0) {
                cout << "[ERROR] Akar kuadrat dari bilangan negatif tidak terdefinisi!\n";
            } else {
                hasil = sqrt(a);
                cout << "Hasil: sqrt(" << a << ") = " << hasil << endl;
            }
        }
    }

    return 0;
}