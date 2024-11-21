#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char nama_pengunjung[100];
	char noID[30];
	char noHP[30];
	char alamat[200];
	char jenis_kelamin[30];
	char email_pengunjung1[100];
	char email_pengunjung2[100];
	char password1[50];
	char password2[50];
};

struct order{
	int hotel;
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
	// printf("Receptionist  : Zalfa Maharani\n");
	// printf("ID Number     : 20017035\n\n");
    printf("============================\33[1m Fill Your Form \33[0m===================================\n");
	printf("email         : ");
	gets(customer1.email_pengunjung1);	
	printf("Password      : ");
	gets(customer1.password1);
    printf("Customer Name : ");
	gets(customer1.nama_pengunjung);    
	printf("ID Number     : ");
	gets(customer1.noID);	
	printf("Phone Number  : ");
	gets(customer1.noHP);    
	printf("Addres        : ");
	gets(customer1.alamat);    
	printf("Gender        : ");
	gets(customer1.jenis_kelamin);
	printf("===========================================================================================\n");
    printf("\n");
	
	printf("If Your Data is Not Correct, Please Fill it in Again [Y/N]: ");
	scanf("%c", data_correct);
}

int main(){
	isi_data();
}
