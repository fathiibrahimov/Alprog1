#include "modul10pa.h"

int main(){
	int a, b;
	char op;
	scanf("%d %d %c", &a, &b, &op);
	int hasil = kalkulator(a,b,op);
	printf("%d\n", hasil);
	
	return 0;
}