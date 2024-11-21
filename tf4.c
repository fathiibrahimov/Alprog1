#include <stdio.h>

int main (){
	int m,n,x,y;
	int cashback=0;
	int voucher=0;
	int beruntung=0;
	int murah=0;
	
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (m>=50000 && n>=50000){
		beruntung=1;
		if(m>=n){
		murah=n;
		}else{
		murah=m;
		}
		
		if(x%2==0 && y%2==1){
            if (murah<=100000){
            cashback = murah*1;
            }
            else if (murah<=250000){
            cashback = m*75/100;
            }
            else if (murah<=500000){
            cashback = murah*50/100;
            }
            else if (murah<=1000000){
            cashback = murah*30/100;
            }
            else if (murah>1000000){
            cashback = murah*25/100;
            }
        }
        else if(x%2==1 && y%2==0){
            if (murah<=100000){
            cashback = murah*50/100;
            }
            else if (murah<=250000){
            cashback = murah*35/100;
            }
            else if (murah<=500000){
            cashback = murah*20/100;
            }
            else if (murah<=1000000){
            cashback = murah*15/100;
            }
            else if (murah>1000000){
            cashback = murah*10/100;
            }
        }
        else if((x%2==0 && y%2==0)||(x%2==1 &&y%2==1)){
        cashback = murah*5/100;
        }
		if(x==3||x==10||x==17||x==24){
           voucher=1;
        }
	}
	
	if(beruntung==1){
        printf("MANTAPKUY..!! Kamu mendapatkan poin sebesar %d dari pembelian ini.\n", cashback);
        if(voucher==1){
        printf("==========================================================\n");
		printf("TAMBAHAN BONUS UNTUK KAMU : Voucher Makan Senilai 500.000\n");
        printf("==========================================================\n");
		}
    }
        else {
            printf("Mohon Maaf Kamu Belum Beruntung.\n");
        }
return 0;
}