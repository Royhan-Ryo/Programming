#include <iostream>
using namespace std;

int main(){
    int matriks[2][2];
    cout << "Masukkan elemen matriks 2x2:" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks[i][j];  
        }
    }
    cout << "Matriks Asli:" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Transpose Matriks:" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matriks[j][i] << " ";
        }
        cout << endl;
    }
    cout << "Hasil Perkalian Matriks asli dengan transpose:" << endl;
    int hasil[2][2] = {0};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                hasil[i][j] += matriks[i][k] * matriks[j][k];
            }
        }
    }
    cout << "Hasil Perkalian Matriks asli dengan transpose:" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    return 0;    
}