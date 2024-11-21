#include <stdio.h>
int main(){
	int n;
	int m;
	int aaa;
	int bbb;
	
	
	scanf("%d", &n);
	char arr1 [n];
	
	for(aaa=0;aaa<n;aaa++){
		scanf(" %c", &arr1[aaa]);
	}
	
	scanf("%d", &m);
	char arr2 [m];
	
	for(bbb=0;bbb<m;bbb++){
		scanf(" %c", &arr2[bbb]);
	}
	
	int z=n+m;
	char arr3[z];
	
	int a,b=0;
	int f;
	
	for(f=0;f<m+n;f++){
		if(n>=m){
			if(2*m>f){
				arr3[f] = arr1[a];
				a++;
				arr3[f+1] = arr2[b];
				b++;
				f++;
			}else{
				arr3[f] = arr1[a];
				a++;
			}
		}else{
			if(2*n>f){
				arr3[f] = arr1[a];
				a++;
				arr3[f+1] = arr2[b];
				b++;
				f++;
			}else{
				arr3[f] = arr2[b];
				b++;
			}
		}
	}
	
	int x;
	if(m >= 1 && n >=1 ){
		printf("Bentuk Biner Gabungan : ");
		for(x=0;x<z;x++){
		printf("%c", arr3[x]);
	}
	}
	
	printf("\n");
	
	int des=0;
	int g=1;
	int h,t;
	
	for(t=0;t<m+n;t++){ 
		if(arr3[t] == '1'){
			g=1;
			for(h=1;h<(m+n)-t;h++){
				g=g*2;
			}
			des = des+g;
		}
	}
	if(des >=0){
		printf("Bentuk Desimal : %d\n",des);
	}
	if(des > m*n){ 
		printf("Kode : Cinta Alpro!\n");
	}else if(des < m*n){
		printf("Kode : Cinta Koding!\n");
	}else{
		printf("Kode : Wow Mudah Sekali!\n");
	}
	
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi EVALUASI
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/