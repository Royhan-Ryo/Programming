#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                 
    int score;             
    int total = 0;         
    double average;        
    vector<int> nilai;     

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> score;
        nilai.push_back(score);
    }

    int tertinggi = nilai[0];
    int jumlahLulus = 0;

    for (int i = 0; i < n; i++) {
        total += nilai[i];

        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
        }

        if (nilai[i] >= 60) {   
            jumlahLulus++;
        }
    }

    average = (double) total / n;

    cout << "\n=== Hasil ===" << endl;
    cout << "Total nilai      : " << total << endl;
    cout << "Rata-rata        : " << average << endl;
    cout << "Nilai tertinggi  : " << tertinggi << endl;
    cout << "Jumlah lulus     : " << jumlahLulus << " mahasiswa" << endl;

    return 0;
}