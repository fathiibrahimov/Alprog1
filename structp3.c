#include <stdio.h>

typedef struct{
	int angka;
	char kar;
	float koma;
}ashiap;

int main(){
	
	char duarr;
	ashiap bayu;
	
	printf("DUARR MASUKIN INTEGER :");
	scanf("%d", &bayu.angka);
	printf("DUARR MASUKIN KARAKTER :");
	scanf(" %c", &bayu.kar);
	printf("DUARR MASUKIN KOMA :");
	scanf("%f", &bayu.koma);
	
	printf("DUARR MASUKIN KECAP ABC :");
	scanf(" %c", &duarr);
	
	
	if(duarr=='A'){
		printf("%d\n", bayu.angka);
		printf("% c\n", bayu.kar);
	}else if(duarr=='B'){
		printf("% c\n", bayu.kar);
		printf("%f\n", bayu.koma);
	}else if(duarr=='C'){
		printf("%d\n", bayu.angka);
		printf("%f\n", bayu.koma);
	}else {
		printf("%d\n", bayu.angka);
		printf(" %c\n", bayu.kar);
		printf("%f\n", bayu.koma);
	}
	
	return 0;
}