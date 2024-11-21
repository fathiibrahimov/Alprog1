#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j;
	scanf("%d", &n);
	char arr[n][50];
	for(i=0;i<n;i++){
		scanf("%s", &arr[i]);
	}
	
	int status=1;
	while((i<n) && (status==1)){
		int ada =0;
		j=0;
		while((j<strlen(arr[i])) && (ada == 0)){
			if (arr[i][j]== 'a'){
				ada=1;
			}else{
				j++;
			}
		}
		if(ada == 0){
			status =0;
		}else{
			i++;
		}
	}
	if(status == 0){
		printf("tidak semua ada a\n");
	}else{
		printf("semua ada a\n");
	}
	
	return 0;
}