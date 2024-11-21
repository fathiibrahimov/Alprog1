#include "TMD.h"

int main(){
	int i, j;//untuk iterator
	scanf("%d", &n);//meminta masukan user buat banyak angka
	int arrAngka[n];//buat nampung masukan angka user
	for(i=0;i<n;i++){//minta masukan buat angkanya
		scanf("%d", &arrAngka[i]);
	}
	scanf("%d", &tebal);//minta buat ketebalannya
	carirata(arrAngka);//manggil prosedur carirata, bukan carimati
	pisah();//manggil prosedur pisah, biar doi pisah
	mola();//manggil prosedur mola, yang mana mola akan manggil prosedur moli, karena mola dan moli selalu bersama
	ilangSpasi(arrAngka);//manggil prosedur ilangspasi, buat nyetak
	//abaikan kodingan dibawah ini, ini cuma buat ngetes aja
	//mau dibuang sayang, karena banyak jasanya buat saya, jadi harap dimaklumi
	/*
	printf("rerata : %f\n", rerata);
	for(i=0;i<idepan;i++){
		printf("depan : %d\n", depan[i]);
	}
	printf("tengah : %d\n", tengah);
	printf("akhir : %d\n", akhir);
	for(i=0;i<5*tebal;i++){
		for(j=0;j<gatauapaan;j++){
			printf("%d", polapola[i][j]);
		}
		printf("\n");
	}
	*/
	
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/