#include <stdio.h>
int main(){
	char a1,a2,a3,a4,a5,a6;
	int countc=0;
	int counta=0;
	
	scanf(" %c", &a1);
	scanf(" %c", &a2);
	scanf(" %c", &a3);
	scanf(" %c", &a4);
	scanf(" %c", &a5);
	scanf(" %c", &a6);
	
	if(a1>='a' && a1<='z'){
		countc=countc+1;
	}else if(a1>='0' && a1<='9'){
		counta=counta+1;
	}if(a2>='a' && a2<='z'){
		countc=countc+1;
	}else if(a2>='0' && a2<='9'){
		counta=counta+1;
	}if(a3>='a' && a3<='z'){
		countc=countc+1;
	}else if(a3>='0' && a3<='9'){
		counta=counta+1;
	}if(a4>='a' && a4<='z'){
		countc=countc+1;
	}else if(a4>='0' && a4<='9'){
		counta=counta+1;
	}if(a5>='a' && a5<='z'){
		countc=countc+1;
	}else if(a5>='0' && a5<='9'){
		counta=counta+1;
	}if(a6>='a' && a6<='z'){
		countc=countc+1;
	}else if(a6>='0' && a6<='9'){
		counta=counta+1;
	}
	
	if(counta==3 && countc==3){
		
	}else{
		printf("tidak valid\n");
	}
	
	return 0;
}