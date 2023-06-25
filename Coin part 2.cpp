#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string lemparKoin() {
    // Menggunakan angka 0 untuk gambar dan 1 untuk angka
    int hasil = rand() % 2;

    if (hasil == 0) {
        return "G";
    } else {
        return "A";
    }
}

int main() {
    srand(time(0)); // Menginisialisasi generator angka acak

    cout << "Selamat datang di game Tebak Koin!" << endl;

    bool selesai = false;
    while (!selesai) {
        cout << "Saat ini koin sedang dilempar..." << endl;
        cout << "Apakah Anda menebak hasilnya akan menjadi gambar (G) atau angka (A)?" << endl;

        string tebakan;
        cout << "Masukkan pilihan Anda (G/A): ";
        cin >> tebakan;

        string hasilLempar = lemparKoin();

        if (tebakan == hasilLempar) {
            cout << "Selamat! Anda benar." << endl;
        } else {
            cout << "Maaf, tebakan Anda salah." << endl;
        }

        cout << "Apakah Anda ingin bermain lagi? (Y/N): ";
        char pilihan;
        cin >> pilihan;

        if (pilihan == 'N' || pilihan == 'n') {
            selesai = true;
        }
    }

    cout << "Terima kasih telah bermain Tebak Koin!" << endl;

    return 0;
}

