#include <stdlib.h>
#include <stdio.h>

int main(){
	int a, b, c;
	int min1, min2, min3, min4, min5, min6, min7, min8, min9, min10, min11;
	int det_min1, det_min2, det_min3, det_min4, det_min5, det_min6, det_min7, det_min8, det_min9, det_min10, det_min11;
	int determinant;
	int matrix[3][3];
	int nilai[2][3] = {1, 2, 3, 4, 5, 6,};
	
	printf("Put Your Number: \n");
	
	for(a = 0; a < 3; a++){
		for(b = 0; b < 3; b++){
			printf("[%d][%d] = ", a, b);
			scanf("%d", &matrix[a][b]);
		}
	}
	
	for(a = 0; a < 3; a++){
		for(b = 0; b < 3; b++){
			printf(" %d ", matrix[a][b]);
		}
	printf("\n\n");
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}