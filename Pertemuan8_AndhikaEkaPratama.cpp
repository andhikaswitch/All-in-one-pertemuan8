#include <iostream>
#include <string>
using namespace std;

// Struktur zodiak
struct Zodiak {
    string nama;
    int mulai_hari;
    int mulai_bulan;
    int akhir_hari;
    int akhir_bulan;
};

// Fungsi Zodiak
string tentukanZodiak(int hari, int bulan) {
    // Array zodiak
    Zodiak daftarZodiak[12] = { //array dari struct Zodiak
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    // Periksa setiap zodiak untuk mencocokkan tanggal lahir
    for (int i = 0; i < 12; i++) {
        if ((bulan == daftarZodiak[i].mulai_bulan && hari >= daftarZodiak[i].mulai_hari) ||
            (bulan == daftarZodiak[i].akhir_bulan && hari <= daftarZodiak[i].akhir_hari)) {
            return daftarZodiak[i].nama;
        }
    }

    return "";
}

// Fungsi untuk menampilkan nama zodiak
void displayZodiak(string zodiak) {
    cout << "Nama Zodiak Anda adalah: " << zodiak << endl;
}

int main() {
    int hari, bulan, tahun;
    cout << "Masukkan tanggal lahir Anda [dd-mm-yyyy]: ";
    scanf("%d-%d-%d", &hari, &bulan, &tahun);

    // Tentukan zodiak berdasarkan tanggal lahir
    string zodiak = tentukanZodiak(hari, bulan);

    // Tampilkan hasilnya
    if (!zodiak.empty()) {
        displayZodiak(zodiak);  // Tampilkan hanya nama zodiak
    } else {
        cout << "Tanggal lahir tidak valid." << endl;
    }

    return 0;
}
