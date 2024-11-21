#include <stdio.h>

int main (){
	// Deklarasi Variabel
	int angka;
	
	printf("Masukkan Angka :");
	scanf("%d", &angka);
	
	//pemilihan satu kondisi
	if (angka >5){
		printf("Nilainya lebih besar dari 5 \n");
	}else{
		printf("Nilainya lebih kecil dari 5 \n");
	}
	
	return 0;
	
}