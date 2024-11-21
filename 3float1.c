#include <stdio.h>
int main(){
	float a1,a2,a3,a4,a5,a6;
	int count=0;
	
	scanf("%f", &a1);
	scanf("%f", &a2);
	scanf("%f", &a3);
	scanf("%f", &a4);
	scanf("%f", &a5);
	scanf("%f", &a6);
	
	int b1=a1;
	int b2=a2;
	int b3=a3;
	int b4=a4;
	int b5=a5;
	int b6=a6;
	
	int c1=(a1-b1)*10;
	int c2=(a2-b2)*10;
	int c3=(a3-b3)*10;
	int c4=(a4-b4)*10;
	int c5=(a5-b5)*10;
	int c6=(a6-b6)*10;
	
	if(c1!=0){
		if(c1%3==0){
		count=count+1;
		}
	}if(c2!=0){
		if(c2%3==0){
		count=count+1;
		}
	}if(c3!=0){
		if(c3%3==0){
		count=count+1;
		}
	}if(c4!=0){
		if(c4%3==0){
		count=count+1;
		}
	}if(c5!=0){
		if(c5%3==0){
		count=count+1;
		}
	}if(c6!=0){
		if(c6%3==0){
		count=count+1;
		}
	}
	
	if(count>=3){
		printf("valid\n");
	}else if(count<3){
		printf("tidak valid\n");
	}
	
	return 0;
}