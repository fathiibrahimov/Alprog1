#include <stdio.h>
//bismillah :)

int main (){
	int n,m;
	scanf("%d", &n); // meminta user untuk menentukan panjang array pertama
	char x[n];

	int i;
	for(i = 0;i < n;i++){ // meminta user untuk mengisi array pertama
		scanf(" %c",&x[i]);
	}
	scanf("%d", &m); // meminta user untuk menentukan panjang array kedua
	char y[m];

	for(i = 0;i < m;i++){ // meminta user untuk mengisi array pertama
		scanf(" %c",&y[i]);
	}
	char z[m+n]; // membuat  array untuk menampung gabungan dari array pertama dan kedua
	int a = 0;
	int b = 0;

	for(i = 0;i < m+n;i++){ //menggabungkan array pertama dan kedua
		if(n >= m){ //kondisi jika array pertama lebih panjang atau sama dengan
			if(2*m > i){
				z[i] = x[a];
				a++;
				z[i+1] = y[b];
				b++;
				i++;
			}else{
				z[i] = x[a];
				a++;
			}
		}else{ //kondisi jika array kedua lebih panjang
			if(2*n > i){
				z[i] = x[a];
				a++;
				z[i+1] = y[b];
				b++;
				i++;
			}else{
				z[i] = y[b];
				b++;
			}
		}
	}
	//menampilkan gabungan dari array pertama dan kedua
	if(m >= 1 && n >=1 ){
		printf("Bentuk Biner Gabungan : ");  
		for(i = 0;i < m+n;i++){
			printf("%c",z[i] );
		}
		printf("\n");
	}
	int des = 0;
	int k = 1;
	int j;
	
	//mengkonversi dari bilangan biner ke bilangan desimal
	for(i = 0;i < m+n;i++){ 
		if(z[i] == '1'){
			k = 1;
			for(j = 1;j < (m+n)-i;j++){
				k *= 2;
			}
			des += k;
		}
	}
	//menampilkan bilangan desimal 
	if(des >=0){ 
		printf("Bentuk Desimal : %d\n",des);
	}
	
	//menampilkan kode seperti yang dicontoh dengan berbagai keadaan
	if(des > m*n){ 
		printf("Kode : Cinta Alpro!\n");
	}else if(des < m*n){
		printf("Kode : Cinta Koding!\n");
	}else{
		printf("Kode : Wow Mudah Sekali!\n");
	}

	return 0;
}
 /* Saya Zuhal Robbani mengerjakan Kompetisi UTS  Alpro1 2019 (CAKAR19) C1 dalam mata
 kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */
