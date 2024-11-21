#include "pwk19.h"

int main(){
	int n, i;
	scanf("%d", &n);
	char arrWarga[n][100];
	int kodeWarga[n];
	
	//meminta masukan untuk nama warga dan kodenya
	for(i=0;i<n;i++){
		scanf("%s", arrWarga[i]);
		scanf("%d", &kodeWarga[i]);

	}
	
	biner(kodeWarga, n);
	cekDistrik(n, arrWarga);
	cetak();
	
	return 0;
}

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas Evaluasi 10 dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/