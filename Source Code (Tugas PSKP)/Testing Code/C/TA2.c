#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char nama_pengunjung[100];
	char noID[40];
	char noHP[40];
	char alamat[200];
	char jenis_kelamin[40];
	char email_pengunjung[100];
	char password[100];
};

struct order{
	int jumlah_pengunjung;
	int jumlah_kamar;
	int checkIN;
	int checkOUT;
	int jenis_kamar;
	int total_harga;
	char hari[20];
};

struct data customer1;
struct order customer2;

void isi_data(){
	system("cls");
	printf("Receptionist  : Zalfa Maharani\n");
	printf("ID Number     : 20017035\n\n");
    printf("============================\33[1m Create Your Account \33[0m=============================\n");	
	printf("email         : ");
	gets(customer1.email_pengunjung);	
	printf("Password      : ");
	gets(customer1.password);
    printf("\n");
}

int main(){
    system("cls");
    printf("===============================================================\n");
    printf("|                                                             |\n");
    printf("|              ---- SELAMAT DATANG DI TRIVAGO----             |\n");
    printf("|                                                             |\n");
    printf("===============================================================\n");
    printf("|                        1. Hotel 88                          |\n");
    printf("|                        2. Hotel Aston                       |\n");
    printf("|                        3. Hotel Santika                     |\n");
    printf("===============================================================\n\n");
	

	
	isi_data();
}
