#include "bnrw.h"

void cekcek(char arr1[][100], char arr2[][100]){//untuk mengecek anagram
	int i,j,k;
	cek1=0;
	cek2=0;

	
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr1[i]);j++){
			cek1=cek1+arr1[i][j];
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<strlen(arr2[i]);j++){
			cek2=cek2+arr2[i][j];
		}
	}
	
}

void cekfinal(char arr1[][100]){//untuk mengecek raja while
	
	int i,j;
	if(n==2){
		raja1=strcmp(arr1[0], "raja");
		raja2=strcmp(arr1[1], "while");
	}else{
		raja1=1;
		raja2=1;
	}
	
	
}

void cetak(char arr1[][100]){//untuk mencetak
	int i;
	if(raja1==0 && raja2==0 && cek1==cek2){
		printf("Ini Makam Raja While!\n");
	}
	else if(cek1==cek2){
		printf("Anda Menemukan Makam ");
		for(i=0;i<n;i++){
			printf("%s", arr1[i]);
			if(i!=n-1){
				printf(" ");
			}
		}
		printf("!\n");
	}else{
		printf("Pemilik Makam Tidak Ditemukan.\n");
	}
}




/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Evaluasi 2 dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/