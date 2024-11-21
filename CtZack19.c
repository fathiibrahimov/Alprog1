#include <stdio.h>

typedef struct{
	int tanggalpesan;
	int nomenu;
	int harga;
}pesanan;

int main (){
	
	pesanan satu;
	pesanan dua;
	pesanan tiga;
	
	int tanggalbatas;
	int check1,check2,check3;
	
	check1=1;
	check2=1;
	check3=1;
	
	//meminta masukan user
	scanf("%d", &tanggalbatas);
	scanf("%d %d %d", &satu.tanggalpesan, &satu.nomenu, &satu.harga);
	scanf("%d %d %d", &dua.tanggalpesan, &dua.nomenu, &dua.harga);
	scanf("%d %d %d", &tiga.tanggalpesan, &tiga.nomenu, &tiga.harga);
	
	//menentukan apakah pesanan itu valid
	if(satu.tanggalpesan>(tanggalbatas-7)){
		check1=0;
	}if(dua.tanggalpesan>(tanggalbatas-7)){
		check2=0;
	}if(tiga.tanggalpesan>(tanggalbatas-7)){
		check3=0;
	}
	
	//mencari pesanan yang valid
	if(check1==1 || check2==1 || check3==1){
		printf("> KANDIDAT MENU\n");
	}else{
		printf("> TIDAK ADA MENU CATERING YANG TERPILIH\n");
	}
	
	if (check1==1){
		switch (satu.nomenu){
			case 1 : {
				printf("1. ");
				printf("Kentang, Katsu, Omelette, dan Salad.\n");
				printf("   Tanggal Pemesanan: %d\n", satu.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", satu.harga);
				break;
			}
			case 2 : {
				printf("1. ");
				printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
				printf("   Tanggal Pemesanan: %d\n", satu.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", satu.harga);
				break;
			}
			case 3 : {
				printf("1. ");
				printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
				printf("   Tanggal Pemesanan: %d\n", satu.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", satu.harga);
				break;
			}
			case 4 : {
				printf("1. ");
				printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
				printf("   Tanggal Pemesanan: %d\n", satu.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", satu.harga);
				break;
			}
		}	
	}if (check2==1){
		switch (dua.nomenu){
			case 1 : {
				if(check1==1){
					printf("2. ");
				}else {
					printf("1. ");
				}
				printf("Kentang, Katsu, Omelette, dan Salad.\n");
				printf("   Tanggal Pemesanan: %d\n", dua.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", dua.harga);
				break;
			}
			case 2 : {
				if(check1==1){
					printf("2. ");
				}else {
					printf("1. ");
				}
				printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
				printf("   Tanggal Pemesanan: %d\n", dua.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", dua.harga);
				break;
			}
			case 3 : {
				if(check1==1){
					printf("2. ");
				}else {
					printf("1. ");
				}
				printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
				printf("   Tanggal Pemesanan: %d\n", dua.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", dua.harga);
				break;
			}
			case 4 : {
				if(check1==1){
					printf("2. ");
				}else {
					printf("1. ");
				}
				printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
				printf("   Tanggal Pemesanan: %d\n", dua.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", dua.harga);
				break;
			}
		}
	}if (check3==1){
		switch (tiga.nomenu){
			case 1 : {
				if(check1==1 && check2==1){
					printf("3. ");
				}else if(check2==0 && check1==0){
					printf("1. ");
				}else{
					printf("2. ");
				}
				printf("Kentang, Katsu, Omelette, dan Salad.\n");
				printf("   Tanggal Pemesanan: %d\n", tiga.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", tiga.harga);
				break;
			}
			case 2 : {
				if(check1==1 && check2==1){
					printf("3. ");
				}else if(check2==0 && check1==0){
					printf("1. ");
				}else{
					printf("2. ");
				}
				printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
				printf("   Tanggal Pemesanan: %d\n", tiga.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", tiga.harga);
				break;
			}
			case 3 : {
				if(check1==1 && check2==1){
					printf("3. ");
				}else if(check2==0 && check1==0){
					printf("1. ");
				}else{
					printf("2. ");
				}
				printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
				printf("   Tanggal Pemesanan: %d\n", tiga.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", tiga.harga);
				break;
			}
			case 4 : {
				if(check1==1 && check2==1){
					printf("3. ");
				}else if(check2==0 && check1==0){
					printf("1. ");
				}else{
					printf("2. ");
				}
				printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
				printf("   Tanggal Pemesanan: %d\n", tiga.tanggalpesan);
				printf("   Usulan Harga: Rp. %d\n", tiga.harga);
				break;
			}
		}
	}
	
	//memasukkan diskon
	if(satu.tanggalpesan%5==0 && satu.tanggalpesan!=0){
		satu.harga=satu.harga-(satu.harga*20/100);
	}if(dua.tanggalpesan%5==0 && dua.tanggalpesan!=0){
		dua.harga=dua.harga-(dua.harga*20/100);
	}if(tiga.tanggalpesan%5==0 && tiga.tanggalpesan!=0){
		tiga.harga=tiga.harga-(tiga.harga*20/100);
	}
	
	//memilih pesanan termahal
	if(check1==1 || check2==1 || check3==1){
		printf("\n> MENU CATERING TERPILIH\n");
	}
	
	if(satu.harga>dua.harga && satu.harga>tiga.harga && check1==1){
		switch (satu.nomenu){
			case 1 : {
				printf("Kentang, Katsu, Omelette, dan Salad.\n");
				printf("Harga: Rp. %d\n", satu.harga);
				break;
			}
			case 2 : {
				printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
				printf("Harga: Rp. %d\n", satu.harga);
				break;
			}
			case 3 : {
				printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
				printf("Harga: Rp. %d\n", satu.harga);
				break;
			}
			case 4 : {
				printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
				printf("Harga: Rp. %d\n", satu.harga);
				break;
			}
		}
	}else if(dua.harga>satu.harga && dua.harga>tiga.harga && check2==1){
		switch (dua.nomenu){
			case 1 : {
				printf("Kentang, Katsu, Omelette, dan Salad.\n");
				printf("Harga: Rp. %d\n", dua.harga);
				break;
			}
			case 2 : {
				printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
				printf("Harga: Rp. %d\n", dua.harga);
				break;
			}
			case 3 : {
				printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
				printf("Harga: Rp. %d\n", dua.harga);
				break;
			}
			case 4 : {
				printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
				printf("Harga: Rp. %d\n", dua.harga);
				break;
			}
		}
	}else if(tiga.harga>satu.harga && tiga.harga>dua.harga && check3!=0){
		switch (tiga.nomenu){
			case 1 : {
				printf("Kentang, Katsu, Omelette, dan Salad.\n");
				printf("Harga: Rp. %d\n", tiga.harga);
				break;
			}
			case 2 : {
				printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
				printf("Harga: Rp. %d\n", tiga.harga);
				break;
			}
			case 3 : {
				printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
				printf("Harga: Rp. %d\n", tiga.harga);
				break;
			}
			case 4 : {
				printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
				printf("Harga: Rp. %d\n", tiga.harga);
				break;
			}
		}
	}else if(satu.harga==dua.harga && satu.harga>tiga.harga){
		if(satu.tanggalpesan<dua.tanggalpesan){
			switch (satu.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 4 : {
					printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
			}
		}else if(satu.tanggalpesan>dua.tanggalpesan){
			switch (dua.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 4 : {
					printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
			}	
		}
	}else if(dua.harga==tiga.harga && dua.harga>satu.harga){
		if(dua.tanggalpesan<tiga.tanggalpesan){
			switch (dua.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 4 : {
					printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
			}
		}else if(dua.tanggalpesan>tiga.tanggalpesan){
			switch (tiga.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 4 : {
					printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
			}	
		}
	}else if(tiga.harga==satu.harga && tiga.harga>dua.harga){
		if(tiga.tanggalpesan<satu.tanggalpesan){
			switch (tiga.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 4 : {
					printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
			}
		}else if(tiga.tanggalpesan>satu.tanggalpesan){
			switch (satu.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 4 : {
					printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
			}	
		}
	}else if(satu.harga==dua.harga==tiga.harga){
		if(satu.tanggalpesan<dua.tanggalpesan && satu.tanggalpesan<tiga.tanggalpesan){
			switch (satu.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
				case 4 : {
					printf("Harga: Rp. %d\n", satu.harga);
					break;
				}
			}
		}else if(dua.tanggalpesan<satu.tanggalpesan &&dua.tanggalpesan<tiga.tanggalpesan){
			switch (dua.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
				case 4 : {
					printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
					printf("Harga: Rp. %d\n", dua.harga);
					break;
				}
			}
		}else if(tiga.tanggalpesan<satu.tanggalpesan && tiga.tanggalpesan<dua.tanggalpesan){
			switch (tiga.nomenu){
				case 1 : {
					printf("Kentang, Katsu, Omelette, dan Salad.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 2 : {
					printf("Nasi, Rendang, Sayur Daun Ubi, dan Sambal Cabai Hijau.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 3 : {
					printf("Nasi Goreng, Ati Ampela, Telor Ceplok, dan Kerupuk.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
				case 4 : {
					printf("Nasi, Ayam Crispy, Sop, dan Pudding.\n");
					printf("Harga: Rp. %d\n", tiga.harga);
					break;
				}
			}
		}
	}
	
	 
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas 3
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/