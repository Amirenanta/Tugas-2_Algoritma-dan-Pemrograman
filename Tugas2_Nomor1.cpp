#include <iostream>

using namespace std;

int main() {
    const int MAX_JENIS = 3;
    char kodeJenis[MAX_JENIS] = {'D', 'P', 'S'};
    char jenisNama[MAX_JENIS][6] = {"Dada", "Paha", "Sayap"};
    int harga[MAX_JENIS] = {2500, 2000, 1500};

    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "------------------------------" << endl;
    cout << "Kode Jenis Harga" << endl;
    cout << "------------------------------" << endl;
    for (int i = 0; i < MAX_JENIS; ++i) {
        cout << kodeJenis[i] << " " << jenisNama[i] << " Rp. " << harga[i] << endl;
    }
    cout << "------------------------------" << endl;

    int banyakJenis;
    cout << "Banyak Jenis : ";
    cin >> banyakJenis;

    double totalBayar = 0.0;

    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "No. Jenis Harga Banyak Jumlah" << endl;
    cout << "Potong Satuan Beli Harga" << endl;
    cout << "-----------------------------------------------" << endl;

    for (int i = 1; i <= banyakJenis; ++i) {
        char jenisPotong;
        int banyakPotong;

        cout << "Jenis Ke - " << i << " :" << endl;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> jenisPotong;
        cout << "Banyak Potong : ";
        cin >> banyakPotong;

        int index = -1;
        for (int j = 0; j < MAX_JENIS; ++j) {
            if (jenisPotong == kodeJenis[j]) {
                index = j;
                break;
            }
        }

        if (index != -1) {
            double jumlahHarga = harga[index] * banyakPotong;
            totalBayar += jumlahHarga;

            cout << "   " << i << "      " << jenisPotong << "       " << jenisNama[index] << "       " << harga[index]
                 << "       " << banyakPotong << "       " << jumlahHarga << endl;
        } else {
            cout << "Jenis potong tidak ada." << endl;
            --i; // Kurangi counter jenis jika input tidak valid
        }
    }

    double pajak = 0.1 * totalBayar;
    double totalBayarPajak = totalBayar + pajak;

    cout << "-----------------------------------------------" << endl;
    cout << "Jumlah Bayar Rp " << totalBayar << endl;
    cout << "Pajak 10% Rp " << pajak << endl;
    cout << "Total Bayar Rp " << totalBayarPajak << endl;

    return 0;
}
