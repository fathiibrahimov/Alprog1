#include <stdio.h>
int main(){
	int m1,m2,i;//membuat variabel untuk menampung inputan user
	
	//meminta inputan user
	scanf("%d %d", &m1,&m2);
	scanf("%d",&i);
	
	//mengambil nilai tiap digit
	int r1=m1/100;
	int r2=m2/100;
	int s1=m1%10;
	int s2=m2%10;
	int p1=(m1-(r1*100)-s1)/10;
	int p2=(m2-(r2*100)-s2)/10;
	
	//mengecek kondisi
	if(r1==i && r2==i){
		printf("sama posisi ratusan\n");
	}else if(p1==i && p2==i){
		printf("sama posisi puluhan\n");
	}else if(s1==i && s2==i){
		printf("sama posisi satuan\n");
	}else{
		printf("tidak sama posisi\n");
	}
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Quiz 1
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/