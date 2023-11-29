
#include<stdio.h>
#include <locale.h>
 int main()
 {
 	setlocale(LC_ALL, "Turkish");
 	int uzunluk, genislik, alan, cevre;
 
    printf("Uzunluk : ");
    scanf("%d", &uzunluk);
 
    printf("Genişlik : ");
    scanf("%d", &genislik);
 
    alan = uzunluk * genislik;
    printf("\nAlan : %d", alan);
 }
