#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	int a;
	for(a=0;a<5+(2*n);a++){
		printf(" ");
	}
	int b;
	for(b=0;b<4+n;b++){
		printf("*");
	}
	printf("\n");
	
	int row, c, s, d;
	s=n;
	int e,f,g;
	
	for (row = 1; row < n; row++){
		for (c = 1; c < s+n; c++)  // Loop to print spaces in a row
			printf(" ");
 
    	s--;
 
    	for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
			printf("*");
			
		s=n;
		for (c = 1; c < s+n; c++)  // Loop to print spaces in a row
			printf(" ");
 
    	s--;
    	
    	if(row<n-1){
			for(d=0;d<4+n;d++)
    			printf("*");
    	}else{
			for(e=0;e<0+n;e++){
				printf("*");
    		}for(f=0;f<0+n;f++){
				printf(" ");
    		}for(g=0;g<0+n;g++){
				printf("*");
    		}
    	}
    printf("\n");
  	}
  	
  	int rows, i, j, k = 0;
	rows=n+(n-1);
  	for ( i = rows ; i >= 1; i-- ) 
    {
      for ( j = 0 ; j <= rows-i; j++ ) 
      {
      	printf(" ");    	
      }
      k = 0;
      while (k != (2 * i - 1))
      {
	printf("*"); 
	k++;
      }
      printf("\n");
    }
	  
    	
	
	
	
	
	
	return 0;
}/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi UTS
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/