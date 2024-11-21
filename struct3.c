#include <stdio.h>

typedef struct{
	int pembilang;
	int penyebut;
}pecahan;

int main(){
	pecahan p1,p2,p3;
	
	printf("masukkan pembilang 1:\n");
	scanf("%d", &p1.pembilang);
	printf("masukkan penyebut 1:\n");
	scanf("%d", &p1.penyebut);
	printf("masukkan pembilang 2:\n");
	scanf("%d", &p2.pembilang);
	printf("masukkan penyebut 2:\n");
	scanf("%d", &p2.penyebut);
	
	p3.pembilang=p1.pembilang*p2.pembilang;
	p3.penyebut=p1.penyebut*p2.penyebut;
	
	printf("hasil perkalian dua pecahan tersebut adalah:\n");
	printf("pembilang: %d\n", p3.pembilang);
	printf("penyebut: %d\n", p3.penyebut);
	
	return 0;
}