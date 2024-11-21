#include "prfnhd19.h"

int main(){
	int n, i;//untuk iterator
	scanf("%d", &n);//meminta berapa panjang array
	
	char arrInput[n][100];//untuk menampung input array user
	for(i=0;i<n;i++){//meminta masukan array
		scanf("%s", &arrInput[i]);
	}
	

	
	cari(n, arrInput);
	int maksimum=maks(n);
	cetak(maksimum);
	
	return 0;
}

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi UAS
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/