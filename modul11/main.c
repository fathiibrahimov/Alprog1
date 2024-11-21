#include "modul11.h"

int main(){
	int hasil;
	char str[50];
	scanf("%s", &str);
	hasil = jumlahA(str);
	printf("%d\n", hasil);
	
	scanf("%s", &str);
	printf("%d\n", jumlahA(str));
	
	
	return 0;
}