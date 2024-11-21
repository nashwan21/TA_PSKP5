#include <stdlib.h>
#include <stdio.h>

int main(){
	int a;
	int NIM = 24;
	
	printf("Deret Bilangan Ganjil 0 - 124 (100 + NIM. NIM Saya Adalah 24). Angka dimulai Dari 1 Hingga 123\n");
	for(int a = 1; a < 100+NIM; a += 2){
		printf("%d ", a);
	}
	printf("\n\n");
}