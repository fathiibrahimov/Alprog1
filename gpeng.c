#include <stdio.h>
int main(){
	
	int n,m,k,h,r=0;
	int gehu=100;
	int bala=150;
	int pisang=75;
	int cireng=175;
	
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	scanf("%d", &h);
	scanf("%d", &r);
	
	int labag=n*gehu;
	int labab=m*bala;
	int labap=k*pisang;
	int labac=h*cireng;
	
	int laba=(labag+labab+labap+labac)*r;
	
	printf("%d\n", laba);
	
	return 0;
}