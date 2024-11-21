#include <stdlib.h>
#include <stdio.h>

// void Percobaan1(){
	// int a[4];
	// int c, d;
	// double b[3][3];
	
	// a[0] = 10;	
	// a[1] = 20;	
	// a[2] = 30;	
	// a[3] = 40;
	
	// printf("%d\n", a[0]);
	// printf("%d\n", a[1]);
	// printf("%d\n", a[2]);
	// printf("%d\n", a[3]);
// }

// void Percobaan2(){
	// for(c = 0; c < 3; c++){
		// for(d = 0; d < 3; d++){
			// b[c][d] = 0;
		// }
	// }
	
	// b[0][0] = 1;
	// b[1][1] = 1;
	// b[2][2] = 1;
	// printf("%lf %lf %lf\n", b[0][0], b[0][1], b[0][2]);
	// printf("%lf %lf %lf\n", b[1][0], b[1][1], b[1][2]);
	// printf("%lf %lf %lf\n", b[2][0], b[2][1], b[2][2]);	
// }

void Percobaan3(){
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
}

int main(){
	Percobaan3();
	system("PAUSE");
	return 0;
}