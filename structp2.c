#include <stdio.h>

typedef struct{
	int jenisKendaraan;
	int lamaParkir;
	char kendaraanKaryawan;
	int biayaParkir;
}tamu;

int main(){
	printf("===========================================\n");
	printf(" SELAMAT DATANG DI LAHAN PARKIR MAS SIGIT! \n");
	printf("===========================================\n");
	printf("                BIAYA PARKIR               \n");
	printf("1. Motor       : Rp. 1.500/jam\n");
	printf("2. Mobil       : Rp. 3.000/jam\n");
	printf("3. Bus         : Rp. 20.000 berlaku flat\n");
	printf("4. Helikopter  : Rp. 2.500.000 berlaku flat\n");
	printf("===========================================\n");
	
	tamu pertama;
	pertama.biayaParkir=0;
	
	printf(" Masukkan jenis kendaraan anda: ");
	scanf("%d", &pertama.jenisKendaraan);
	
	printf(" Masukkan lama parkir kendaraan (jam): ");
	scanf("%d", &pertama.lamaParkir);
	
	printf(" Kendaraan karyawan (y/n): ");
	scanf(" %c", &pertama.kendaraanKaryawan);
	
	int biayaParkir=0;
	
	switch (pertama.jenisKendaraan) {
		case 1:
			pertama.biayaParkir = pertama.lamaParkir * 1500;
			break;
		
		case 2:
			pertama.biayaParkir = pertama.lamaParkir * 3000;
			break;
		
		case 3:
			pertama.biayaParkir = 20000;
			break;
		
		case 4:
			pertama.biayaParkir = 2500000;
			break;
		
		default:
			printf("===========================================\n");
			printf(" Jenis kendaraan tidak tersedia.\n");
			printf("===========================================\n");
			break;
	}
	
	if(pertama.biayaParkir != 0 && pertama.jenisKendaraan >= 1 && pertama.jenisKendaraan <=4){
		if(pertama.kendaraanKaryawan =='y'){
			pertama.biayaParkir = pertama.biayaParkir / 2;
		}
		
		printf("===========================================\n");
		printf(" BIAYA PARKIR: Rp. %d\n", pertama.biayaParkir);
		printf("===========================================\n");
	}
	
	return 0;
	
}