#include<stdio.h>
#include<string.h>

int main(){
	char string1[100];
	char string2[100];
	int besar=0;
	
	
	printf("masukan:");
	do{
		scanf("%s", string1);
		if (besar<=strlen(string1)){
			besar=strlen(string1);
			strcpy(string2, string1);
		}
	}while(strcmp(string1, "sudah") != 0);
	printf("%s\n", string2);
	
	return 0;
}