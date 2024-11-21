#include <stdio.h>

int main(){
	//deklarasi variabel
	int poin;
	
	printf("masukkan Poin : ");
	//meminta user masukkan nilai ke variabel poin
	scanf("%d",&poin);
	
	//pemilihan lebih dari 2 kondisi
	if(poin >=15){
		printf("Mendapatkan Medali Emas. \n");
	}else if(poin >=10){
		printf("Mendapatkan Medali Perak. \n");
	}else if(poin >=5){
		printf("Mendapatkan Medali Perunggu. \n");
	}else{
		printf("Tidak mendapatkan medali.");
	}
	
	return 0;
}