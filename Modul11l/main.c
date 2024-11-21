#include "modul11l.h"

int main(){
	int n, i;
	int hasil;
	scanf("%d", &n);
	int str[n];
	for(i=0;i<n;i++){
		scanf("%d", &str[i]);
	}
	
	hasil = jumlah(str, n);
	printf("%d\n", hasil);
	
	return 0;
}