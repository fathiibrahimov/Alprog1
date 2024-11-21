#include "GJRW19.h"

void cek(int n, char arrInput[][50]){//mengecek _
	int i;
	int j=0;
	for(i=0;i<n;i++){
		do{
			if(arrInput[i][j]=='_'){
				arrUnder[i]=j;
			}
			j++;
			}while(arrInput[i][j]!='_' || j<strlen(arrInput[i]));
		j=0;
	}
}


void tukar(int n, char arrInput[][50]){//menukar isi array yang genap dan ada _ nya
	int i,j;//untuk iterator
	int k=0;//untuk menghitung sampai sejauh mana penunjuk arraynya
	char arrCopy[50];//untuk menampung isi array sementara
	
	for(i=0;i<n;i++){
		strcpy(arrAwal[i], arrInput[i]);
	}

	for(i=0;i<n;i++){
		if(arrUnder[i]!=0){
			strcpy(arrCopy, arrInput[i]);
			for(j=arrUnder[i]+1;j<strlen(arrInput[i]);j++){
				arrInput[i][k]=arrCopy[j];
				k++;
			}
			arrInput[i][k]='_';
			k++;
			for(j=0;j<arrUnder[i];j++){
				arrInput[i][k]=arrCopy[j];
				k++;
			}	
		}
		k=0;
	}
}

//dienkrip sesuai ketentuan
void enkrip(int n, char arrInput[][50], char database[], char databaseA[], char vokal1[], char konsonan1[], char konsonanA[], char konsonanB[], char konsonanA2[]){
	int i, j, k;//untuk iterator
	for(i=0;i<n;i++){
		
		for(j=0;j<strlen(arrInput[i]);j++){
			if(j%2==0){//apabila indeks genap
				if(arrInput[i][j]=='_'){
					arrEnkrip[i][j]='_';
				}
				for(k=0;k<10;k++){
					if(arrInput[i][j]==vokal1[k]){
						arrEnkrip[i][j]=database[k];
					}
				}
				for(k=0;k<21;k++){
					if(arrInput[i][j]==konsonan1[k]){
						arrEnkrip[i][j]=arrInput[i][j]-3;
					}
				}
				for(k=0;k<21;k++){
					if(arrInput[i][j]==konsonanA[k]){
						arrEnkrip[i][j]=arrInput[i][j]-3;
					}
				}
			}else{//apabila indeks ganjil
				if(arrInput[i][j]=='_'){
					arrEnkrip[i][j]='_';
				}
				for(k=0;k<10;k++){
					if(arrInput[i][j]==vokal1[k]){
						arrEnkrip[i][j]=databaseA[k];
					}
				}
				for(k=0;k<21;k++){
					if(arrInput[i][j]==konsonan1[k]){
						arrEnkrip[i][j]=konsonan1[k];
					}
				}
				for(k=0;k<21;k++){
					if(arrInput[i][j]==konsonanA[k]){
						arrEnkrip[i][j]=konsonanA[k];
					}
				}			
			}			
		}
	}
}

void aman(int n){//cek apakah ascii nya ganjil atau genap
	int bahaya=0;//untuk menampung nilai ascii sementara
	int i, j;//untuk iterator
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arrEnkrip[i]);j++){
			bahaya=bahaya+arrEnkrip[i][j];//menghitung nilai asciinya
		}
		if(arrUnder[i]!=0){//apabila terdapat_, maka dikurangi 95
			arrBahaya[i]=bahaya-95;
		}else{
			arrBahaya[i]=bahaya;
		}
		bahaya=0;//reset tempat tampung ascii sementara
	}
}

void bahaya(int n){//memasukkan yang ganjil ke array bahaya dan yang genap ke array aman
	int i;//untuk iterator
	for(i=0;i<n;i++){
		if(arrBahaya[i]%2==0){//memasukkan array yang genap ke array aman
			strcpy(arrA[a], arrAwal[i]);
			a++;
		}else{//memasukkan array yang ganjil ke array bahaya
			strcpy(arrB[b], arrAwal[i]);
			b++;
		}
	}
}

void cetak(int n){//prosedur untuk mencetak sesuai output
	int i;//untuk iterator
	printf("======== Hasil ========\n");
	for(i=0;i<n;i++){//langsung mencetak array yang terenkripsi
		printf("%d. %s\n", i+1, arrEnkrip[i]);
	}
	printf("======== BERBAHAYA ========\n");
	if(b>0){//cek apakah ada isinya array bahaya itu
		for(i=0;i<b;i++){
			printf("%d. %s\n", i+1, arrB[i]);
		}
	}else{
		printf("Tidak ada data.\n");
	}
	printf("======== AMAN ========\n");
	if(a>0){//cek apakah ada isinya array aman itu
		for(i=0;i<a;i++){
			printf("%d. %s\n", i+1, arrA[i]);
		}
	}else{
		printf("Tidak ada data.\n");
	}
}