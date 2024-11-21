#include <stdio.h>
int main(){
	int n1,n2,n3,n4,n5,n6;
	int count=0;
	
	scanf("%d", & n1);
	scanf("%d", & n2);
	scanf("%d", & n3);
	scanf("%d", & n4);
	scanf("%d", & n5);
	scanf("%d", & n6);
	
	if((n1/1000)>=1){
		count=count+1;
	}if((n2/1000)>=1){
		count=count+1;
	}if((n3/1000)>=1){
		count=count+1;
	}if((n4/1000)>=1){
		count=count+1;
	}if((n5/1000)>=1){
		count=count+1;
	}if((n6/1000)>=1){
		count=count+1;
	}
	
	if(count>=3){
		printf("ribuan 3 atau lebih\n");
	}else if(count<3){
		printf("tidak valid\n");
	}
	return 0;
}