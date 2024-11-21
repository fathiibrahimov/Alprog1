#include "header.h"

int main(){
	int n;
	scanf("%d", &n);
	int deret[n];
	total = 0;
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &deret[i]);
	}
	for(i=0;i<n;i++){
		penjumlahan(deret[i]);
	}
	
	printf("Jumlah Semua Angka : %d\n", total);
	
	return 0;
}