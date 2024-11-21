#include <stdio.h>
#include <string.h>

int main (){
	char masukan[100]; //membuat array untuk menampung masukan user
	scanf("%s", masukan); //meminta masukan user untuk array masukan
	int pmasukan = strlen(masukan); //untuk menampung panjang dari masukan

	//membuat array untuk menampung hasil pisahan
	char a[100];
	char b[100];
	char c[100];
	
	int i;
	int d=0;
	int cek=0;
	
	//katanya variabelnya harus dikosongin semua supaya keluaran sesuai
	for(i=0;i<pmasukan;i++){  
		a[i]= '\0';
		b[i]= '\0';
		c[i]= '\0';
	}
	
	//mulai pemisahan
	for(i=0;i<pmasukan;i++){ 
		if(masukan[i] == '-'){//jika terdapat pemisah langsung tercek true
			cek=1;
		}else if(cek==0){//kondisi jika belum bertemu pemisah, masukan terisi ke array a
			a[i] = masukan[i];
		}else{//kondisi jika sudah bertemu pemisah, kuncinya akan masuk ke array b
			b[d++] = masukan[i];
		}
	}
	
	int j;
	d = 0;
	int l,m;
	int pa=strlen(a), pb=strlen(b);
	for(i=0;i<pa;i++){  //memisahkan kode dari pemisah
		l=0;
		m=0;
		for(j=0;j<pb;j++){
			if(a[i+j] == b[j]){
				l++;
			}
		}

		if(l==pb){ //penghapusan jika ada kata atau huruf yang sama
			m=1;
		} 
		if(m==0){ 
			c[d++] = a[i];
		}else{
			i=i-1+pb;
		}
	}
	
	printf("hasil :\n%s\n\n",c); //menampilkan output hasil

	int pc=strlen(c);
	int e[pc],f = 0;

	for(i=0;i<pc;i++){ //untuk menampung hasil yang sudah dibalik
		e[i]=c[pc-1-i];
	}

	int y=1, x=0;
	for(i=0; i<20;i++){
		if(pc>0){
			pc= pc-y;
			x++;
		}
		y+=2;
	}
	y=1;
	int k;
	pc=strlen(c);
	printf("Pola :\n"); //menampilkan output pola
	d=0;
	y=1;
	
	//menampilkan output piramida
	for(i=0;i<x;i++){ 
		for(k=i;k<x-1;k++){
			printf(" ");
		}
		for(k=0;k<y;k++){
			if(d<pc){
				if(e[d]+i>=123){ //akan kembali ke huruf a jika ASCII-nya telah melewati huruf z
					do{
						e[d]=e[d]-26;
					}while(e[d]+i>=123);
				}
				printf("%c",(e[d]+i)); //proses enkripsi dengan penambahan sesuai baris
				d++;
			}
		}
		y+=2;
		printf("\n");
	}
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas 6
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/