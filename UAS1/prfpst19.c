#include "prfpst19.h"

void cariSpasi(int n, char arrInput[][100]){//prosedur untuk mencari berapa spasinya
	int i, j, k;//untuk iterator
	char data[10]={'a','i','u','e','o','A','I','U','E','O'};//untuk mencari vokalnya
	
	for(i=0;i<100;i++){//mengosongkan array untuk menampung nilai spasi
		arrSpasi[i]=0;
	}
	
	for(i=0;i<n;i++){//mencari berapa spasinya
		for(j=0;j<strlen(arrInput[i]);j++){
			for(k=0;k<10;k++){
				if(arrInput[i][j]==data[k]){
					arrSpasi[i]=arrSpasi[i]+1;
				}
			}
		}
	}
}

void cariVokal(int n, char arrInput[][100]){
	int i, j, k;//untuk iterator
	int a=0;
	char data[10]={'a','i','u','e','o','A','I','U','E','O'};//untuk mencari vokalnya
	for(i=0;i<n;i++){//mencari berapa spasinya
		a=0;
		for(j=0;j<strlen(arrInput[i]);j++){
			
			for(k=0;k<10;k++){
				if(arrInput[i][j]==data[k]){
					arrVokal[i][a]=data[k];
					a++;
				}
			}
		}
	}
}

void cetak(int n, char arrInput[][100]){
	int i,j;
	for(i=0;i<n;i++){
		if(arrSpasi[i]!=0){//jika tidak ada vokalnya
			printf("%s", arrVokal[i]);
			for(j=0;j<arrSpasi[i];j++){
				printf(" ");
			}
			printf("%s", arrInput[i]);
			printf("\n");
		}else{
			printf("%s", arrInput[i]);
			printf("\n");
		}
	}
	
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi UAS
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/