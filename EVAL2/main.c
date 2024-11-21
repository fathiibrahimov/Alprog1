#include "bnrw.h"

int main(){
//meminta masukan
	int i;
	scanf("%d", &n);
	char arr1[n][100];
	for(i=0;i<n;i++){
		scanf("%s", arr1[i]);
	}
	scanf("%d", &m);
	char arr2[m][100];
	for(i=0;i<m;i++){
		scanf("%s", arr2[i]);
	}
	
	//mulai proses
	cekcek(arr1, arr2);
	cekfinal(arr1);
	cetak(arr1);
	
	return 0;
}

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Evaluasi 2 dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/