#include <iostream>
using namespace std;

int main() {
    string nama, jabatan;
    char gol;
    int nip, gaji, tunjangan, totalGaji;

    // INPUT
    cout << "         MASUKKAN DATA DIRI ANDA" << endl;
    cout << "===========================================" << endl;
    cout << " NIP             : "; cin >> nip;
    cout << " NAMA            : "; cin >> nama;
    cout << " GOLONGAN [A/B/C]: "; cin >> gol;
    cout << " GAJI POKOK      : "; cin >> gaji;
    cout << endl;

    // PENENTUAN JABATAN BERDASARKAN GOLONGAN
    if (gol == 'A' || gol == 'a') {
        jabatan = "DIREKTUR";
    } else if (gol == 'B' || gol == 'b') {
        jabatan = "MANAGER";
    } else {
        jabatan = "STAFF";
    }

    // HITUNG TUNJANGAN (2% dari gaji pokok)
    tunjangan = (gaji * 2) / 100;

    // HITUNG TOTAL GAJI
    totalGaji = gaji + tunjangan;

    // OUTPUT
    cout << "\n      DATA GAJI PEGAWAI PT MITRA SARANA" << endl;
    cout << "===========================================" << endl;
    cout << " NIP            : " << nip << endl;
    cout << " NAMA           : " << nama << endl;
    cout << " GOLONGAN       : " << gol << endl;
    cout << " JABATAN        : " << jabatan << endl;
    cout << " GAJI POKOK     : Rp. " << gaji << endl;
    cout << " TUNJANGAN (2%) : Rp. " << tunjangan << endl;
    cout << " TOTAL GAJI     : Rp. " << totalGaji << endl;
    cout << "===========================================" << endl;

    return 0;
}
