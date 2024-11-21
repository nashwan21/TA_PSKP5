#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Bagian Data
int main() {
    int hotel;
    int nohptamu[5];
    int tanggal1;
    int tanggal2;
    int waktucheckIN;
    int waktucheckOUT;
    char namatamu[2];  
    int tipekamar;
    char emailtamu[50]; 
    int jumlahtamu;
    int jumlahkamar;
    char alamattamu[100]; 
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
    printf("===============================================================\n");
    printf("|                                                             |\n");
    printf("|              ---- SELAMAT DATANG DI TRIVAGO----             |\n");
    printf("|                                                             |\n");
    printf("===============================================================\n");
    printf("|                        1. Hotel 88                          |\n");
    printf("|                        2. Hotel Aston                       |\n");
    printf("|                        3. Hotel Santika                     |\n");
    printf("===============================================================\n");
	
    printf("\nMasukkan Hotel Pilihan anda: ");
    if (scanf("%d", &hotel) != 1) {
        printf("Pilihan Hotel Tidak Valid\n");
        fflush(stdin); 
        goto repeat;
    }

//Pemilihan Hotel
    switch (hotel) {
        case 1:
            printf("Hotel 88\n");
            break;
        case 2:
            printf("Hotel Aston\n");
            break;
        case 3:
            printf("Hotel Santika\n");
            break;
        default:
            printf("Hotel Tidak Valid\n");  
            goto repeat;
    }
    
    //Pilihan Tipe Kamar
    repeat2:
    printf("======================================================================\n");
	printf("|                       1. Standard     | Rp300000                    |\n");
    printf("|                       2. Premium      | Rp600000                    |\n");
    printf("|                       3. Deluxe       | Rp900000                    |\n");
    printf("|                       4. Suite        | Rp1200000                   |\n");
    printf("|                       5. Presidential | Rp1500000                   |\n");
    printf("======================================================================\n");

    printf("Pilih Kamar Pilihan Anda: \n");
    if (scanf("%d", &tipekamar) != 1) {
        printf("Pilihan Tipe Kamar Tidak Valid\n");
        fflush(stdin); 
        goto repeat2;
}

    switch (tipekamar) {
        case 1:
            printf("Pilihan Kamar Anda : Standard\n");
            printf("Harga kamar        : Rp%d\n", harga_standard);
            total_harga = harga_standard * jumlahkamar;
            break;
        case 2:
            printf("Pilihan Kamar Anda : Premium\n");
            printf("Harga kamar        : Rp%d\n", harga_premium);
            break;
        case 3:
            printf("Pilihan Kamar Anda : Deluxe\n");
            printf("Harga kamar        : Rp%d\n", harga_deluxe);
            break;
        case 4:
            printf("Pilihan Kamar Anda : Suite\n");
            printf("Harga kamar        : Rp%d\n", harga_suite);
            break;
        case 5:
            printf("Pilihan Kamar Anda : Presidential\n");
            printf("Harga kamar        : Rp%d\n", harga_presidential);
            break;
        
		default:
            printf("\nPilihan Kamar Tidak Valid\n");  
            goto repeat2;
    }    
    system("cls");
	
	//Pengisian Jumlah Tamu
	repeat3:
	printf("===============================================================\n");
	printf("Jumlah Tamu    :");
    scanf("%d", &jumlahtamu);
    
	//Pembatasan Jumlah Tamu
     if (jumlahtamu <=0){
	printf("Jumlah Tamu Tidak Valid\n");
	system("cls");
	goto repeat3;
	}
     else if (jumlahtamu >5){
		printf("Jumlah Tamu Melebihi Kapasitas Kamar\n");
		system("cls");
		goto repeat3;
	}	
	
	
    
    //Pengisian Jumlah Kamar
	repeat4:
	printf("===============================================================\n");
    printf("Jumlah Kamar    :");
    scanf("%d", &jumlahkamar);	
    
	//Pembatasan Jumlah Kamar
    if (jumlahkamar <= 0){
		printf("Jumlah Tamu Tidak Valid\n");
		system("cls");
		goto repeat4;
	}
	else if (jumlahkamar >3){
		printf("Jumlah Kamar Melebihi Kapasitas\n");
		system("cls");
		goto repeat4;
	}
	
	//Konfirmasi Jumlah Tamu dan Jumlah Kamar
    printf("===============================================================\n");
	printf("Jumlah Tamu     :%d\n", jumlahtamu);
    printf("Jumlah Kamar    :%d\n", jumlahkamar);
    printf("\nApakah Jumlah Tamu dan Kamar Anda Sudah Benar [Y/N]?\n");
    scanf(" %c", &repeat3);
    repeat3 = toupper(repeat3);  
    system("cls");
    
    //Tanggal
	if(tanggal1 >=1 && tanggal1 <=31){
		printf("Tanggal valid");
	}
	else if (tanggal1 <=0 && tanggal1 >=31){
		printf("Tanggal tidak valid");
		goto isiformulir;
	}
	else if (tanggal2 >=1 && tanggal2 <=12){
		printf("Tanggal valid");
   }
	
	else if (tanggal2 <=0 && tanggal2 >=13){
		printf("Tanggal tidak valid");
		goto isiformulir;
	}
    
   //Pengisian Formulir
    isiformulir:
    printf("===============================================================\n");
    printf("Nama Tamu            :");
    scanf(" %[^\t\n]", namatamu);
    printf("No Hp Tamu           :");
    scanf("%d", &nohptamu);
    printf("Alamat Tamu          :");
    scanf(" %[^\t\n]", &alamattamu);
    printf("Email Tamu           :");
    scanf("%s", &emailtamu);
    printf("Tanggal (Hari)       :");
    scanf("%d", &tanggal1);
    printf("Tanggal (Bulan)      :");
    scanf("%d", &tanggal2);
    printf("Waktu Check IN       :");
    scanf("%d", &waktucheckIN);
    printf("Waktu Check OUT      :");
    scanf("%d", &waktucheckOUT);
    printf("===============================================================\n"); 
	system("cls");

	
	//Perhitungan Total Harga
	if (tipekamar = 1){
		total_harga=jumlahkamar*harga_standard;
	}
	else if (tipekamar = 2){
		total_harga=jumlahkamar*harga_premium;
	}
	else if (tipekamar = 3){
		total_harga=jumlahkamar*harga_deluxe;
	}
	else if (tipekamar = 4){
		total_harga=jumlahkamar*harga_suite;
	}
	else if (tipekamar = 5){
		total_harga=jumlahkamar*harga_presidential;
	}
 
    //Menampilkan Formulir 
    system("cls");
    printf("===============================================================\n");
    printf("Nama Tamu       :%s\n", namatamu);
    printf("No HP Tamu      :%d\n", nohptamu);
    printf("Jumlah Tamu     :%d\n", jumlahtamu);
    printf("Jumlah Kamar    :%d\n", jumlahkamar);
    printf("Alamat Tamu     :%s\n", alamattamu);
    printf("Email Tamu      :%s\n", emailtamu);
    printf("Tanggal (hari)  :%d\n", tanggal1);
    printf("Tanggal (bulan) :%d\n", tanggal2);
    printf("Waktu Check IN  :%d\n", waktucheckIN);
    printf("Waktu Check OUT :%d\n", waktucheckOUT);
    printf("Tipe Kamar      :%d\n", tipekamar);
    printf("Total Harga     :Rp%d\n", total_harga);
    printf("===============================================================\n");
    
    //Konfirmasi Data Formulir
    printf("\nApakah Data Formulir Anda Sudah Benar [Y/N]?\n");
    scanf(" %c", &isiformulir);
    isiformulir = toupper(isiformulir);  
    system("cls");


    if (isiformulir == 'N') {
        goto isiformulir;
    } else if (isiformulir == 'Y') {
    printf("===============================================================\n");
    printf("Nama Tamu       :%s\n", namatamu);
    printf("No HP Tamu      :%d\n", nohptamu);
    printf("Jumlah Tamu     :%d\n", jumlahtamu);
    printf("Jumlah Kamar    :%d\n", jumlahkamar);
    printf("Alamat Tamu     :%s\n", alamattamu);
    printf("Email Tamu      :%s\n", emailtamu);
    printf("Tanggal (hari)  :%d\n", tanggal1);
    printf("Tanggal (bulan) :%d\n", tanggal2);
    printf("Waktu Check IN  :%d\n", waktucheckIN);
    printf("Waktu Check OUT :%d\n", waktucheckOUT);
    printf("Tipe Kamar      :%d\n", tipekamar);
    printf("Total Harga     :Rp%d\n", total_harga);
    printf(" ================================================================");
	printf("\n|                        Terima Kasih                        |\n");
    printf("\n|                  Reservasi Anda Berhasil                   |\n");
    printf(" ================================================================\n");
        
    }
    

    return 0;
}
