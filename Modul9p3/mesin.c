#include "header.h"

void cek (int n, char arrnama[][50], char arrgenre[][50]){
	int i;
	for(i=0;i<n;i++){
		if(strcmp(arrgenre[i], "moba") == 0){
			strcpy(arrmoba[j], arrnama[i]);
			j++;
		}else if(strcmp(arrgenre[i], "fps") == 0){
			strcpy(arrfps[k], arrnama[i]);
			k++;
		}else if(strcmp(arrgenre[i], "racing") == 0){
			strcpy(arrracing[l], arrnama[i]);
			l++;
		}else if(strcmp(arrgenre[i], "br") == 0){
			strcpy(arrbr[m], arrnama[i]);
			m++;
		}
	}
}


void cetak(){
	int i;
	printf("========MOBA========\n");
	if(j!=0){
		for(i=1;i<=j;i++){
			printf("%d. %s\n", i, arrmoba[i-1]);
		}
	}else{
		printf("Tidak ada data.\n");
	}
	printf("========FPS========\n");
	if(k!=0){
		for(i=1;i<=k;i++){
			printf("%d. %s\n", i, arrfps[i-1]);
		}
	}else{
		printf("Tidak ada data.\n");
	}
	printf("========RACING========\n");
	if(l!=0){
		for(i=1;i<=l;i++){
			printf("%d. %s\n", i, arrracing[i-1]);
		}
	}else{
		printf("Tidak ada data.\n");
	}
	printf("========Battle Royale========\n");
	if(m!=0){
		for(i=1;i<=m;i++){
			printf("%d. %s\n", i, arrbr[i-1]);
		}
	}else{
		printf("Tidak ada data.\n");
	}
}