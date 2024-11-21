#include <stdio.h>
#include <string.h>

int main(){
	int i, status, count=0;
	
	char input[100][100];
	
	do{
		scanf("%s", &input[i]);
		count++;
		if(strcmp(input[i], "berhenti") == 0){
			status=1;
		}else{
			i++;
		}
	}while(status != 1);
	
	//Menampilkan
	printf("====\n");
	for(i=0;i<count; i++){
		printf("%s\n", input[i]);
	}
	
	return 0;
}