#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char Nama_pelanggan[100];
	char Kota[100];
	char Kode_pos[100];
	char Nomor_telepon[100];

/*	float Harga_barang;
	float Nominal_uang;
	float Kuantitas;	
*/
	
	int Harga_barang;
	int Nominal_uang;
	int Kuantitas;
	
/*	int Diskon_jumlah = (100/100 - Diskon_input) * (Harga_barang * Kuantitas);
	int Jumlah_akhir = (100/100 - Diskon_input) * (Harga_barang * Kuantitas);
	int Kembalian = Nominal_uang - ((100/100 - Diskon_input) * (Harga_barang * Kuantitas));
*/

	float a;
	float b = 100;
	float Diskon_input = a/b;
	float Diskon_jumlah = (Diskon_input) * (Harga_barang * Kuantitas);
	float Jumlah_akhir = (Harga_barang * Kuantitas) - Diskon_jumlah;
	float Kembalian = Nominal_uang - Jumlah_akhir;

/*
	int a;
	int b = 100;
	int Diskon_input = a/b;
	int Diskon_jumlah = (Diskon_input) * (Harga_barang * Kuantitas);
	int Jumlah_akhir = (Harga_barang * Kuantitas) - Diskon_jumlah;
	int Kembalian = Nominal_uang - Jumlah_akhir;
*/
	
//	system("Color F5");
//	printf("============================== Hi-Tech Authorized Store ==============================\n\n");
	printf("**************************************************************************************\n");
	printf("\t\t\t       Hi-Tech Authorized Store\n");
	printf("**************************************************************************************\n\n");
	printf("====================================== INVOICE =======================================\n");
	printf("Jl. H. Baping GG. Bhakti II No. 109\t\t\t      INVOICE No. 1025365458\n");
	printf("Susukan, Ciracas, East Jakarta, 13750\t\t\t      DATE: 3 October 2024\n");
	printf("Phone 0895391515458\n\n");
	
	printf("Nama Pelanggan: ");
	scanf(" %s", Nama_pelanggan);
	printf("Kota Tinggal  : ");
	scanf(" %s", Kota);
	printf("Kode Pos      : ");
	scanf(" %s", Kode_pos);	
	printf("Nomor Telepon : ");
	scanf(" %s", Nomor_telepon);
	printf("\n");
	
//	printf("-------Robot Bluetooth Receiver 5.0-------\n");
	
	printf("Harga Barang: ");
	scanf("%d", &Harga_barang);
	printf("Kuantitas   : ");
	scanf("%d", &Kuantitas);
	printf("\n");
	
	printf("Nominal Uang          : Rp");
	scanf("%d", &Nominal_uang);
	printf("Diskon (persen)       : ");
	Diskon_input = a/b;
	scanf("%f", &a);
	
	Diskon_input = a/b;
	Diskon_jumlah = (Diskon_input) * (Harga_barang * Kuantitas);
	printf("Harga yang Didiskon   : Rp%.2f\n", Diskon_jumlah);
	
	Jumlah_akhir = (Harga_barang * Kuantitas) - Diskon_jumlah;
	printf("Jumlah yang Dibayarkan: Rp%.2f\n", Jumlah_akhir);
	Kembalian = Nominal_uang - Jumlah_akhir;
	printf("Kembalian             : Rp%.2f\n", Kembalian);
	
	return 0;
}
