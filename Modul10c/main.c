#include "pola.h"

int main(){
	int b;
	scanf("%d", &b);
	
	pola(b);
	pola(b+1);
	pola(b+2);
	
	int kumpulan[b];
	int i;
	for(i=0;i<b;i++){
		scanf("%d", &kumpulan[i]);
	}
	
	tulisArrayInt(b, kumpulan);
	
	int hasil;
	char str[50];
	scanf("%s", &str);
	hasil = jumlahA(str);
	printf("%d\n", hasil);
	
	scanf("%s", &str);
	printf("%d\n", jumlahA(str));
	
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", tambah(x, y));
	
	return 0;
}