#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    int hotel;
    int nohptamu[5];
    int tanggal1;
    int tanggal2;
    int tahun;
    int waktucheckIN;
    int waktucheckOUT;
    string namatamu;
    int tipekamar;
    string emailtamu; 
    int jumlahtamu;
    int jumlahkamar;
    string alamattamu;
    char isiformulir;
    char repeat3;
    int harga_standard = 300000;
    int harga_premium = 600000;
    int harga_deluxe = 900000;
    int harga_suite = 1200000;
    int harga_presidential = 1500000;
    int total_harga;

    // Tampilan Awal
repeat:
    system("cls");
    cout << "===============================================================\n";
    cout << "|                                                             |\n";
    cout << "|              ---- SELAMAT DATANG DI DWIVAGO----             |\n";
    cout << "|                                                             |\n";
    cout << "===============================================================\n";
    cout << "|                        1. Hotel Mulia                       |\n";
    cout << "|                        2. Hotel Four Season                 |\n";
    cout << "|                        3. Hotel Pullman                     |\n";
    cout << "|                        4. Hotel Sari Pacific                |\n";
    cout << "|                        5. Hotel Aston                       |\n";
    cout << "===============================================================\n";
    cout << "\nMasukkan Hotel Pilihan Anda: \n";
    cin >> hotel;
    if (cin.fail()) {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
        cout << "Pilihan Hotel Tidak Valid\n";
        goto repeat;
    }

    // Pemilihan Hotel
    switch (hotel) {
        case 1:
            cout << "Hotel Mulia\n";
            break;
        case 2:
            cout << "Hotel Four Season\n";
            break;
        case 3:
            cout << "Hotel Pullman\n";
            break;
        case 4:
            cout << "Hotel Sari Pacific\n";
            break;
        case 5:
            cout << "Hotel Aston\n";
            break;
        default:
            cout << "Hotel Tidak Valid\n";  
            goto repeat;
    }
    
    // Pilihan Tipe Kamar
repeat2:
    cout << "======================================================================\n";
    cout << "|                       1. Standard     | Rp300000                    |\n";
    cout << "|                       2. Premium      | Rp600000                    |\n";
    cout << "|                       3. Deluxe       | Rp900000                    |\n";
    cout << "|                       4. Suite        | Rp1200000                   |\n";
    cout << "|                       5. Presidential | Rp1500000                   |\n";
    cout << "======================================================================\n";
    cout << "Pilih Kamar Pilihan Anda: \n";
    cin >> tipekamar;
    if (cin.fail()) {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        cout << "Pilihan Tipe Kamar Tidak Valid\n";
        goto repeat2;
    }

    switch (tipekamar) {
        case 1:
            cout << "Pilihan Kamar Anda : Standard\n";
            cout << "Harga kamar        : Rp" << harga_standard << endl;
            total_harga = harga_standard * jumlahkamar;
            break;
        case 2:
            cout << "Pilihan Kamar Anda : Premium\n";
            cout << "Harga kamar        : Rp" << harga_premium << endl;
            total_harga = harga_premium * jumlahkamar;
            break;
        case 3:
            cout << "Pilihan Kamar Anda : Deluxe\n";
            cout << "Harga kamar        : Rp" << harga_deluxe << endl;
            total_harga = harga_deluxe * jumlahkamar;
            break;
        case 4:
            cout << "Pilihan Kamar Anda : Suite\n";
            cout << "Harga kamar        : Rp" << harga_suite << endl;
            total_harga = harga_suite * jumlahkamar;
            break;
        case 5:
            cout << "Pilihan Kamar Anda : Presidential\n";
            cout << "Harga kamar        : Rp" << harga_presidential << endl;
            total_harga = harga_presidential * jumlahkamar;
            break;
        default:
            cout << "\nPilihan Kamar Tidak Valid\n";  
            goto repeat2;
    }

    // Pengisian Jumlah Tamu
repeat3:
    cout << "===============================================================\n";
    cout << "Jumlah Tamu: ";
    cin >> jumlahtamu;
    
    // Pembatasan Jumlah Tamu
    if (jumlahtamu <= 0) {
        cout << "Jumlah Tamu Tidak Valid\n";
        system("cls");
        goto repeat3;
    } else if (jumlahtamu > 5) {
        cout << "Jumlah Tamu Melebihi Kapasitas Kamar\n";
        system("cls");
        goto repeat3;
    }

    // Pengisian Jumlah Kamar
repeat4:
    cout << "===============================================================\n";
    cout << "Jumlah Kamar: ";
    cin >> jumlahkamar;
    
    // Pembatasan Jumlah Kamar
    if (jumlahkamar <= 0) {
        cout << "Jumlah Kamar Tidak Valid\n";
        system("cls");
        goto repeat4;
    } else if (jumlahkamar > 3) {
        cout << "Jumlah Kamar Melebihi Kapasitas\n";
        system("cls");
        goto repeat4;
    }

    // Konfirmasi Jumlah Tamu dan Jumlah Kamar
    cout << "===============================================================\n";
    cout << "Jumlah Tamu     : " << jumlahtamu << endl;
    cout << "Jumlah Kamar    : " << jumlahkamar << endl;
    cout << "\nApakah Jumlah Tamu dan Kamar Anda Sudah Benar [Y/N]?\n";
    cin >> repeat3;
    repeat3 = toupper(repeat3);  
    system("cls");

    if (repeat3 == 'N') {
        goto repeat3;
    }

    // Pengisian Formulir
    cout << "===============================================================\n";
    cout << "Nama Tamu           : ";
    cin.ignore();  // Clear the input buffer
    getline(cin, namatamu); // Read full name as string
    cout << "No Hp Tamu          : ";
    for (int i = 0; i < 5; i++) {
        cin >> nohptamu[i];
    }
    cout << "Alamat Tamu         : ";
    cin.ignore(); // Clear input buffer again
    getline(cin, alamattamu);  // Read address
    cout << "Email Tamu          : ";
    cin >> emailtamu;
    cout << "Tanggal (Hari)      : ";
    cin >> tanggal1;
    cout << "Tanggal (Bulan)     : ";
    cin >> tanggal2;
    cout << "Waktu Check IN      : ";
    cin >> waktucheckIN;
    cout << "Waktu Check OUT     : ";
    cin >> waktucheckOUT;
    cout << "===============================================================\n"; 
    system("cls");

    // Menampilkan Formulir
    cout << "===============================================================\n";
    cout << "Nama Tamu       : " << namatamu << endl;
    cout << "No HP Tamu      : ";
    for (int i = 0; i < 5; i++) {
        cout << nohptamu[i] << " ";
    }
    cout << endl;
    cout << "Jumlah Tamu     : " << jumlahtamu << endl;
    cout << "Jumlah Kamar    : " << jumlahkamar << endl;
    cout << "Alamat Tamu     : " << alamattamu << endl;
    cout << "Email Tamu      : " << emailtamu << endl;
    cout << "Tanggal (hari)  : " << tanggal1 << endl;
    cout << "Tanggal (bulan) : " << tanggal2 << endl;
    cout << "Waktu Check IN  : " << waktucheckIN << endl;
    cout << "Waktu Check OUT : " << waktucheckOUT << endl;
    cout << "Tipe Kamar      : " << tipekamar << endl;
    cout << "Total Harga     : Rp" << total_harga << endl;
    cout << "===============================================================\n";

    // Konfirmasi Data Formulir
    cout << "\nApakah Data Formulir Anda Sudah Benar [Y/N]?\n";
    cin >> isiformulir;
    isiformulir = toupper(isiformulir);  
    system("cls");

    if (isiformulir == 'N') {
        goto repeat3;
    }

    // Menampilkan Konfirmasi Akhir
    if (isiformulir == 'Y') {
        cout << "===============================================================\n";
        cout << "Nama Tamu       : " << namatamu << endl;
        cout << "No HP Tamu      : ";
        for (int i = 0; i < 5; i++) {
            cout << nohptamu[i] << " ";
        }
        cout << endl;
        cout << "Jumlah Tamu     : " << jumlahtamu << endl;
        cout << "Jumlah Kamar    : " << jumlahkamar << endl;
        cout << "Alamat Tamu     : " << alamattamu << endl;
        cout << "Email Tamu      : " << emailtamu << endl;
        cout << "Tanggal (hari)  : " << tanggal1 << endl;
        cout << "Tanggal (bulan) : " << tanggal2 << endl;
        cout << "Waktu Check IN  : " << waktucheckIN << endl;
        cout << "Waktu Check OUT : " << waktucheckOUT << endl;
        cout << "Tipe Kamar      : " << tipekamar << endl;
        cout << "Total Harga     : Rp" << total_harga << endl;
        cout << "===============================================================\n";
        cout << "\n|                        Terima Kasih                        |\n";
        cout << "\n|                  Reservasi Anda Berhasil                   |\n";
        cout << " ================================================================" << endl;
    }

    return 0;
}