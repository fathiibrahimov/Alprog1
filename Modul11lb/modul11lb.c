#include "modul11lb"

int minimal(int n, int str[]){
	int i;
	int min=arr[0];
	for(i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	
	return min;
}

int maximal(int n, int str[]){
	int i;
	int max=0;
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	
	return max;
}

int kali(int max, int min){
	int hasil=max*min;
	return hasil;
}

void print(int kali){
	int i;
	for(i=0;i<kali;i++){
		printf("Terima Kasih untuk Tetap Semangat");
	}
}