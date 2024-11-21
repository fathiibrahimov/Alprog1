#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j, spasi = 0;
	scanf("%d", &n);
	
	char arr[n][50];
	
	for(i=0;i<n;i++){
		scanf("%s", &arr[i]);
	}
	
	for(i=0;i<n;i++){
		spasi=spasi+strlen(arr[i]);
	}
	
	for(i=0;i<n;i++){
		spasi=spasi-strlen(arr[i]);
		for(j=spasi;j>0;j--){
			printf(" ");
		}
		printf("%s\n", arr[i]);	
	}
	
	return 0;
}