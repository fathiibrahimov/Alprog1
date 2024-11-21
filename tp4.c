#include <stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);

	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int m=0;
	
	//pola atas
	if(n>=1)
		printf("   >\n");

	for(i=0;i<n-1;++i) {
		printf("   >");
		for(j=0;j<4; ++j) {
			for(k = 0; k < i; ++k)
				printf(" ");
			printf(">");
		}
		printf("\n");
	}
	
	//pola tengah
	if(n==1) {
		m=4;
	} else {
		m=4*k+5+3;
	}
	printf("   ");
	for(l=0;l<m; ++l) 
		printf(">");
	printf("BROFIST FOREVAH\n");

	//pola bawah
	for(i=0;i<n-1; ++i) {
		printf("   >");
		for(j = 0; j < 4; ++j) {
			for(k = 0; k < n-2 - i; ++k)
				printf(" ");
			printf(">");
		}

		printf("\n");
	}
	if(n >= 1)
		printf("   >\n");


	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas 4
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/