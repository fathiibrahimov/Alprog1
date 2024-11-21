#include <stdio.h>
#include <string.h>

int main(){
	char str1[50];
	char str2[50];
	scanf("%s", &str1);
	scanf("%s", &str2);
	if(strcmp(str1, str2) == 0){
		printf("string sama\n");
	}else{
		printf("string tidak sama\n");
	}

	return 0;
}