#include <stdio.h>
int main (){
	int n; // membuat variabel untuk menampung masukan user
	scanf("%d", &n); // meminta masukan user untuk berapa jumlah detik
	
	// mencari jam, menit, dan detik dari masukan user
	int jam = n/3600;
	int menit = (n%3600)/60;
	int detik = n%60;
	
	//mencetak sisa billing
	printf("Billing akan habis dalam waktu : %d:%d:%d\n", jam, menit, detik);
return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas Praktikum 1
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/