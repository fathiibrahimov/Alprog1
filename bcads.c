#include <stdio.h>
int main (){
	
	int bilSatu; //membuat variabel untuk menampung bilangan pertama
	int bilDua; //membuat variabel untuk menampung bilangan kedua
	
	printf("Masukkan bilangan pertamanya cuy : \n"); // meminta masukan user untuk bilangan pertama
	scanf("%d", &bilSatu);
	printf("Masukkan bilangan keduanya cuy : \n"); // meminta masukan user untuk bilangan kedua
	scanf("%d", &bilDua);
	
	int hasil = bilSatu+bilDua; //membuat variabel untuk menampung hasil penjumlahan kedua bilangan
	printf("Hasil penambahan adalah %d\n", hasil); // menampilkan hasil penjumlahan kedua bilangan
	
	return 0;
	
}