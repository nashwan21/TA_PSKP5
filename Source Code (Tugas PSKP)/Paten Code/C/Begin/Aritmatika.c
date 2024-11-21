#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int a = 10;
    int b = 20;
    int c, d;
    int hasil1 = a + b;
    int hasil2;

    printf("%d\n", hasil1);
    
    printf("Masukkan Angka 1: ");
    scanf("%d", &c);
    printf("Masukkan Angka 2: ");
    scanf("%d", &d);
    hasil2 = c + d;
    printf("Hasil 2: %d", hasil2);
}