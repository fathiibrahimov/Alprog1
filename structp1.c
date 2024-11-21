#include <stdio.h>

typedef struct{
	int a;
	int b;
}bungkusan;

int main(){
	bungkusan satu;
	bungkusan dua;
	
	scanf("%d %d", &satu.a, &dua.a);
	scanf(" %c %c", &satu.b, &dua.b);
	
	printf("%d%c %d%c", satu.a, satu.b, dua.a, dua.b);
	
	return 0;
}