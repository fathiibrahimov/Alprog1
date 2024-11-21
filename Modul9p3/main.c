#include "header.h"

int main(){
	int n;
	j,k,l,m,n=0;
	scanf("%d", &n);
	char arrnama[n][50];
	char arrgenre[n][50];
	
	int i;
	for(i=0;i<n;i++){
		scanf("%s", &arrnama[i]);
		scanf("%s", &arrgenre[i]);
	}
	
	cek(n, arrnama, arrgenre);
	cetak();
	
	
	return 0;
}