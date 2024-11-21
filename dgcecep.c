#include <stdio.h>
int main(){
	int n,m,p,r;
	int i=0;
	int plus=0;
	
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &p);
	scanf("%d", &r);
	
	for(i=1;i<=r;i++)
	{
		plus=(n/2)*m;
		n=n+plus;
		if(i>2){
			n=n-p;
		}
	}
	printf("%d\n", n);
return 0;	
	
}