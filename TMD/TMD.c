#include "TMD.h"

//prosedur untuk mencari rata rata
void carirata(int arrAngka[n]){
	float total=0;//untuk menyimpan total penjumlahan
	int i;//untuk iterator
	for(i=0;i<n;i++){//menambahkan tiap angka ke total
		total=total+arrAngka[i];
	}
	rerata=total/n;//cari rata ratanya
}

//prosedur untuk memisahkan dia yang buatku pusing
void pisah(){
	int walwal=rerata;//untuk menampung nilai depan sementara
	int depandepan=rerata;
	int temp[100];//untuk menampung sementara supaya bisa dibalik arraynya
	idepan =0;//untuk menampung panjang array depan
	int i,j;//untuk iterator
	
	if(walwal>9){//kalau nilai depan lebih dari 9, maka dia akan memasukkan masing masing digit ke array
		while(walwal){//mencari nilai depan dari float
			temp[idepan]= walwal%10;
			walwal=walwal/10;
			idepan++;
		}
		for(i=idepan-1,j=0;i>=0;i--, j++){//membalikkan urutannya
			depan[j]=temp[i];
		}
	}else{//kalau ternyata lebih kecil dari 10
		depan[0]=walwal;
		idepan=1;
	}
	
	//ini buat tau berapa panjang kekanan array yang udah jadi, saya iseng aja naronya di prosedur pisah
	gatauapaan=((idepan*4)+10)*tebal;
	
	//supaya nilai walwalnya balik lagi kaya awal
	walwal=rerata;
	tengah=(rerata-walwal)*10;//misahin yang tengah
	akhir=((rerata*100)-(walwal*100)-(tengah*10));//misahin yang akhir
}

void mola(){
	int i;//buat iterator
	int panjangbawah=5*tebal;//buat nentuin panjang kebawah
	int count=0;//buat nentuin berapa kali harus diulang posisi copyannya
	int posisi=0;//buat nentuin harus copy urutan berapa
	int benar=0;//biar ga muter muter
	pusing = 0;
	
	for(i=0;i<panjangbawah;i++){
		moli(i,posisi);//manggil prosedur moli
		if(count==tebal-1){//kalo udah diulang sebanyak ketebalan langsung maju posisinya
			posisi++;
			count=0;
			benar=1;
		}
		if(benar==0){//biar countnya nambah
			count++;
		}else{//biar ga muter muter terus
			benar=0;
		}
	}
}

void moli(int p, int posisi){
	int i,j,k;//buat iterator
	int panjangsamping=3*tebal;//buat ngatur berapa kali ngulang
	int penunjuk=0;//buat tau udah sampai mana itu pointernya
	int tunjuksamping=0;//buat tau mau ngopi yang mana
	int count=0;//buat ngitung aja
	int benar=0;//biar ga loop terus
	
	//semua pola dari spasi sampai titik, biar gampang saya mikirnya
	int spasi[5]={0,0,0,0,0};
	int nol[5][3]={
		{0,1,0},
		{1,0,1},
		{0,0,0},
		{1,0,1},
		{0,1,0},
	};
	int satu[5]={0, 1, 0, 1, 0};
	int dua[5][3]={
		{0,1,0},
		{0,0,1},
		{0,1,0},
		{1,0,0},
		{0,1,0},
	};
	int tiga[5][2]={
		{1,0},
		{0,1},
		{1,0},
		{0,1},
		{1,0},
	};
	int empat[5][3]={
		{0,0,0},
		{1,0,1},
		{0,1,0},
		{0,0,1},
		{0,0,1},
	};
	int lima[5][3]={
		{0,1,0},
		{1,0,0},
		{0,1,0},
		{0,0,1},
		{0,1,0},
	};
	int enam[5][3]={
		{0,1,0},
		{1,0,0},
		{0,1,0},
		{1,0,1},
		{0,1,0},
	};
	int tujuh[5][3]={
		{1,1,0},
		{0,0,1},
		{0,0,0},
		{0,0,1},
		{0,0,0},
	};
	int delapan[5][3]={
		{0,1,0},
		{1,0,1},
		{0,1,0},
		{1,0,1},
		{0,1,0},
	};
	int sembilan[5][3]={
		{0,1,0},
		{1,0,1},
		{0,1,0},
		{0,0,1},
		{0,1,0},
	};
	int titik[5][2]={
		{0,0},
		{0,0},
		{0,0},
		{0,0},
		{1,0},
	};
	
	for(i=0;i<idepan;i++){//buat print yang depan
		if(depan[i]==0){//kalo depan yang ke i sama dengan 0
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=nol[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==1){//kalo depan yang ke i sama dengan 1
			for(j=0;j<1*tebal;j++){
				polapola[p][penunjuk]=satu[posisi];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==2){//kalo depan yang ke i sama dengan 2
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=dua[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==3){//kalo depan yang ke i sama dengan 3
			for(j=0;j<2*tebal;j++){
				polapola[p][penunjuk]=tiga[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==4){//kalo depan yang ke i sama dengan 4
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=empat[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==5){//kalo depan yang ke i sama dengan 5
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=lima[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==6){//kalo depan yang ke i sama dengan 6
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=enam[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==7){//kalo depan yang ke i sama dengan 7
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=tujuh[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==8){//kalo depan yang ke i sama dengan 8
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=delapan[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (depan[i]==9){//kalo depan yang ke i sama dengan 9
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=sembilan[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}
		tunjuksamping=0;
		
		for(j=0;j<1*tebal;j++){
			polapola[p][penunjuk]=spasi[posisi];
			if(count==tebal-1){
				tunjuksamping++;
				count=0;
				benar=1;
			}
			if(benar==0){
				count++;
			}else{
				benar=0;
			}
			penunjuk++;
		}
		tunjuksamping=0;
		
	}
	
	for(j=0;j<2*tebal;j++){
		polapola[p][penunjuk]=titik[posisi][tunjuksamping];
		if(count==tebal-1){
			tunjuksamping++;
			count=0;
			benar=1;
		}
		if(benar==0){
			count++;
		}else{
			benar=0;
		}
		penunjuk++;
	}
	tunjuksamping=0;
		
		//akhir dari depan
		
		//buat yang tengah
		if(tengah==0){//kalo tengah sama dengan 0
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=nol[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==1){//kalo tengah sama dengan 1
			for(j=0;j<1*tebal;j++){
				polapola[p][penunjuk]=satu[posisi];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==2){//kalo tengah sama dengan 2
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=dua[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==3){//kalo tengah sama dengan 3
			for(j=0;j<2*tebal;j++){
				polapola[p][penunjuk]=tiga[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==4){//kalo tengah sama dengan 4
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=empat[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==5){//kalo tengah sama dengan 5
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=lima[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==6){//kalo tengah sama dengan 6
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=enam[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==7){//kalo tengah sama dengan 7
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=tujuh[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==8){//kalo tengah sama dengan 8
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=delapan[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (tengah==9){//kalo tengah sama dengan 9
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=sembilan[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}
		tunjuksamping=0;
		
		for(j=0;j<1*tebal;j++){
		polapola[p][penunjuk]=spasi[posisi];
		if(count==tebal-1){
			tunjuksamping++;
			count=0;
			benar=1;
		}
		if(benar==0){
			count++;
		}else{
			benar=0;
		}
		penunjuk++;
	}
		tunjuksamping=0;
		
		//akhir untuk tengah
		
		if(akhir==0){//kalo akhir sama dengan 0
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=nol[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==1){//kalo akhir sama dengan 1
			for(j=0;j<1*tebal;j++){
				polapola[p][penunjuk]=satu[posisi];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==2){//kalo akhir sama dengan 2
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=dua[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==3){//kalo akhir sama dengan 3
			for(j=0;j<2*tebal;j++){
				polapola[p][penunjuk]=tiga[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==4){//kalo akhir sama dengan 4
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=empat[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==5){//kalo akhir sama dengan 5
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=lima[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==6){//kalo akhir sama dengan 6
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=enam[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==7){//kalo akhir sama dengan 7
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=tujuh[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==8){//kalo akhir sama dengan 8
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=delapan[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}else if (akhir==9){//kalo akhir sama dengan 9
			for(j=0;j<3*tebal;j++){
				polapola[p][penunjuk]=sembilan[posisi][tunjuksamping];
				if(count==tebal-1){
					tunjuksamping++;
					count=0;
					benar=1;
				}
				if(benar==0){
					count++;
				}else{
					benar=0;
				}
				penunjuk++;
			}
		}
		tunjuksamping=0;
		//akhir dari akhir, end of the end
}

//prosedur buat cetak sekaligus hilangkan spasi
void ilangSpasi(int arrAngka[n]){
	int i,j;//buat iterator
	int abcde=5*tebal;//iseng aja
	int panjangPusing[abcde];//buat tau sampai mana printnya, biar ga kebablasan
	
	for(i=0;i<abcde;i++){//nah ini iseng aja, mohon maaf saya kebanyakan iseng, ini biar pasti isi arraynya nol dulu
		panjangPusing[i]=0;
	}
	
	for(i=0;i<5*tebal;i++){//ini mulai nyari tau tiap baris sampai mana printnya
		for(j=0;j<gatauapaan;j++){
			if(polapola[i][j]==1){
				panjangPusing[i]=j+1;
			}
		}
	}
	
	//buat iseng aja biar tau isinya berapa
	/*for(i=0;i<abcde;i++){
		printf("panjang : %d\n", panjangPusing[i]);
	}*/
	
	for(i=0;i<n;i++){
		printf("%d", arrAngka[i]);
		if(i<n-1){
			printf(" + ");
		}
	}
	printf("\n\n");
	
	for(i=0;i<5*tebal;i++){//ini buat print
		if(panjangPusing[i]==0){//kalau ga ada angka satu, alias kosong satu bagian horizontal itu, langsung enter aja, anggap aja rumah sendiri
			//printf("\n");
		}else{//nah ini kalau misalnya ternyata ada yang harus diprint, alias ga boleh asal enter aja
			for(j=0;j<panjangPusing[i];j++){
				if(polapola[i][j]==1){
					printf("@");
				}else{
					printf(" ");
				}
			}
		}
		printf("\n");//nyetak new line biar ga jalan terus kesamping, padahal dilarang lurus
	}
}