#include "modul10pc.h"

char nilai(int n){
	char predikat;
	if(n<=100 && n>=90){
		predikat = 'A';
	}else if(n<90 && n>=80){
		predikat = 'B';
	}else if(n<80 && n>=70){
		predikat = 'C';
	}else if(n<70 && n>=60){
		predikat = 'D';
	}else{
		predikat = 'E';
	}
	
	return predikat;
}

void cetak(char a){
	printf("%c", a);
}