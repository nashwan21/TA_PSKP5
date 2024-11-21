#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int hotel;
    int nohptamu;
    int tanggal;
    int waktucheckIN;
    int waktucheckOUT;
    char namatamu[50];  
    int tipekamar;
    char jeniskasur;
    char emailtamu[50]; 
    int jumlahtamu;
    char alamattamu[100]; 
    char isiformulir;
    
	repeat:
    system("cls");
    printf("---- SELAMAT DATANG DI TRIVAGO----\n");
    printf("1. HOTEL 88\n");
    printf("2. HOTEL aston\n");
    printf("3. HOTEL SANTIKA\n");
    printf("---------------\n");

    printf("Masukkan hotel Pilihan anda: \n");
    scanf("%d", &hotel);
    system("cls");

    switch (hotel) {
        case 1:
            printf("HOTEL 88\n");
            break;
        case 2:
            printf("HOTEL ASTON\n");
            break;
        case 3:
            printf("HOTEL SANTIKA\n");
            break;
        default:
            printf("hotel tidak valid\n");
            getchar();  
            goto repeat;
    }

   
    isiformulir:
    printf("Nama tamu:");
    scanf("%s", &namatamu);
    printf("No Hp Tamu:");
    scanf("%d", &nohptamu);
    printf("Jumlah Tamu:");
    scanf("%d", &jumlahtamu);
    printf("Alamat Tamu:");
    scanf("%s", &alamattamu);
    printf("Email Tamu:");
    scanf("%s", &emailtamu);
    printf("Tanggal:");
    scanf("%d", &tanggal);
    printf("Waktu Check IN:");
    scanf("%d", &waktucheckIN);
    printf("Waktu Check OUT:");
    scanf("%d", &waktucheckOUT);

    system("cls");
    printf("Nama tamu: %s\n", namatamu);
    printf("No hp tamu: %d\n", nohptamu);
    printf("jumlah tamu:%d\n", jumlahtamu);
    printf("Alamat Tamu:%s\n", alamattamu);
    printf("Email Tamu:%s\n", emailtamu);
    printf("Tanggal:%d\n", tanggal);
    printf("Waktu Check IN:%d\n", waktucheckIN);
    printf("Waktu Check OUT:%d\n", waktucheckOUT);
    
    printf("\nApakah Data Formulir Anda Sudah Benar [Y/N]?\n");
    scanf(" %c", &isiformulir);
    isiformulir = toupper(isiformulir);  
    system("cls");

    if (isiformulir == 'N') {
        goto isiformulir;
    } else if (isiformulir == 'Y') {
        printf("Terima Kasih\n");
        printf("Reservasi Anda Berhasil");
        
    }
    

    return 0;
}
