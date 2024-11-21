#include <stdio.h>

int main(){
	//deklarasi variabel
	int angka;
	
	printf("masukkan Angka : ");
	//meminta user masukkan nilai ke variabel Angka
	scanf("%d",&angka);
	
	//pemilihan lebih dari 2 kondisi
	if(angka <20){
		printf("Nilainya lebih kecil dari 20\n");
	}if(angka <50){
		printf("Nilainya lebih kecil dari 50\n");
	}if(angka <75){
		printf("Nilainya lebih kecil dari 75\n");
	}
	
	return 0;
}