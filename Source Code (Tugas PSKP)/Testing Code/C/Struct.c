#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct buah{
	char warna[30];
	char rasa[30];
};

struct buah nanas;

int main(){
	strcpy(nanas.rasa, "Asam");
	strcpy(nanas.warna, "Kuning");
	
	printf("%s", nanas.rasa);
}
