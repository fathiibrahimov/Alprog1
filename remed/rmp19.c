#include "rmp19.h"

void masuk(){//prosedur untuk meminta masukan user
	int i;//iterator
	scanf("%d", &n);//meminta masukan banyaknya kata
	for(i=0;i<n;i++){//meminta masukan kata
		scanf("%s", arr1[i]);
	}
}

void cek1(){//prosedur untuk mencari huruf yang akan diambil
	int i;
	
	for(i=0;i<n;i++){
		if(strlen(arr1[i])>i){//jika ada hurufnya
			arr2[i]=arr1[i][i];
		}else{//jika tidak ada hurufnya
			arr2[i]='_';
		}
	}
}

void cetak(){//prosedur untuk mencetak
	int i;//iterator
	int j;
	int space=0;//menghitung spasinya
	
	masuk();//memanggil prosedur masuk
	cek1();//memanggil prosedur cek1
	
	for(i=0;i<n;i++){//untuk mencetak huruf
		for(j=0;j<space;j++){//untuk mencetak spasi
			printf(" ");
			
		}
		printf("%c\n", arr2[i]);
		space++;
	}
	
}

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Remedial Alpro 1
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/