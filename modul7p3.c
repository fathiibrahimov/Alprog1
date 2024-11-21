#include<stdio.h>
#include<string.h>

int main(){
	char string1[50];
	printf("masukan:");
	scanf("%s", string1);
	
	int vokal, konsonan, angka = 0;
	
	int i=0;
	for(i=0; i<strlen(string1);i++){
		if((string1[i] == '0') || (string1[i] == '1') || (string1[i] == '2') || (string1[i] == '3') || (string1[i] == '4') ||
		(string1[i] == '5') || (string1[i] == '6') || (string1[i] == '7') || (string1[i] == '8') || (string1[i] == '9')){
			angka++;
		}else if ((string1[i] == 'a') || (string1[i] == 'i') || (string1[i] == 'u') || (string1[i] == 'e') || (string1[i] == 'o')){
			vokal++;
		}else if((string1[i] != 'a') && (string1[i] != 'i') && (string1[i] != 'u') != (string1[i] != 'e') && (string1[i] != 'o') && 
		(string1[i] != '0') && (string1[i] != '1') && (string1[i] != '2') && (string1[i] != '3') && (string1[i] != '4') &&
		(string1[i] != '5') && (string1[i] != '6') && (string1[i] != '7') && (string1[i] != '8') && (string1[i] != '9'))
		{
			konsonan++;
		}
	}
	printf("jumlah vokal = %d\n", vokal);
	printf("jumlah konsonan = %d\n", konsonan);
	printf("jumlah angka = %d\n", angka);
	
	return 0;
}