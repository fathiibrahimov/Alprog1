#include "arint19.h"

void masuk(){
	int i;
	scanf("%d", &n);//meminta masukan user untuk banyaknya angka
	
	for(i=0;i<n;i++){//meminta masukan user untuk mengisi array
		scanf("%d", &arr1[i]);
	}
	
	scanf("%d", &m);//meminta masukan user untuk mengetahui angka kelipatan
}

int cek1(){
	int i;
	int cakcek=0;//menampung jumlah berapa yang kelipatan
	int jalan=0;//sebagai penunjuk harus masuk ke mana angka yang kelipatan
	int benar;//untuk mengetahui apakah memenuhi syarat
	
	for(i=0;i<n;i++){
		if(arr1[i]%m==0){//memasukkan angka yang kelipatan sekaligus mengecek berapa angka yang kelipatan
			cakcek++;
			arr2[jalan]=arr1[i];
			jalan++;//sebagai penunjuk harus masuk ke mana angka yang kelipatan
		}
	}
	
	if(cakcek>=3){//jika angkanya lebih dari 3
		benar=1;
	}else{//jika kurang dari 3 angkanya
		benar=0;
	}
	
	return benar;
}

void cetak(int benar){//prosedur untuk mencetak
	int i;//iterator
	
	if(benar==0){//jika tidak memenuhi syarat
		printf("tidak memenuhi syarat\n");
	}else{//jika memenuhi syarat
		for(i=0;i<3;i++){
			if(i!=2){//mencetak yang bukan akhir
				printf("%d ", arr2[i]);
			}else{//mencetak angka terakhir
				printf("%d\n", arr2[i]);
			}
		}
	}
}

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Remedial Alpro 1
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/