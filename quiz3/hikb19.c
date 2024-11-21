#include "hikb19.h"

void masuk(){//prosedur untuk meminta masukan
	int i;//untuk iterator
	scanf("%d", &n);//untuk meminta masukan untuk n
	
	for(i=0;i<n;i++){//meminta masukan untuk arraynya
		scanf("%s", &arr[i]);
	}
	
	scanf("%d", &m);//meminta masukan untuk m
}

void cek(){//untuk mengubah yang tidak ada hurufnya menjadi _ dan mengisi sesuai huruf yang ada
	int i;
	int j;
	
	for(i=0;i<n;i++){
		if(m>strlen(arr[i])){//jika tidak ada hurufnya
			arr2[i]='_';
		}else{//jika ada hurufnya
			arr2[i]=arr[i][m-1];
		}
	}
}

void cek2(){//untuk mengecek apakah tidak ada hurufnya semua alias output tidak ada
	int i;
	cekcek=0;
	int count=0;
	
	for(i=0;i<n;i++){
		if(arr2[i]=='_'){
			count++;
		}
	}
	
	if(count==n){
		cekcek=1;
	}
}

void cetak(){//prosedur untuk mencetak
	int i;
	
	if(cekcek==0){//bila ada hurunya
		for(i=0;i<n;i++){
			if(i!=n-1){//mencetak huruf beserta spasi
				printf("%c ", arr2[i]);
			}else{//mencetak huruf terakhir
				printf("%c\n", arr2[i]);
			}
		}
	}else{//kalau tidak ada hurufnya
		printf("tidak ada\n");
	}
}

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Quiz 3
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/