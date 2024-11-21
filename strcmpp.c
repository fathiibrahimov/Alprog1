#include<stdio.h>
#include<string.h>

int main(){
	char string1[50];
	char string2[50];
	char string3[50];
	
	scanf("%s", string1);
	scanf("%s", string2);
	
	int compare = strcmp(string1, string2);
	if(compare==0){
		printf("String 1 dan 2 sama\n");
	}
	if(strcmp(string1, string2)==0){
		printf("String nya memang sama\n");
	}else{
		printf("String 1 dan 2 berbeda\n");
	}
	
	do{
		scanf("%s", string3);
	}while(strcmp(string3, "stop") != 0);
	
	return 0;
}