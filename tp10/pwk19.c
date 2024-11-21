#include "pwk19.h"

int banding(int palindrom[][100], int p, int n){//fungsi untuk membandingkan
	char temp1[100][100];
	char temp2[100][100];
	int i,j;
	int kompare;
	
	for(i=0;i<n;i++){
		for(j=0;j<panjangBiner[i];j++){
			temp1[i][j]=arrBiner[i][j]+'0';
			temp2[i][j]=palindrom[i][j]+'0';
		}
	}
	
	kompare=strcmp(temp1[p], temp2[p]);
	return kompare;
}

void biner(int kodeWarga[], int n){//prosedur untuk mencari binernya
	int i;
	int j=0;
	int temp=0;
	for(i=0;i<n;i++){
		temp=kodeWarga[i];
		while(temp>0){
			arrBiner[i][j]=temp%2;
			temp=temp/2;
			j++;	
		}
		panjangBiner[i]=j;
		j=0;
	}
}

void cekGanap(int n){//prosedur untuk mencari ganjil genap biner
	int i, j;
	
	for(i=0;i<100;i++){
		distrik[i]=0;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<panjangBiner[i];j++){
			if (arrBiner[i][j]==1){
				distrik[i]=distrik[i]+1;
			}
		}
	}
	
}


void cekDistrik(int n, char arrWarga[][100]){//prosedur untuk mencari distriknya
	cekGanap(n);
	int i, j, k;
	a = 0;
	b = 0;
	c = 0;
	int cekP[n];
	
	int palindrom[100][100];
	for(i=0;i<n;i++){
		for(j=panjangBiner[i]-1, k=0;j>=0;j--, k++){
			palindrom[i][k]=arrBiner[i][j];
		}
	}
	

	
	for(i=0;i<n;i++){
		cekP[i]=banding(palindrom, i, n);
	}
	
	for(i=0;i<n;i++){
		if(cekP[i]==0){
			strcpy(distrikDua[a], arrWarga[i]);
			a++;
		}else{
			if(distrik[i]%2==0){
				strcpy(distrikFor[b], arrWarga[i]);
				b++;
			}else if(distrik[i]%2==1){
				strcpy(distrikDo[c], arrWarga[i]);
				c++;
			}
		} 
	}
	
}

void cetak(){//prosedur untuk mencetak
	int i;
	printf("=== Penghuni Distrik For ===\n");
	if(b==0){
		printf("Tidak Ada\n");
	}else{
		for(i=0;i<b;i++){
			printf("%s\n", distrikFor[i]);
		}
	}
	printf("\n");
	printf("=== Penghuni Distrik DoWhile ===\n");
	if(c==0){
		printf("Tidak Ada\n");
	}else{
		for(i=0;i<c;i++){
			printf("%s\n", distrikDo[i]);
		}
	}
	printf("\n");
	printf("=== Penghuni Kedua Distrik ===\n");
	if(a==0){
		printf("Tidak Ada\n");
	}else{
		for(i=0;i<a;i++){
			printf("%s\n", distrikDua[i]);
		}
	}
}

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas Evaluasi 10 dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/