#include <stdio.h>

int main(){
	//membuat variabel untuk menampung inputan user
	int m1=0;
	int m2=0;
	int i=0;
	int r1,r2,p1,p2,s1,s2;
	int a1,a2,a3,a4,b1,b2,b3,b4;
	
	//meminta inputan user
	scanf("%d %d", &m1,&m2);
	scanf("%d",i);
	
	//mengambil nilai tiap digit
	r1=m1/100;
	r2=m2/100;
	s1=m1%10;
	s2=m2%10;
	a1=r1*100;
	b1=r2*100;
	a2=m1-a1;
	b2=m2-b1;
	a3=a2-s1;
	b3=b2-s2;
	p1=a3/10;
	p2=b3/10;
	
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