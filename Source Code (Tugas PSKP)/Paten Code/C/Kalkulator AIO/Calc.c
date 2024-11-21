#include <stdio.h>
#include <stdlib.h>
// #include <iostream>

// using namespace std;

	float pi = 3.14159265358;
	int a;
	
	float Tinggi_segitiga;
	float Alas_segitiga;
	float Luas_segitiga;
	
	float Sisi_persegi;
	float Luas_persegi;
	
	float Panjang_rectangle;
	float Lebar_rectangle;
	float Luas_rectangle;
	
	float Sisi_kubus;
	float Volume_kubus;
	float Luas_permukaanKb;
	
	float Tinggi_tabung;
	float Lingkaran_tabung;
	float Volume_tabung;
	float Luas_permukaanTb;
	float Luas_selimutTb;
	
	float Kecepatan;
	float Waktu;
	float Jarak;
	
	float Massa;
	float Percepatan;
	float Gaya;
	
	float Tekanan_awal;
	float Tekanan_akhir;
	float Suhu_awal;
	float Suhu_akhir;
	
	float Frekuensi;
	float Omega;
	float Periode;
	
	float Daya;
	float Voltase;
	float Ampere;

void Luas_Segitiga(){
	printf("Tinggi        : ", Tinggi_segitiga);
	scanf("%f", &Tinggi_segitiga);
	printf("Alas          : ", Alas_segitiga);
	scanf("%f", &Alas_segitiga);
	Luas_segitiga = 0.5*(Alas_segitiga * Tinggi_segitiga);
	printf("Luas Segitiga : %.4f\n", Luas_segitiga);
}

void Luas_Persegi_Panjang(){
	printf("Panjang              : ", Panjang_rectangle);
	scanf("%f", &Panjang_rectangle);
	printf("Lebar                : ", Lebar_rectangle);
	scanf("%f", &Lebar_rectangle);
	Luas_rectangle = Panjang_rectangle * Lebar_rectangle;
	printf("Luas Persegi Panjang : %.4f\n", Luas_rectangle);
}

void Volume_Tabung(){
	printf("Tinggi         : ", Tinggi_tabung);
	scanf("%f", &Tinggi_tabung);
	printf("Radius         : ", Lingkaran_tabung);
	scanf("%f", &Lingkaran_tabung);
	Volume_tabung = pi * Tinggi_tabung * Lingkaran_tabung * Lingkaran_tabung;
	printf("Volume Tabung  : %.4f\n", Volume_tabung);
	
	Luas_permukaanTb = (2 * pi * Lingkaran_tabung * Tinggi_tabung) +(2 * pi * (Lingkaran_tabung)*(Lingkaran_tabung));
	printf("Luas Permukaan : %.4f\n", Luas_permukaanTb);
	
	Luas_selimutTb = 2 * pi * Lingkaran_tabung * Tinggi_tabung;
	printf("Luas Selimut   : %.4f\n", Luas_selimutTb);
}

void Luas_Persegi(){
	printf("Panjang Sisi : ", Sisi_persegi);
	scanf("%f", &Sisi_persegi);
	Luas_persegi = (Sisi_persegi) * (Sisi_persegi);
	printf("Luas Persegi : %.4f\n", Luas_persegi);
}

void Volume_Kubus(){
	printf("Panjang Rusuk  : ", Sisi_kubus);
	scanf("%f", &Sisi_kubus);
	Volume_kubus = (Sisi_kubus) * (Sisi_kubus) * (Sisi_kubus);
	printf("Volume Kubus   : %.4f\n", Volume_kubus);
	
	Luas_permukaanKb = 6 * Sisi_kubus * Sisi_kubus;
	printf("Luas Permukaan : %.4f\n", Luas_permukaanKb);
}

void Kelajuan(){
	printf("Waktu      : ", Waktu);
	scanf("%f", &Waktu);	
	printf("Jarak      : ", Jarak);
	scanf("%f", &Jarak);
	Kecepatan = Jarak/Waktu;
	printf("Kelajuan   : %.4f\n", Kecepatan);
}

void Hukum_Newton2(){
	printf("Massa      : ", Massa);
	scanf("%f", &Massa);	
	printf("Percepatan : ", Percepatan);
	scanf("%f", &Percepatan);
	Gaya = Massa * Percepatan;
	printf("Gaya       : %.4f\n", Gaya);
//	cout <<"Gaya       : " << Gaya << " Newton" << endl;
}

void Gay_Lussac(){
	printf("Suhu Mutlak Mula-Mula : ", Suhu_awal);
	scanf("%f", &Suhu_awal);	
	printf("Suhu Mutlak Akhir     : ", Suhu_akhir);
	scanf("%f", &Suhu_akhir);	
	printf("Tekanan Mula-Mula     : ", Tekanan_awal);
	scanf("%f", &Tekanan_awal);	
	Tekanan_akhir = (Tekanan_awal * Suhu_akhir)/Suhu_awal;
	printf("Tekanan Akhir         : %.4f\n", Tekanan_akhir);
}

void Frekuensi_Sudut(){
	printf("Frekuensi       : ", Frekuensi);
	scanf("%f", &Frekuensi);
	Omega = 2 * pi * Frekuensi;
	printf("Kecepatan Sudut : %.4f rad/s\n", Omega);
	
	Periode = 1/Frekuensi;
	printf("periode         : %.4f detik\n", Periode);
}

void Daya_Listrik(){
	printf("Tegangan : ", Voltase);
	scanf("%f", &Voltase);	
	printf("Arus     : ", Ampere);
	scanf("%f", &Ampere);
	Daya = Voltase * Ampere;
	printf("Daya     : %.4f\n", Daya);
}

int main(){
	
//	system("Color F1");
//	printf("============================== ALL IN ONE CALCULATOR ==============================\n\n");
	printf("**********************************************************************************************\n");
	printf("\t\t\t           ALL IN ONE CALCULATOR \n");
	printf("**********************************************************************************************\n\n");
	printf("-----------------------                                              -----------------------\n");
	printf("     Mathematics                                                           Physics\n");
	printf("----------------------                                               -----------------------\n");
	printf("1. Triangle Area                                               6.  Velocity\n");
	printf("2. Square Area                                                 7.  Newton's Second Law\n");
	printf("3. Rectangle Area                                              8.  Gay-Lussac's Law\n");
	printf("4. Cube Volume                                                 9.  Angular Frequency\n");
	printf("5. Cylinder Volume                                             10. Power (Electrical)\n");
	printf("\n11. Quit\n");
	
	do{
		printf("\nChoose Your Calculate: ");
		scanf("%d", &a);
	
		switch(a){
			case 1:
			printf("-----------------------\n");
			printf("    Triangle Area\n");
			printf("-----------------------\n");
			Luas_Segitiga();
			break;
			
			case 2:
			printf("-----------------------\n");
			printf("    Square Area\n");
			printf("-----------------------\n");
			Luas_Persegi();
			break;		
			
			case 3:
			printf("-----------------------\n");
			printf("  Rectangle Area\n");
			printf("-----------------------\n");
			Luas_Persegi_Panjang();
			break;		
			
			case 4:
			printf("-----------------------\n");
			printf("    Cube Volume\n");
			printf("-----------------------\n");
			Volume_Kubus();
			break;	
			
			case 5:
			printf("-----------------------\n");
			printf("   Cylinder Volume\n");
			printf("-----------------------\n");
			Volume_Tabung();
			break;
			
			case 6:
			printf("-----------------------\n");
			printf("      Velocity\n");
			printf("-----------------------\n");
			Kelajuan();
			break;
				
			case 7:
			printf("-----------------------\n");
			printf("Newton's Second Law\n");
			printf("-----------------------\n");
			printf("Hukum Newton 2 mengacu pada keadaan suatu benda yang bergerak, yang juga memperhitungkan massa\n");
			printf("benda dan gaya yang bekerja pada benda tersebut. Hal ini menunjukkan bahwa percepatan suatu benda\n");			
			printf("berbanding lurus dengan gaya total yang bekerja pada benda, sedangkan massanya berbanding terbalik\n");
			printf("dengan percepatan benda.\n\n");
			Hukum_Newton2();
			break;				
			
			case 8:
			printf("-----------------------\n");
			printf("  Gay-Lussac's Law\n");
			printf("-----------------------\n");
			printf("Pada suhu dan tekanan yang sama, volume gas-gas yang bereaksi dengan volume gas-gas hasil reaksi\n");
			printf("membentuk perbandingan bulat dan sederhana. Menurut hukum Gay-Lussac, rasio tekanan dan suhu awal\n");				
			printf("sama dengan tekanan dan suhu akhir gas pada massa dan volume konstan\n\n");		
			Gay_Lussac();
			break;	
			
			case 9:
			printf("-----------------------\n");
			printf("  Angular Frequency\n");
			printf("-----------------------\n");
			Frekuensi_Sudut();
			break;		
			
			case 10:
			printf("-----------------------\n");
			printf("  Power (Electrical)\n");
			printf("-----------------------\n");
			Daya_Listrik();
			break;
			
			default:
			printf("No Your Menu Selected\n");
			break;
		}
	} while(a != 11);
}