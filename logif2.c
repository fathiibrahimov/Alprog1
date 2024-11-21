#include <stdio.h>
#include <string.h>

void print(int *num, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", nom[i]);
	}
	printf("\n");
}

int main(){
	int num[10];
	int *p;
	int temp;
	int i,n,j;
	printf("\nBerapa banyak angka yang ingin dimasukkan: ");
	scanf("%d", &n);
	printf("\nMasukkan semua angkanya: \n");
	for(i=0;i<n;i++){
		scanf("%d", &num[i]);
	}for(j=1;j<=n;j++){
		for(i=0;i<n-1;i++){
			temp = num[i];
			num[i]=num[i+1];
			num[i+1]=temp;
			print(num,n);
		}
	}
	return 0;
	
}