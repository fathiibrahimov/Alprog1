#include <stdio.h>
int main(){
	int m1,m2,m3,m4,m5,i;//membuat variabel untuk menampung nilai masukan
	int count=0;//membuat variabel untuk menampung nilai kelipatan input
	
	//meminta masukan
	scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
	scanf("%d", &i);//meminta input
	
	//menghitung berapa banyak yang kelipatan
	if(m1%i==0){
		count=count+1;
	}
	if(m2%i==0){
		count=count+1;
	}
	if(m3%i==0){
		count=count+1;
	}
	if(m4%i==0){
		count=count+1;
	}
	if(m5%i==0){
		count=count+1;
	}
	
	//mengecek dan memperlihatkan apakah banyak kelipatan
	if(count>=3){
		printf("lebih banyak yang kelipatan\n");
	}
	else if(count<3){
		printf("lebih sedikit yang kelipatan\n");
	}
return 0;	
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Quiz 1
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/