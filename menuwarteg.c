#include <stdio.h>

int main(){
	
	int pesanan1;
	int pesanan2;
	int isidompet;
	int harga1;
	int harga2;
	
	
	printf("Menu Warteg Mulya Jaya \n");
	printf("======================== \n");
	printf("1. Nasi 5000 \n");
	printf("2. AtiAmpela 3000 \n");
	printf("3. Telor 2000 \n");
	printf("4. Kerupuk 1000 \n");
	printf("======================== \n");
	
	printf("Pesanan 1 : ");
	scanf("%d", &pesanan1);
	printf("Pesanan 2 : ");
	scanf("%d", &pesanan2);
	printf("Isi Dompet : ");
	scanf("%d", &isidompet);
	
	if(pesanan1 == 1){
		harga1=5000;
	}
	else if(pesanan1 == 2){
		harga1=3000;
	}else if(pesanan1 == 1){
		harga1=2000;
	}else if(pesanan1 == 1){
		harga1=1000;
	}
	
	if(pesanan2 == 1){
		harga2=5000;
	}
	else if(pesanan2 == 2){
		harga2=3000;
	}else if(pesanan2 == 1){
		harga2=2000;
	}else if(pesanan2 == 1){
		harga2=1000;
	}
	
	int balance = isidompet - harga1 - harga2;
	
	if(pesanan1==1){
		printf("Pesanan 1 adalah Ayam \n");
	}else if(pesanan1==2){
		printf("Pesanan 1 adalah Atiampela \n");
	}else if(pesanan1==3){
		printf("Pesanan 1 adalah Telor \n");
	}else if(pesanan1==4){
		printf("Pesanan 1 adalah Kerupuk \n");
	}else{
		printf("Anda Salah Pesan \n");
	}

	if(pesanan2==1){
		printf("Pesanan 2 adalah Ayam \n");
	}else if(pesanan2==2){
		printf("Pesanan 2 adalah Atiampela \n");
	}else if(pesanan2==3){
		printf("Pesanan 2 adalah Telor \n");
	}else if(pesanan2==4){
		printf("Pesanan 2 adalah Kerupuk \n");
	}else{
		printf("Anda Salah Pesan \n");
	}
	
	if(balance<0){
		printf("Uang Cukup : tidak \n");
	}else {
		printf("Uang Cukup : ya \n");
	}
	
	return 0;
}