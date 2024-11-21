#include <stdio.h>

void makeCombination(char arr1[], char data[], int st, int end, int index, int r);

void combinationDisplay(char arr1[], int n, int r){
	int data[r];
	makeCombination(arr1, data, 0, n-1, 0, r);
}

void makeCombination(char arr1[], char data[], int st, int end, int index, int r){
	int i, j;
	if(index==r){
		for(j=0;j<r;j++){
			printf("%c", data[j]);
		}
		printf("\n");
		return;
	}
	for(i=st;i<=end&&end-i+1>=r-index;i++){
		data[index]=arr1[i];
		makeCombination(arr1, data, i+1, end, index+1, r);
	}
}

int main(){
	int x;
	int bangka;
	int r, i;
	
	printf("Program untuk mencari hasil kombinatorial\n");
	printf("Masukkan angka dalam kombinatorial(nCr)\n");
	printf("n : ");
	scanf("%d", &bangka);
	printf("r : ");
	scanf("%d", &r);
	
	char arr1[bangka];
	printf("Masukkan isi arraynya : \n");
	for(x=0;x<bangka;x++){
		scanf(" %c", &arr1[x]);
	}
	
	int n = sizeof(arr1)/sizeof(arr1[0]);
	
	printf("Array yang diberikan adalah : \n");
	for(i=0;i<n;i++){
		printf("%c ", arr1[i]);
	}
	printf("\n");
	
	printf("Kombinasinya adalah : \n");
	combinationDisplay(arr1, n, r);
	
	return 0;
}