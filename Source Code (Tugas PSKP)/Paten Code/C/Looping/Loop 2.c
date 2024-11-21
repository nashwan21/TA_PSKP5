#include <stdlib.h>
#include <stdio.h>

void Deret_BilanganGanjil(){
	int a;
	int NIM = 24;
	
	printf("Deret Bilangan Ganjil 0 - 124 (100 + NIM. NIM Saya Adalah 24). Angka dimulai Dari 1 Hingga 123\n");
	for(int a = 1; a < 100+NIM; a += 2){
		printf("%d ", a);
	}
	printf("\n\n");
}

void Deret_BilanganGenap(){
	int b;
	int NIM = 24;
	
	printf("Deret Bilangan Genap 124 - 0 (100 + NIM. NIM Saya Adalah 24). Angka dimulai Dari 124 Hingga 2\n");
	for(b = 100+NIM; b > 0; b -= 2){
		printf("%d ", b);
	}
	printf("\n\n");
}

void PohonCemara_1(){
	int n = 15;
	int m;
	int o;
	int p;
	
	for(m = 1; m <= n; m++){
		for (o = n; o > m; o--){
			printf(" ");
		}
		for(p = 1; p <= (2*m - 1); p++){
			printf("*");	
		}
		printf("\n");
	}	
	// printf("\n");
}

void PohonCemara_2(){
	int n = 15;
	int m;
	int o;
	int p;
	
	for(m = 3; m <= n; m++){
		for (o = n; o > m; o--){
			printf(" ");
		}
		for(p = 1; p <= (2*m - 1); p++){
			printf("*");	
		}
		printf("\n");
	}	
	// printf("\n");
}

void PohonCemara_3(){
	int n = 15;
	int m;
	int o;
	int p;
	
	for(m = 5; m <= n; m++){
		for (o = n; o > m; o--){
			printf(" ");
		}
		for(p = 1; p <= (2*m - 1); p++){
			printf("*");	
		}
		printf("\n");
	}	
	// printf("\n");
}

void Batang_PohonCemara(){
	int n = 15;
	int g;
	
	for(g = 1; g <= n; g++){
		printf("\t    *****\n");
	}
	printf("\n");
}

int main(){
	Deret_BilanganGanjil();
	Deret_BilanganGenap();
	PohonCemara_1();
	PohonCemara_2();
	PohonCemara_3();
	Batang_PohonCemara();
}