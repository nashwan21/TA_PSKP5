#include <stdlib.h>
#include <stdio.h>

int main(){
	int a, b, c, d;
	int Determinant;
	int Matrix[10][10];
	
	printf("Masukkan Angka : \n");
	
	for(a = 0; a <= 1; a++){
		for(b = 0; b <= 1; b++){
			printf("A[%d][%d] = ", a + 1, b + 1);
			scanf("%d", &Matrix[a][b]);
		}
	}
	printf("\n\n");	
	
	printf("\n---MATRIX A---\n\n");
	
	
	for(a = 0; a <= 1; a++){
		for(b = 0; b <= 1; b++){
			printf("  %d  ", Matrix[a][b]);
		}
	printf("\n\n");
	}
	
	c = Matrix[0][0] * Matrix[1][1];
	d = Matrix[1][0] * Matrix[0][1];
	Determinant = c - d;
	printf("\n\nDet(A) = %d\n", Determinant);
	system("PAUSE");
	return 0;
}