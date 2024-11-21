#include <stdio.h>
#include <string.h>

int main (){
	int n, i, j, k, l;
	scanf("%d", &n); //untuk mengetahui berapa kata yang ingin diinput
	char arr[n][50];
	int max=0;
	int spasi=0;
	
	for(i=0;i<n;i++){ //untuk mengisi array
		scanf("%s", &arr[i]);
	}
	
	for(i=0;i<n;i++){ //untuk mengetahui kata terpanjang
		if(max<strlen(arr[i])){
			max=strlen(arr[i]);
		}
	}
	
	for(i=0;i<n;i++){
		if(i%2==0){//untuk menampilkan array indeks ganjil
			spasi=max-strlen(arr[i]);//untuk mencari spasinya
			for(j=0;j<spasi;j++){
				printf(" ");
			}
				printf("%s\n", arr[i]);
		}else{//untuk menampilkan array indeks genap
			printf("%s\n", arr[i]);
		}
	}
	
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Quiz 2
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/