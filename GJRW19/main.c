#include "GJRW19.h"

int main(){
	int i;//untuk iterator
	int n;//panjang array masukan
	int a, b=0;//untuk mengetahui panjang array aman dan bahaya
	scanf("%d", &n);//meminta masukan user untuk variabel n
	char arrInput[n][50];//array untuk menampung kata masukan awal
	for(i=0;i<n;i++){//meminta masukan user untuk array input
		scanf("%s", &arrInput[i]);
	}
	
	//karena error terus kalau langsung pake caesar cypher, saya coba akal akalin pakai database
	char database[10]={'e','m','y','i','s','E','M','Y','I','S'};
	char databaseA[10]={'b','j','v','f','p','B','J','V','F','P'};
	char vokal1[10]={'a','i','u','e','o','A','I','U','E','O'};
	char konsonan1[24]={'b','c','d','f','g','h','j','k','l','m','n'
		,'p','q','r','s','t','v','w','x','y','z'};
	char konsonanA[24]={'B','C','D','F','G','H','J','K','L','M','N',
	'P','Q','R','S','T','V','W','X','Y','Z'};
	char konsonanB[24]={94,95,96,'b','c','d','f','g','h','j','k','l','m','n'
	,'p','q','r','s','t','v','w','x','y','z'};
	char konsonanA2[24]={'>','?','@','B','C','D','F','G','H','J','K','L','M','N',
	'P','Q','R','S','T','V','W','X','Y','Z'};
	
	cek(n, arrInput);//mengecek _
	tukar(n, arrInput);//menukar isi array yang genap dan ada _ nya
	enkrip(n, arrInput, database, databaseA, vokal1, konsonan1, konsonanA, konsonanB, konsonanA2); //dienkrip sesuai ketentuan
	aman(n);//cek apakah ascii nya ganjil atau genap
	bahaya(n);//memasukkan yang ganjil ke array bahaya dan yang genap ke array aman
	cetak(n);//prosedur untuk mencetak sesuai output

	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas 5
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/