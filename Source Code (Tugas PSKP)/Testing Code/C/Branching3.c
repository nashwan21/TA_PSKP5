#include <stdlib.h>
#include <stdio.h>

int main(){
	char a[30];
	char b[30];
	char c[30];
	char d[30];

	printf("Masukkan A: ");
	fgets(a, sizeof(a), stdin);
	printf("Masukkan B: ");
	fgets(b, sizeof(b), stdin);
	printf("Masukkan C: ");
	fgets(c, sizeof(c), stdin);
	printf("Masukkan D: ");
	fgets(d, sizeof(d), stdin);

	printf("A: %s\n", a);
	printf("B: %s\n", b);
	printf("C: %s\n", c);
	printf("D: %s\n", d);
	printf("\n");

	if((a == b) && (c == d)){
		printf("Benar\n");
	}else{
		printf("Salah\n");
	}
}
