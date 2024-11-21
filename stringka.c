#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	int i, jumlah = 0;
	for(i=0; i<strlen(str)-1;i++){
		if((str[i] == 'k') && (str[i+1] == 'a')){
			jumlah++;
		}
	}
	printf("%d\n", jumlah);
	
	return 0;
}