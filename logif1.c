#include <stdio.h>

//membuat fungsi faktorial supaya tidak terlalu banyak loop
int faktorial(int input){
	int i, j =1;
	for(i=1;i<=input;i++){
		j=j*i;
	}
	return j; //mengoper nilai j ke main
}

int main(){
	int n,r,ncr;
	
	//meminta masukan user untuk isi variabel
	printf("Program untuk mencari hasil kombinatorial\n");
	printf("Masukkan angka dalam kombinatorial(nCr)\n");
	printf("n : ");
	scanf("%d", &n);
	printf("r : ");
	scanf("%d", &r);
	
	//menghitung hasil kombinatorial berdasarkan rumus
	ncr = faktorial(n)/(faktorial(r)*faktorial(n-r));
	printf("Hasil dari %dC%d : %d\n", n,r,ncr);
	return 0;
}
