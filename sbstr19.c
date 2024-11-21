#include <stdio.h>
#include <string.h>

int main (){
	char str1[100]; //membuat array 1 untuk menampung masukan user
	char str2[100]; //membuat array 1 untuk menampung masukan user
	scanf("%s", &str1); //meminta masukan user untuk mengisi array 1
	scanf("%s", &str2); //meminta masukan user untuk mengisi array 2
	
	int l1 = strlen(str1); //untuk menampung panjang dari array 1
	int l2 = strlen(str2); //untuk menampung panjang dari array 2
	int start, i;
	int j=0;
	
	if(l1>=l2){ //kondisi jika array1 lebih panjang
		start=l1-l2;
		for(i=start;i<l1;i++){
			str1[i]=str2[j];
			j++;
		}
		
		for(i=0;i<l1;i++){
			printf("%c", str1[i]);
		}
	}else{ //kondisi jika array2 lebih panjang
		start=l2-l1;
		for(i=start;i<l2;i++){
			str2[i]=str1[j];
			j++;
		}
		
		for(i=0;i<l2;i++){
			printf("%c", str2[i]);
		}
	}
	printf("\n");
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Quiz 2
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/