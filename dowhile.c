#include <stdio.h>

int main(){
	int total = 0, n;
	printf("****Selamat Datang di RM Tambuah Ciek****\n");
	
	do{
		printf("Mau Pesan Apa?\n");
		printf("1. Rendang - Rp. 10000\n");
		printf("2. Kepala Kakap - Rp. 30000\n");
		printf("3. Teh Talua - Rp. 5000\n");
		printf("4. Ayam Cabai Hijau - Rp. 8000\n");
		printf("5. Daging Cincang - Rp. 10000\n");
		printf("6. Nasi Putih - Rp. 2000\n");
		scanf("%d", &n);
		
		if(n==1){
			total+=10000;
		}else if(n==2){
			total+=30000;
		}else if(n==3){
			total+=5000;
		}else if(n==4){
			total+=8000;
		}else if(n==5){
			total+=10000;
		}else if(n==6){
			total+=2000;
		}else{
			printf("Pesanan tidak ada\n");
		}
	}while(n!=0);
	printf("==========\n");
	printf("Total biaya pesanan anda adalah : Rp.%d\n", total);
	
	return 0;
}