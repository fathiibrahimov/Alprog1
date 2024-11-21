#include "spl19.h"

void masuk(){//prosedur untuk meminta masukan user
	int i;//iterator
	scanf("%d", &n);//meminta masukan user untuk n
	
	for(i=0;i<n;i++){//meminta masukan user untuk array sejumlah n
		scanf("%d", &arr1[i]);
	}
	
	scanf("%d %d", &a, &b);//meminta barisnya
	
}

void cek1(){//untuk mengecek
	int arrcek[4][n/4];//menampung array sementara
	int i,j;//iterator
	int aa=a-1;//baris dikurangi 1
	int bb=b-1;//baris dikurangi 1
	int count=0;//untuk menghitung
	
	for(i=0;i<4;i++){//array ditampung ke arrcek
		for(j=0;j<n/4;j++){
			arrcek[i][j]=arr1[count];
			count++;
		}
	}
	
	count=0;
	for(i=0;i<n/4;i++){//array dicek
		if(arrcek[aa][i]==arrcek[bb][i]){
			count++;
		}
	}
	
	if(count==n/4){//jika sama
		sama=1;
	}else{
		sama=0;
	}
}

void cetak(){//prosedur untuk mencetak
	if(sama==1){
		printf("sama\n");
	}else{
		printf("tidak sama\n");
	}
}


/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Quiz 3
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/