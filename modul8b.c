#include <stdio.h>
#include <string.h>

//BUNGKUSAN
typedef struct{
	char kata[50];
}kalimat;

int main(){
	//DEKLARASI
	int n,i;
	scanf("%d", &n); //Meminta Masukan
	kalimat input[n];//Membuat array of string
	
	//Perulangan Meminta inputan array of string
	for(i=0;i<n;i++){
		scanf("%s", &input[i].kata);
	}
	
	//Perulangan Menampilkan
	printf("====\n");
	for(i=0;i<n; i++){
		printf("%s\n", input[i].kata);
	}
	
	return 0;
}