#include <stdio.h>
#include <string.h>

void swap(char* x, char* y){
	char temp;
	temp = *x;
	*x = *y;
	*y=temp;
}

void permute(char* a, int l, int r){
	int i;
	if(l==r){
		printf("%s\n", a);
	}else{
		for(i=l;i<=r;i++){
			swap((a+l), (a+i));
			permute(a, l+1, r);
			swap((a+l), (a+i));
		}
	}
}

int main(){
	int n, r, x;
	printf("Program untuk mencari hasil permutasi\n");
	printf("Masukkan angka dalam permutasi(nPr)\n");
	printf("n : ");
	scanf("%d", &n);
	printf("r : ");
	scanf("%d", &r);

	char str[n];
	printf("Masukkan isi arraynya : \n");
	for(x=0;x<n;x++){
		scanf(" %c", &str[x]);
	}
	
	printf("\nArray yang diberikan adalah : \n");
	for(x=0;x<n;x++){
		printf("%c ", str[x]);
	}
	
	printf("\nPermutasinya adalah : \n");
	permute(str, 0, r);
	return 0;
}