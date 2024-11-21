/*
Nama : Ahmad Fathi Ibrahimov
NIM : 1903140
Jurusan : Ilmu Komputer C1
Mata Kuliah : Logika Informatika
*/


#include <stdio.h>
#include <conio.h>
#include <string.h>

void permute(char *str,int l,int pos,int r);
void swap(char a,char b);
void print_string(char *str,int r);

void makeCombination(char arr1[], char data[], int st, int end, int index, int r);

void combinationDisplay(char arr1[], int n, int r){
	char data[r];
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

int faktorial(int input){
	int i, j =1;
	for(i=1;i<=input;i++){
		j=j*i;
	}
	return j; //mengoper nilai j ke main
}

int main()
{
	int bangka, r, x, l, i, ncr, npr;
	int pilihan;
	
	printf("Program untuk mencari hasil kombinatorial\n");
	printf("Pilih apa yang ingin anda lakukan :\n");
	printf("1. Kombinasi\n");
	printf("2. Permutasi\n");
	printf("Pilihan Anda : ");
	scanf("%d", &pilihan);

	if(pilihan==1){
		printf("=============================================\n");
		printf("Program untuk mencari hasil kombinasi\n");
		printf("Masukkan angka dalam kombinasi(nCr)\n");
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
		
		ncr = faktorial(bangka)/(faktorial(r)*faktorial(bangka-r));
		printf("Hasil dari %dC%d : %d\n", bangka,r,ncr);
	
		printf("Kombinasinya adalah : \n");
		combinationDisplay(arr1, n, r);
	}else if(pilihan==2){
		printf("=============================================\n");
		printf("Program untuk mencari hasil permutasi\n");
		printf("Masukkan angka dalam permutasi(nPr)\n");
		printf("n : ");
		scanf("%d", &bangka);
		printf("r : ");
		scanf("%d", &r);
		char str[bangka];
	
		printf("Masukkan isi arraynya : \n");
		for(x=0;x<bangka;x++){
			scanf(" %c", &str[x]);
		}
	
		l=strlen(str);
	
		printf("\nArray yang diberikan adalah : \n");
		for(x=0;x<bangka;x++){
			printf("%c ", str[x]);
		}
		
		printf("\n");
		npr = faktorial(bangka)/faktorial(bangka-r);
		printf("Hasil dari %dP%d : %d\n", bangka,r,npr);
	
		printf("\nPermutasinya adalah : \n");
		permute(str,l,1,r);
		getch();
	}else{
		printf("Anda Salah Memasukkan Pilihan\n");
		printf("Harap masukkan pilihan yang benar\n");
	}
	
	
	return 0;
}

void permute(char *str,int l,int pos,int r)
{
	int i;
  if(pos==r+1)
  {
      print_string(str,r);
      printf("\n");
      return;
  }
  for(i=pos-1;i<=l-1;i++)
  {
      str[pos-1]=str[pos-1]+str[i]-(str[i]=str[pos-1]);
      permute(str,l,pos+1,r);
      str[pos-1]=str[pos-1]+str[i]-(str[i]=str[pos-1]);
  }
}

void print_string(char *str,int r)
{
	int i;
  for(i=0;i<r;i++)
      printf("%c",str[i]);
}