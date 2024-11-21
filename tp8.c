#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j =0;
	int k=1;
	int count=0;
	int status=0;
	char arr1[100][100];
	char arr2[100][100];
	char arr3[100][100];
	
	do{ //mengisi array pertama
		scanf("%s", &arr1[i]);
		count++;
		if(strcmp(arr1[i], "ngak") == 0){
			status=1;
		}else{
			i++;
		}
	}while(status != 1);
	
	for(i=0;i<count-1;i++){ //mengisi array 2
		scanf("%s", &arr2[i]);
	}
	
	//membandingkan 2 array
	for(i=0;i<count-1;i++){
		if(strlen(arr1[i])>=strlen(arr2[i])){
			strcpy(arr3[i], arr1[i]);
		}else{
			strcpy(arr3[i], arr2[i]);
		}
	}
	
    int max=strlen(arr3[0]);

    while(k < i){
        if(strlen(arr3[k])+k > max){
            max = strlen(arr3[k])+k;
        }
        k++;
    }

    for(k = 0; k < max; k++){
        j=0;
        while(j < i && j-k<=0){
            n=k-j;
            if (k<strlen(arr3[j])+j){
                printf("%c", arr3[j][n]);
            }else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
    }
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas 6
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/