#include "modul11b.h"

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	int min, max, hasil;
	
	min=minimal(n, arr);
	max=maximal(n, arr);
	hasil=kali(min, max);
	
	print(hasil);
	
	return 0;
}