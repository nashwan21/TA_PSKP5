#include <stdlib.h>
#include <stdio.h>

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
	PohonCemara_1();
	PohonCemara_2();
	PohonCemara_3();
	Batang_PohonCemara();
}