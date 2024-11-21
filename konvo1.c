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
	
	if(a1=='a' || a1=='i' || a1=='u' || a1=='e' || a1=='o'){
		if(a2!='a' || a2!='i' || a2!='u' || a2!='e' || a2!='o'){
			if(a3=='a' || a3=='i' || a3=='u' || a3=='e' || a3=='o'){
				if(a4!='a' || a4!='i' || a4!='u' || a4!='e' || a4!='o'){
					if(a5=='a' || a5=='i' || a5=='u' || a5=='e' || a5=='o'){
						if(a6!='a' || a6!='i' || a6!='u' || a6!='e' || a6!='o'){
							count=1;
						}
					}
				}
			}
		}
	}
	
	if(a1!='a' || a1!='i' || a1!='u' || a1!='e' || a1!='o'){
		if(a2=='a' || a2=='i' || a2=='u' || a2=='e' || a2=='o'){
			if(a3!='a' || a3!='i' || a3!='u' || a3!='e' || a3!='o'){
					if(a4=='a' || a4=='i' || a4=='u' || a4=='e' || a4=='o'){
						if(a5!='a' || a5!='i' || a5!='u' || a5!='e' || a5!='o'){
							if(a6=='a' || a6=='i' || a6=='u' || a6=='e' || a6=='o'){
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