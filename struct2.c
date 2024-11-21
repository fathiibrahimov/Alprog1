#include <stdio.h>

typedef struct{
	int panjang;
	int lebar;
	int tinggi;
	int lp;
	int volume;
}balok;

int main(){
	balok b;
	
	printf("masukkan panjang:\n");
	scanf("%d", &b.panjang);
	printf("masukkan lebar:\n");
	scanf("%d", &b.lebar);
	printf("masukkan tinggi:\n");
	scanf("%d", &b.tinggi);
	
	b.lp=((b.panjang*b.lebar)*2)+((b.panjang*b.tinggi)*2)+((b.lebar*b.tinggi)*2);
	b.volume=b.panjang*b.lebar*b.tinggi;
	
	printf("hasil dari penghitungannya adalah:\n");
	printf("luas permukaan: %d\n", b.lp);
	printf("volume: %d\n", b.volume);
	
	return 0;
}