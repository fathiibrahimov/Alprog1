#include <stdio.h>
int main(){
	float a1,a2,a3;
	int a4,a5,a6;
	int count=0;
	
	scanf("%f", &a1);
	scanf("%f", &a2);
	scanf("%f", &a3);
	scanf("%d", &a4);
	scanf("%d", &a5);
	scanf("%d", &a6);
	
	int b1=a1;
	int b2=a2;
	int b3=a3;
	int c1=(a1-b1)*100;
	int c2=(a2-b2)*100;
	int c3=(a3-b3)*100;
	
	if((b1%a4==0 && c1%a4==0) || (b1%a5==0 && c1%a5==0) || (b1%a6==0 && c1%a6==0)){
		count=count+1;
	}if((b2%a4==0 && c2%a4==0) || (b2%a5==0 && c2%a5==0) || (b2%a6==0 && c2%a6==0)){
		count=count+1;
	}if((b3%a4==0 && c3%a4==0) || (b3%a5==0 && c3%a5==0) || (b3%a6==0 && c3%a6==0)){
		count=count+1;
	}
	
	if(count>=2){
		printf("valid\n");
	}else if(count<2){
		printf("tidak valid\n");
	}
	
	return 0;
}