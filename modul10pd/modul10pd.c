#include "modul10pd.h"

int kelipatan(char arr[]){
	int lima=0;
	if(strlen(arr)%5==0){
		lima = 1 ;
	}else{
		lima =0;
	}
	return lima;
}

void cetak(int n){
	printf("%d\n", n);
}