#include <stdio.h>

typedef struct{
	int kode; //untuk menampung kode rakyat
	char nama[21]; //untuk menampung nama rakyat
	int tipe; //untuk menampung tipe darah rakyat
}rakyat;

int main(){
	int n; //membuat variabel untuk menampung jumlah rakyat
	scanf("%d", &n); //meminta masukan user untuk jumlah rakyat
	rakyat populasi[n];
	
	int dzombie;
	if(n>0){
		scanf("%d", &dzombie);
	}
	
	int pnama[n];
	int a=0;
	while(a < n){
		pnama[a] = 0;
		a++;
	}
	
	int count;
	int i=0;
	if(n>0){
		do{
			scanf(" %c", &populasi[i].kode);
			count=0;
			do{
				scanf(" %c", &populasi[i].nama[count]);
				count++;
				pnama[i] = pnama[i] + 1;
			}while(populasi[i].nama[count-1] != '.');
			scanf("%d", &populasi[i].tipe);
			i++;
		}while(i < n);
	}
	
	int b=0; 
	i=0;
	int j, k;
	if(n>0){
		while(i<n){
		j=0;
		int l = pnama[i] - 2;
			while(j < pnama[i]-1){
				k=j;
				while(k>=1){
					printf("%c", populasi[i].kode);
					k--;
				}

				if(populasi[i].tipe < dzombie){ 
					printf("%c", populasi[i].nama[j]);
				}else if(populasi[i].tipe > dzombie){
					printf("%c", populasi[i].nama[l]);
					l--;
				}else{
					printf("+");
					b++;
				}
				k = pnama[i] - 2 - j;
				while(k >= 1){
					printf("%d",populasi[i].tipe);
					k--;
				}
				printf("\n");
				j++;
			}
			i++;
		}
	}

	if(b > 0){
		printf("+============================+\n");
		printf("| Kita masih Punya Harapan:) |\n");
		printf("+============================+\n");
	}else{
		printf("+==========================+\n");
		printf("| Tidak Ada Harapan Lagi:( |\n");
		printf("+==========================+\n");
	}
	
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas 6
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/