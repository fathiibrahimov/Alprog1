#include <stdio.h>
int main(){
	int n;
	int i;
	int jumlah=0;
	
	scanf("%d", &n);
	int arr[n];
        
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	int z;
	for(z=n/3;z<n-(n/3);z++){
            jumlah=jumlah+arr[z];
	}
	
	if(jumlah==arr[n-1]){
        printf("sesuai spesifikasi\n");
	}else{
        printf("tidak sesuai spesifikasi\n");
	}
	
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi UTS
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/