#include <stdio.h>
int main(){
	char a1,a2,a3,a4,a5,a6;
	int count=0;
	
	scanf(" %c", &a1);
	scanf(" %c", &a2);
	scanf(" %c", &a3);
	scanf(" %c", &a4);
	scanf(" %c", &a5);
	scanf(" %c", &a6);
	
	if(a1>='a' && a1<='z'){
		if(a2>='0' && a2<='9'){
			if(a3>='a' && a3<='z'){
				if(a4>='0' && a4<='9'){
					if(a5>='a' && a5<='z'){
						if(a6>='0' && a6<='9'){
							count=1;
						}
					}
				}
			}
		}
	}
	
	if(a1>='0' && a1<='9'){
		if(a2>='a' && a2<='z'){
			if(a3>='0' && a3<='9'){
				if(a4>='a' && a4<='z'){
					if(a5>='0' && a5<='9'){
						if(a6>='a' && a6<='z'){
							count=1;
						}
					}
				}
			}
		}
	}
	
	if(count==1){
		printf("kombinasi valid\n");
	}else if(count!=1){
		printf("kombinasi tidak valid\n");
	}
	
	return 0;
}