#include "sbstr.h"

int main(){
	char str1[100]; //membuat array 1 untuk menampung masukan user
	char str2[100]; //membuat array 1 untuk menampung masukan user
	scanf("%s", &str1); //meminta masukan user untuk mengisi array 1
	scanf("%s", &str2); //meminta masukan user untuk mengisi array 2
	
	int l1 = strlen(str1); //untuk menampung panjang dari array 1
	int l2 = strlen(str2); //untuk menampung panjang dari array 2
	
	tampil(l1,l2, str1, str2);
	
	return 0;
}