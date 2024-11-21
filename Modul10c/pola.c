#include "pola.h"

void pola(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
}

void tulisArrayInt(int n, int arr[n]){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n", arr[i]);
	}
}

int jumlahA(char str[]){
	int i, j = 0;
	
	for(i=0;i<strlen(str);i++){
		if((str[i] == 'a') || (str[i] == 'A')){
			j++;
		}
	}
	
	return j;
}

int tambah(int a, int b){
	int hasil = a + b;
	return hasil;
	
}
//atau
/*
int tambah (int a, int b){
	return (a+b);
}
*/