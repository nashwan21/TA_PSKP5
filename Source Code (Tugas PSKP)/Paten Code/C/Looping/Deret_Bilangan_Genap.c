#include <stdlib.h>
#include <stdio.h>

int main(){
	int b;
	int NIM = 24;
	
	printf("Deret Bilangan Genap 124 - 0 (100 + NIM. NIM Saya Adalah 24). Angka dimulai Dari 124 Hingga 2\n");
	for(b = 100+NIM; b > 0; b -= 2){
		printf("%d ", b);
	}
	printf("\n\n");
}