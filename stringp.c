#include<stdio.h>
#include<string.h>

int main(){
	char string1[10] ="Hello";
	char string2[50];
	int str1 = strlen(string1);
	
	scanf("%s", string2);
	
	printf("panjang string pertama adalah %d\n", str1);
	printf("panjang string kedua adalah %d\n", strlen(string2));
	
	return 0;
}