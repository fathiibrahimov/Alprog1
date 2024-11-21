#include<stdio.h>
#include<string.h>

int main(){
	char string1[50];
	
	printf("masukan:\n");
	scanf("%s", string1);
	
	int a=strlen(string1)/2;
	int b=a;
	int i=0;
	
	printf("keluaran:\n");
	for(i=strlen(string1);i>a;i--){
		printf("%c", string1[i-1]);
		printf("----");
		printf("%c\n", string1[b-1]);
		b--;
	}
	
	return 0;
}