#include <iostream>
#include <vector>
#include "gnuplot-iostream.h" 

using namespace std;

int main() {
    vector<double> suhu = {30.5, 31.2, 29.8, 32.0, 30.1};
    
    double total = 0;
    for (int i = 0; i < suhu.size(); i++) {
        total += suhu[i];
    }
    double rataRata = total / suhu.size();
    
    cout << "Data Suhu Harian: ";
    for (double s : suhu) {
        cout << s << " ";
    }
    cout << "\nRata-rata Suhu: " << rataRata << " Celsius" << endl;

    Gnuplot gp;
    
    gp << "set terminal pngcairo font 'arial,10'\n";
    
    gp << "set output 'grafik.png'\n";
    
    gp << "set title 'Grafik Data Suhu Harian'\n";
    gp << "set xlabel 'Hari ke-'\n";
    gp << "set ylabel 'Suhu (Celsius)'\n";
    gp << "set grid\n"; 
    
    gp << "plot '-' with linespoints title 'Suhu'\n";
    gp.send1d(suhu);

    cout << "Grafik berhasil disimpan sebagai 'grafik.png'!" << endl;

    return 0;
}