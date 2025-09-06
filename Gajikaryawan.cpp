#include <iostream>
#include <string>
using namespace std;

int main() {
    // Set nilai awal
     int JamKerjaStandar = 160;       // Jam standar per bulan
     int TarifPerJam = 50000;         // Rp. 50.000 per jam
     int TarifPerJamLembur = 40000;   // Rp. 40.000 per jam lembur

    // Input data karyawan
    string NamaKaryawan;
    string BulanGajian;
    int JamKerjaKaryawan;
    int umur;
    int alamat ;

    cout << "Masukkan Nama Karyawan: ";
    getline(cin, NamaKaryawan);
    cout << "Masukkan Bulan Gajian: ";
    getline(cin, BulanGajian);
    cout << "Masukkan Jumlah Jam Kerja: ";
    cin >> JamKerjaKaryawan;
    cout << "Masukkan Umur ";
    cin >> umur;
    cout << "Masukkan alamat";
    cin >> alamat;

    // Variabel untuk perhitungan gaji
    int GajiTotal;
    int JamLembur = 0;

    // Cek apakah jam kerja melebihi jam kerja standar
    if (JamKerjaKaryawan > JamKerjaStandar) {
        JamLembur = JamKerjaKaryawan - JamKerjaStandar;
        GajiTotal = (JamKerjaStandar * TarifPerJam) + (JamLembur * TarifPerJamLembur);
    } else {
        GajiTotal = JamKerjaKaryawan * TarifPerJam;
    }

    // Output slip gaji
    cout << "\n===== Slip Gaji =====\n";
    cout << "Nama Karyawan  : " << NamaKaryawan << endl;
    cout << "Bulan Gajian   : " << BulanGajian << endl;
    cout << "Jam Kerja      : " << JamKerjaKaryawan << " jam" << endl;
    cout << "Gaji Total     : Rp. " << GajiTotal << endl;
    cout << "Jam lembur     : " << JamLembur << endl ;

    // Simulasi pengiriman slip gaji fisik dan digital
    cout << "\nSlip gaji fisik telah dikirim.\n";
    cout << "Slip gaji digital telah dikirim.\n";

return 0 ;
}
