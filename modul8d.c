#include <stdio.h>
#include <string.h>

int main(){
	int n,i; //DEKLARASI
	scanf("%d", &n); //Meminta Masukan
	
	//Membuat array of string sebanyak n
	char input[n][50];
	
	//Meminta Masukan Kata sebanyak n
	for(i=0;i<n;i++){
		scanf("%s", &input[i]);
	}
	
	//Menampilkan
	printf("====\n");
	
	
	for(i=0;i<n; i++){
		if(strlen(input[i])%2==0){
			printf("%s\n", input[i]);
		}
	}
	
	return 0;
}