#include <stdlib.h>
#include <stdio.h>

// void Segitiga_Siku_1(){
	// int n = 8;
	// int c;
	// int d;
	
	// for(c = 0; c < n; c++){
		// for (d = 0; d < c; d++){
			// printf("*");
		// }
		// printf("\n");
	// }	
	// printf("\n");
// }

// void Segitiga_Siku_2(){
	// int n = 8;
	// int e;
	// int f;
	
	// for(e = 0; e < n; e++){
		// for (f = n; f > e; f--){
			// printf("*");
		// }
		// printf("\n");
	// }	
	// printf("\n");
// }

// void Segitiga_Siku_3(){
	// int n = 8;
	// int g;
	// int h;
	// int i;
	
	// for(g = 1; g <= n; g++){
		// for (h = 1; h < g; h++){
			// printf(" ");
		// }
		// for(i = n; i >= h; i--){
			// printf("*");	
		// }
		// printf("\n");
	// }	
	// printf("\n");
// }

// void Segitiga_Siku_4(){
	// int n = 8;
	// int j;
	// int k;
	// int l;
	
	// for(j = 1; j <= n; j++){
		// for (k = n; k > j; k--){
			// printf(" ");
		// }
		// for(l = 1; l <= k; l++){
			// printf("*");	
		// }
		// printf("\n");
	// }	
	// printf("\n");
// }

// void Segitiga_SamaKaki_1(){
	// int n = 8;
	// int m;
	// int o;
	// int p;
	
	// for(m = 1; m <= n; m++){
		// for (o = n; o > m; o--){
			// printf(" ");
		// }
		// for(p = 1; p <= (2*m - 1); p++){
			// printf("*");	
		// }
		// printf("\n");
	// }	
	// printf("\n");
// }

// void Segitiga_SamaKaki_2(){
	// int n = 8;
	// int q;
	// int r;
	// int s;
	
	// for(q = 1; q <= n; q++){
		// for (r = 1; r < q; r++){
			// printf(" ");
		// }
		// for(s = n; s >= (2*q - n); s--){
			// printf("*");	
		// }
		// printf("\n");
	// }	
	// printf("\n");
// }

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