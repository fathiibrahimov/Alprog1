#include "prfnhd19.h"

void cari(int n, char arrInput[][100]){
	int i, j;
	
	for(i=0;i<100;i++){//mengosongkan array untuk menampung nilai max
		arrMax[i]=0;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arrInput[i]);j++){
			if(arrInput[i][0]==arrInput[i][j]){
				arrMax[i]=arrMax[i]+1;
			}
		}
		
	}
}

int maks(int n){//mencari yang paling besar
	int i;
	int max=0;
	for(i=0;i<n;i++){
		if(arrMax[i]>max){
			max=arrMax[i];
		}
	}
	
	
	return max;
}

void cetak(int maksimum){
	printf("%d\n", maksimum);
}

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi UAS
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/