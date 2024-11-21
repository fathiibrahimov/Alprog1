#include <stdio.h>

int main (){
	int bil1; //membuat variabel untuk menampung bilangan pertama
	int bil2; //membuat variabel untuk menampung bilangan kedua
	
	int tambah; //membuat variabel untuk mendefinisikan operasi tambah
	int kurang; // membuat variabel untuk mendefinisikan operasi kurang
	int bagi; // membuat variabel untuk mendefinisikan operasi bagi
	int kali; // membuat variabel untuk mendefinisikan operasi kali
	int modulus; // membuat variabel untuk mendefinisikan operasi modulus
	
	printf("Masukkan bilangan pertama : "); //menampilkan perintah untuk meminta masukan kepada user untuk bilangan pertama
	scanf("%d", &bil1); //memasukkan inputan user ke variabel bil1
	
	printf("Masukkan bilangan kedua : "); //menampilkan perintah untuk meminta masukan kepada user untuk bilangan kedua
	scanf("%d", &bil2); //memasukkan inputan user ke variabel bil2
	
	tambah = bil1+bil2; //memasukkan operasi tambah
	kurang = bil1-bil2; //memasukkan operasi kurang
	bagi = bil1/bil2; //memasukkan operasi bagi
	kali = bil1*bil2; //memasukkan operasi kali
	modulus = bil1%bil2; // memasukkan operasi modulus
	
	printf("Hasil tambah : %d\n", tambah); //menampilkan hasil tambah
	printf("Hasil kurang : %d\n", kurang); //menampilkan hasil kurang
	printf("Hasil kali : %d\n", kali); //menampilkan hasil kali
	printf("Hasil bagi : %d\n", bagi); //menampilkan hasil bagi
	printf("Hasil modulus : %d\n", modulus); //menampilkan hasil modulus
	
return 0; //keluar program
}