#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	switch (n){
		case 1:
		printf("A\n");
		break;
		
		case 2:
		printf("B\n");
		break;
		
		case 3:
		printf("C\n");
		break;
		
		default:
		printf("D\n");
		break;
	}
	
	return 0;
}