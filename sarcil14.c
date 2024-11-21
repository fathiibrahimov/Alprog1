#include<stdio.h>

int main(){
	int i1,i2,i3,i4,i5,i6;
	int count=0;
	
	scanf("%d", &i1);
	scanf("%d", &i2);
	scanf("%d", &i3);
	scanf("%d", &i4);
	scanf("%d", &i5);
	scanf("%d", &i6);
	
	if(i1%i4==0 || i1%i5==0 || i1%i6==0){
		count=count+1;
	}if(i2%i4==0 || i2%i5==0 || i2%i6==0){
		count=count+1;
	}if(i3%i4==0 || i3%i5==0 || i3%i6==0){
		count=count+1;
	}
	
	if(count>=2){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}
	
return 0;
}