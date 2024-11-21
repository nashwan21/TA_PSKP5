#include <stdlib.h>
#include <stdio.h>

int main(){
	int  x = 100;
	char y = 'A';
	
	switch(x){
		case 10:
		printf("Halo Semuanya\n");
		break;
		
		case 20:
		printf("Halo Dunia\n");
		break;
		
		case 30:
		printf("Halo Adik-Adik\n");
		break;
		
		case 40:
		printf("Halo Mama dan Papa\n");
		break;
		
		default:
		printf("Tidak Ditemukan\n");
	}
	
	system("PAUSE");
	return 0;
}