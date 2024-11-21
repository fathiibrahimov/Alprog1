#include "prfpst19.h"

int main(){
	int n, i, j;//untuk iterator
	scanf("%d", &n);//meminta berapa panjang array
	
	char arrInput[n][100];//untuk menampung input array user
	for(i=0;i<n;i++){//meminta masukan array
		scanf("%s", &arrInput[i]);
	}
	for(i=0;i<100;i++){
		for (j=0;j<100;j++){
			arrVokal[i][j]='\0';
		}
	}
	
	cariSpasi(n, arrInput);
	cariVokal(n, arrInput);
	cetak(n, arrInput);
	
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi UAS
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/