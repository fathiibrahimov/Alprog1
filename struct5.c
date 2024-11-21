#include <stdio.h>

typedef struct{
	int nim;
	int nilai;
}mahasiswa;

int main(){
	mahasiswa m1,m2,m3;
	
	printf("masukkan nim mahasiswa pertama:\n");
	scanf("%d", &m1.nim);
	printf("\nmasukkan nilai mahasiswa pertama y:\n");
	scanf("%d", &m1.nilai);
	printf("masukkan nim mahasiswa kedua:\n");
	scanf("%d", &m2.nim);
	printf("\nmasukkan nilai mahasiswa kedua y:\n");
	scanf("%d", &m2.nilai);
	printf("masukkan nim mahasiswa ketiga:\n");
	scanf("%d", &m3.nim);
	printf("\nmasukkan nilai mahasiswa ketiga y:\n");
	scanf("%d", &m3.nilai);
	
	printf("nim mahasiswa yang memiliki nilai terbesar adalah:\n");
	printf("x: %d\n", p1.x);
	printf("y: %d\n", p1.y);
	
	return 0;
}