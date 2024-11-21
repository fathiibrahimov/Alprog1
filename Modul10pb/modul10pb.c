#include "modul10pb.h"

int urutan(char arr[]){
	int keluaran=999;
	if(strcmp(arr, "merah") == 0){
		keluaran = 1;
	}else if(strcmp(arr, "jingga") == 0){
		keluaran = 2;
	}else if(strcmp(arr, "kuning") == 0){
		keluaran = 3;
	}else if(strcmp(arr, "hijau") == 0){
		keluaran = 4;
	}else if(strcmp(arr, "biru") == 0){
		keluaran = 5;
	}else if(strcmp(arr, "nila") == 0){
		keluaran = 6;
	}else if(strcmp(arr, "ungu") == 0){
		keluaran = 7;
	}else{
		keluaran = 999;
	}
	return keluaran;
}

void cetak(int n){
	printf("%d\n", n);
}