#include <stdio.h>

int main(){
	int arr1[6];
	int arr2[6];
	int arr3[6];
	
	int i;
	int genap=0; 
	int ganjil=0;
	int count=0;
	
	for(i=0;i<6;i++){
		scanf("%d", &arr1[i]);
	}
	
	for(i=0;i<6;i++){
		if(arr1[i]%2==0){
			arr2[genap]=arr1[i];
			genap++;
			count++;
		}else{
			arr3[ganjil]=arr1[i];
			ganjil++;
		}
	}
	
	if(count==3){
		for(i=0;i<4;i++){
			printf("%d\n", arr2[i]);
			printf("%d\n", arr3[i]);
		}
	}
	
	return 0;
}