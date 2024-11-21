#include "sbstr.h"

void tampil(int l1, int l2, char *str1, char *str2){
	int start, i,j =0;
	
	if(l1>=l2){ //kondisi jika array1 lebih panjang
		start=l1-l2;
		for(i=start;i<l1;i++){
			str1[i]=str2[j];
			j++;
		}
		
		for(i=0;i<l1;i++){
			printf("%c", str1[i]);
		}
	}else{ //kondisi jika array2 lebih panjang
		start=l2-l1;
		for(i=start;i<l2;i++){
			str2[i]=str1[j];
			j++;
		}
		
		for(i=0;i<l2;i++){
			printf("%c", str2[i]);
		}
	}
	printf("\n");
}