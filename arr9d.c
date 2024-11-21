#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j;
	scanf("%d", &n);
	char arr[n];
	char data[10]={'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'}	
	
	for(i=0;i<n;i++){
		scanf("%s", &arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<10;j++){
			if(arr[i]==data[j]){
				printf("%d", i);
			}else{
				printf("%c", arr[i]);
			}
		}	
	}
	printf("\n");
	return 0;
}