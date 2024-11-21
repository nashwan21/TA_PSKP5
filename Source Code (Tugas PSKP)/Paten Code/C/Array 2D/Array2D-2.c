#include <stdlib.h>
#include <stdio.h>

int main(){
	int a, b, c;
	int matrix[3][3];
	
	int min_lap1, min_lap2, min_lap3;
	int det_min_lap1, det_min_lap2, det_min_lap3, det_min_lap4, det_min_lap5, det_min_lap6;
	int determinant_laplace;
	
	int det_sar1, det_sar2, det_sar3, det_sar4, det_sar5, det_sar6;
	int res_sar1, res_sar2;
	int determinant_sarrus;

	printf("Put Your Number: \n\n");
	
	for(a = 0; a < 3; a++){
		for(b = 0; b < 3; b++){
			printf("[%d][%d] = ", a, b);
			scanf("%d", &matrix[a][b]);
		}
	}
	printf("\n\n");
	
	printf("\n--------MATRIX A--------\n\n");
	
	
	for(a = 0; a < 3; a++){
		for(b = 0; b < 3; b++){
			printf("  %d ", matrix[a][b]);
		}
	printf("\n\n");
	}
	
	printf("\n\n");
	
	// Perhitungan determinan matriks menggunakan metode ekspansi laplace
	printf("===== Perhitungan Determinan Matriks Menggunakan Metode Ekspansi Laplace =====\n\n");
	det_min_lap1 = (matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]);
	det_min_lap2 = (matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]);
	det_min_lap3 = (matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]);
	
	min_lap1     = matrix[0][0] * det_min_lap1;
	min_lap2     = matrix[0][1] * det_min_lap2;
	min_lap3     = matrix[0][2] * det_min_lap3;
	
	determinant_laplace = min_lap1 - min_lap2 + min_lap3;
	
	printf("Solution Steps: \n");
	printf("Minor 1 = (%d x %d) - (%d x %d)   -->  %d\n", matrix[1][1], matrix[2][2], matrix[1][2], matrix[2][1], det_min_lap1);
	printf("Minor 2 = (%d x %d) - (%d x %d)   -->  %d\n", matrix[1][0], matrix[2][2], matrix[1][2], matrix[2][0], det_min_lap2);
	printf("Minor 3 = (%d x %d) - (%d x %d)   -->  %d\n\n", matrix[1][0], matrix[2][1], matrix[1][1], matrix[2][0], det_min_lap3);
	
	printf("|A|     = %d(%d) - %d(%d) - %d(%d)\n", matrix[0][0], det_min_lap1, matrix[0][1], det_min_lap2, matrix[0][2], det_min_lap3); 
	printf("|A|     = (%d) - (%d) - (%d)\n", min_lap1, min_lap2, min_lap3);
	printf("|A|     = %d\n", determinant_laplace);
	printf("Det(A)  = %d\n", determinant_laplace);
	printf("\n\n");
	
	// Perhitungan determinan matriks menggunakan metode sarrus
	printf("===== Perhitungan Determinan Matriks Menggunakan Metode Sarrus =====\n\n");
	det_sar1 = (matrix[0][0] * matrix[1][1] * matrix[2][2]);
	det_sar2 = (matrix[0][1] * matrix[1][2] * matrix[2][0]);
	det_sar3 = (matrix[0][2] * matrix[1][0] * matrix[2][1]);
	det_sar4 = (matrix[2][0] * matrix[1][1] * matrix[0][2]);
	det_sar5 = (matrix[2][1] * matrix[1][2] * matrix[0][0]);
	det_sar6 = (matrix[2][2] * matrix[1][0] * matrix[0][1]);
	
	res_sar1 = (det_sar1 + det_sar2 + det_sar3);
	res_sar2 = (det_sar4 + det_sar5 + det_sar6); 
	determinant_sarrus = res_sar1 - res_sar2;
	
	printf("Solution Steps: \n");
	printf("|A|    = (%d x %d x %d) + (%d x %d x %d) + (%d x %d x %d) - (%d x %d x %d) + (%d x %d x %d) + (%d x %d x %d)\n", 
	matrix[0][0], matrix[1][1], matrix[2][2], det_sar1, matrix[0][1], matrix[1][2], matrix[2][0], det_sar2,
	matrix[0][2], matrix[1][0], matrix[2][1], det_sar3, matrix[2][0], matrix[1][1], matrix[0][2], det_sar4,
	matrix[2][1], matrix[1][2], matrix[0][0], det_sar5, matrix[2][2], matrix[1][0], matrix[0][1], det_sar6);
	
	printf("|A|    = (%d + %d + %d) - (%d + %d + %d)\n", det_sar1, det_sar2, det_sar3, det_sar4, det_sar5, det_sar6);
	printf("|A|    = %d - %d\n", res_sar1, res_sar2);
	printf("|A|    = %d\n", determinant_sarrus);
	printf("Det(A) = %d\n", determinant_sarrus);
	printf("\n");
	
	system("PAUSE");
	return 0;
		
	/*
		|21  3  6|
		|22  4  7|
		|20  2  5|
		
		Indeks Array:
			matrix[0][0] = 21		setara dengan [1][1]
			matrix[0][1] =  3		setara dengan [1][2]
			matrix[0][2] =  6		setara dengan [1][3]
			matrix[1][0] = 22		setara dengan [2][1]
			matrix[1][1] =  4		setara dengan [2][2]
			matrix[1][2] =  7		setara dengan [2][3]
			matrix[2][0] = 20		setara dengan [3][1]
			matrix[2][1] =  2		setara dengan [3][2]
			matrix[2][2] =  5		setara dengan [3][3]
	*/
}